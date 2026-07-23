/*
 * XREFs of KiCancelClockTimer @ 0x140340F00
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KiResetClockIntervalOneShot @ 0x140340D78 (KiResetClockIntervalOneShot.c)
 *     KePrepareClockTimerForIdle @ 0x1403475C4 (KePrepareClockTimerForIdle.c)
 *     KeUpdatePendingQosRequest @ 0x14046187C (KeUpdatePendingQosRequest.c)
 * Callees:
 *     KiSetNextClockTickDueTime @ 0x1402C87A0 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldRearmClockTimer @ 0x1403410CC (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KiCancelClockTimer(__int64 a1, __int64 a2, char a3)
{
  NTSTATUS result; // eax
  char v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  char *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  result = 2 * a2;
  *(_BYTE *)(a1 + 16LL * (int)a2 + 36388) &= ~1u;
  if ( (unsigned int)dword_140C02F60 > 5 )
  {
    v11 = 0;
    v14 = 0;
    v9 = &v7;
    v7 = a2;
    v12 = &v6;
    v10 = 4;
    v6 = a3;
    v13 = 1;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C02F60,
               (unsigned __int8 *)byte_14002D6C3,
               0LL,
               0LL,
               4u,
               &v8);
  }
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    result = KiShouldRearmClockTimer(a1, a2);
    if ( (_BYTE)result )
    {
      *(_DWORD *)(a1 + 36368) = 2;
      return KiSetNextClockTickDueTime(1);
    }
  }
  return result;
}
