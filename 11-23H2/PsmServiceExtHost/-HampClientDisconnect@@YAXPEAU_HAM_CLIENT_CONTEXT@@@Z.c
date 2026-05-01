/*
 * XREFs of ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DE7C
 * Callers:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012B04 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074B80 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080E6C (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180014698 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x180015C04 (RmpWnfCleanupPendingCallbackList.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800173FC (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017438 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18004E0B4 (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampClientGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@K@Z @ 0x18004E0DC (-HampClientGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@K@Z.c)
 *     ?HampClientQueryReconnectTimeout@@YAKXZ @ 0x18004E2BC (-HampClientQueryReconnectTimeout@@YAKXZ.c)
 */

void __fastcall HampClientDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  _QWORD *v2; // rsi
  unsigned int v3; // edx
  struct _HAM_ACTIVITY *i; // rax
  __int64 v5; // rdx
  struct _HAM_ACTIVITY *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  if ( *((_WORD *)a1 + 110) )
  {
    v8 = -10000LL * HampClientQueryReconnectTimeout();
    for ( i = HampClientGetFirstActivity(a1, v3); ; i = HampClientGetNextActivity(v6, v5) )
    {
      v6 = i;
      if ( !i )
        break;
      if ( *((_BYTE *)i + 562) == 2 )
        HampActStop(i, v5);
    }
    HampClientAcquireLockExclusive(a1);
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    *((_DWORD *)a1 + 36) |= 2u;
    TpSetTimer(*((_QWORD *)a1 + 26), &v8, 0LL, 10LL);
  }
  else
  {
    HampClientAcquireLockExclusive(a1);
  }
  *((_DWORD *)a1 + 50) = 0;
  ++*((_DWORD *)a1 + 54);
  if ( (*((_BYTE *)a1 + 144) & 1) == 0 )
  {
    if ( *((_QWORD *)a1 + 16) )
    {
      v2 = (_QWORD *)*((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = 0LL;
    }
    if ( *((_DWORD *)a1 + 30) || *((_DWORD *)a1 + 31) )
    {
      v9 = *((_QWORD *)a1 + 15);
      *((_QWORD *)a1 + 15) = 0LL;
    }
  }
  HampClientReleaseLockExclusive(a1, v7);
  if ( v2 )
    RmpWnfCleanupPendingCallbackList(v2);
  if ( v9 )
    NtDeleteWnfStateName(&v9);
  RtlWakeAddressAll((char *)a1 + 216);
  CemRcObjectDereference(a1);
}
