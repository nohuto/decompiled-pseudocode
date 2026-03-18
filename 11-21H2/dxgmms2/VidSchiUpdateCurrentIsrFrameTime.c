/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C003AE8C
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000CC60 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C0017390 (VidSchiExecuteMmIoFlipAtISR.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

LARGE_INTEGER __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER result; // rax
  BOOL v7; // esi
  LARGE_INTEGER PerformanceCounter; // r9
  signed __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  LONGLONG v13; // rcx
  char v14; // dl
  __int64 v15; // rcx
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]

  v3 = 0LL;
  result.QuadPart = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 44164), 0);
  v7 = a3 != 0;
  PerformanceCounter.QuadPart = 0LL;
  if ( result.LowPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 44176), 0LL, 0LL);
    v11 = *(_QWORD *)(a2 + 44056);
    v12 = v10;
    LODWORD(v13) = v7;
    result.QuadPart = PerformanceCounter.QuadPart - v11;
    if ( v12 )
    {
      if ( result.QuadPart > v12 )
      {
        result.QuadPart /= v12;
        v13 = (PerformanceCounter.QuadPart - v11) / v12;
        if ( !a3 )
        {
          if ( !result.LowPart )
            return result;
          PerformanceCounter.QuadPart = v11 + v12 * result.QuadPart;
        }
      }
    }
  }
  else
  {
    LODWORD(v13) = a3 != 0;
    if ( a3 )
    {
      result = KeQueryPerformanceCounter(0LL);
      PerformanceCounter = result;
      LODWORD(v13) = v7;
    }
  }
  if ( (_DWORD)v13 )
  {
    v14 = 1;
    *(_QWORD *)(a2 + 44064) += (unsigned int)v13;
    result.QuadPart = (unsigned int)++*(_DWORD *)(a2 + 44160);
    if ( result.LowPart >= *(_DWORD *)(a2 + 82724) )
    {
      *(_DWORD *)(a2 + 44080) += v13;
      v14 = 0;
      *(_DWORD *)(a2 + 44160) = 0;
      *(LARGE_INTEGER *)(a2 + 44072) = PerformanceCounter;
    }
    *(_BYTE *)(a2 + 44096) = v14;
    *(LARGE_INTEGER *)(a2 + 44056) = PerformanceCounter;
    if ( *(_BYTE *)(a2 + 8) && !*(_BYTE *)(a1 + 156) )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v17 = 0LL;
      v18 = 0;
      v16 = 0LL;
      result.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))DxgCoreInterface[61])(
                          v15,
                          0LL,
                          0LL,
                          &v16);
      if ( (result.LowPart & 0x80000000) == 0 )
        v3 = *((_QWORD *)&v16 + 1);
      *(_QWORD *)(a2 + 44088) = v3;
    }
  }
  return result;
}
