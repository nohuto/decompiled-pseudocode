/*
 * XREFs of TpSetWaitEx @ 0x180030910
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B900 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfNotificationThread @ 0x18004C860 (RtlpWnfNotificationThread.c)
 *     RtlDeregisterWaitEx @ 0x18004C9D0 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x18004D780 (RtlRegisterWait.c)
 *     RtlpTpWaitCheckReset @ 0x18004E694 (RtlpTpWaitCheckReset.c)
 *     RtlpWnfRegisterTpNotification @ 0x180050404 (RtlpWnfRegisterTpNotification.c)
 *     EtwpNotificationThread @ 0x180061530 (EtwpNotificationThread.c)
 *     TpSetWait @ 0x180082AE0 (TpSetWait.c)
 * Callees:
 *     TppSetupNextWait @ 0x18002FEE0 (TppSetupNextWait.c)
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x180031BDC (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
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
