/*
 * XREFs of ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x1400082C0
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140002CF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x140008EC0 (-Resume@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEB4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioPump::SetTimer(CAudioPump *this, void *a2, __int64 a3, char a4)
{
  LARGE_INTEGER v7; // rax
  unsigned __int64 v8; // rdx
  const char *v9; // r9
  double v11; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm1_8
  LARGE_INTEGER DueTime; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  if ( a4 )
  {
    v7.QuadPart = 0LL;
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    v11 = PerformanceCount.QuadPart < 0
        ? (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
        : (double)(int)PerformanceCount.LowPart;
    v12 = v11 * -10000000.0;
    v13 = (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL
        ? (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        : (double)(int)g_u64QPCFrequency;
    v7.QuadPart = -a3;
    *((_QWORD *)this + 35) = a3 - (unsigned int)(int)(v12 / v13);
  }
  DueTime = v7;
  v8 = (__int64)((unsigned __int128)(a3 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
  if ( !SetWaitableTimer(a2, &DueTime, v8 + (v8 >> 63), 0LL, 0LL, 0) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x18D,
             (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\AudioPump.h",
             v9);
  else
    return 0LL;
}
