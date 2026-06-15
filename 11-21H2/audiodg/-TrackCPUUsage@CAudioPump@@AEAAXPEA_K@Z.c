/*
 * XREFs of ?TrackCPUUsage@CAudioPump@@AEAAXPEA_K@Z @ 0x14006BA28
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14006B550 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McTemplateU0pii_EtwEventWriteTransfer @ 0x14006BC44 (McTemplateU0pii_EtwEventWriteTransfer.c)
 */

void __fastcall CAudioPump::TrackCPUUsage(CAudioPump *this, unsigned __int64 *a2)
{
  int v4; // edx
  signed __int64 v5; // rcx
  double v6; // xmm0_8
  unsigned __int64 v7; // rax
  int v8; // ecx
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm0_8
  __int64 v12; // rbx
  LARGE_INTEGER v13; // [rsp+40h] [rbp+8h] BYREF

  v13.QuadPart = 0LL;
  QueryPerformanceCounter(&v13);
  v5 = v13.QuadPart - *a2;
  if ( v5 < 0 )
  {
    v7 = v5 & 1 | ((v13.QuadPart - *a2) >> 1);
    v6 = (double)(int)v7 + (double)(int)v7;
  }
  else
  {
    v6 = (double)(int)v5;
  }
  v8 = g_u64QPCFrequency;
  v9 = v6 * 10000000.0;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
  {
    v8 = g_u64QPCFrequency & 1;
    v10 = (double)(int)(v8 | (g_u64QPCFrequency >> 1)) + (double)(int)(v8 | (g_u64QPCFrequency >> 1));
  }
  else
  {
    v10 = (double)(int)g_u64QPCFrequency;
  }
  ++*((_DWORD *)this + 94);
  v11 = v9 / v10;
  v12 = (unsigned int)(int)v11;
  *((_QWORD *)this + 46) += v12;
  *((_QWORD *)this + 42) = v12;
  if ( (byte_1400C1841 & 8) != 0 )
    McTemplateU0pii_EtwEventWriteTransfer(v8, v4, (_DWORD)this, (int)v11, *((_QWORD *)this + 41));
  if ( v12 > *((_QWORD *)this + 41) && _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
    *((_QWORD *)this + 45) = _InterlockedIncrement64((volatile signed __int64 *)this + 45);
  else
    _InterlockedExchange64((volatile __int64 *)this + 45, 0LL);
}
