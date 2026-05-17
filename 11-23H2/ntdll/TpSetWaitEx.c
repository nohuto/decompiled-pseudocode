/*
 * XREFs of TpSetWaitEx @ 0x180030740
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B7A0 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfNotificationThread @ 0x18004C700 (RtlpWnfNotificationThread.c)
 *     RtlDeregisterWaitEx @ 0x18004C870 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18004D620 (RtlRegisterWait.c)
 *     RtlpTpWaitCheckReset @ 0x18004E534 (RtlpTpWaitCheckReset.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800502A4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpNotificationThread @ 0x18005E6A0 (EtwpNotificationThread.c)
 *     TpSetWait @ 0x180083150 (TpSetWait.c)
 * Callees:
 *     TppSetupNextWait @ 0x18002FD10 (TppSetupNextWait.c)
 *     TppCancelWait @ 0x180030648 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180031A7C (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180127278 (TppRaiseInvalidParameter.c)
 */

_BOOL8 __fastcall TpSetWaitEx(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v8; // rbx
  char v9; // al
  signed int v10; // ebx
  BOOL v11; // ebp
  char v13; // al
  signed int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(a1, 0LL, a2 != 0) )
    return 0LL;
  if ( a4 )
  {
    TppRaiseInvalidParameter();
    return 0LL;
  }
  v8 = *(_QWORD *)(a1 + 144);
  RtlAcquireSRWLockExclusive(a1 + 240);
  v9 = TppCancelWait(a1, v8 + 112, 0, &v14);
  v10 = v14;
  v11 = v14 != 0;
  if ( a2 && !*(_BYTE *)(a1 + 355) )
  {
    if ( !v9 )
    {
      v13 = *(_BYTE *)(a1 + 464) | 1;
      *(_QWORD *)(a1 + 376) = a2;
      *(_BYTE *)(a1 + 464) = v13;
      if ( a3 )
      {
        *(_BYTE *)(a1 + 464) = v13 | 2;
        *(_QWORD *)(a1 + 384) = *a3;
      }
      goto LABEL_8;
    }
    if ( !*(_QWORD *)(a1 + 360) )
    {
      v10 += TppSetupNextWait((_QWORD *)a1, a2, a3);
      v14 = v10;
LABEL_8:
      if ( v10 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
        v10 = 0;
        v14 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 240);
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10) == -v10 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
  return v11;
}
