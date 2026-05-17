/*
 * XREFs of TppUpdateSubQueueTimer @ 0x180030DF8
 * Callers:
 *     TppSetTimer @ 0x180030BC8 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x180030F5C (TppSingleTimerExpiration.c)
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x1800A0060 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A2580 (ZwSetTimer2.c)
 *     TppETWTimerCancelNtTimer @ 0x180126390 (TppETWTimerCancelNtTimer.c)
 *     TppETWTimerSetNtTimer @ 0x180126660 (TppETWTimerSetNtTimer.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  LOBYTE(a3) = a2;
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v7 = *(_QWORD *)(v5 + 32) - v6;
    v8 = (unsigned __int128)(v7 * (__int128)0x346DC5D63886594BLL) >> 64;
    v9 = v7 / 10000;
    if ( *(_QWORD *)a1 != v6 || *(_DWORD *)(a1 + 112) != (_DWORD)v9 )
    {
      v10 = 10000LL * (unsigned int)v9;
      *(_QWORD *)a1 = v6;
      v15 = v10;
      *(_DWORD *)(a1 + 112) = v9;
      if ( !(_BYTE)a3 )
      {
        a4 = 2147353520LL;
        v8 = RtlpFreezeTimeBias;
        a3 = MEMORY[0x7FFE03B0];
        v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
        if ( v10 > v6 )
        {
          v6 = 0LL;
        }
        else
        {
          v10 -= v6;
          v6 = v10;
        }
      }
      v13 = v6;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v8, a3, a4) )
        v11 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478LL;
      if ( *(_BYTE *)v11 )
        TppETWTimerSetNtTimer(a1, v6, (unsigned int)v9);
      ((void (__fastcall *)(_QWORD, __int64 *, _QWORD, int *))ZwSetTimer2)(*(_QWORD *)(a1 + 24), &v13, 0LL, &v14);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(0LL, a2, a3, a4) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
