/*
 * XREFs of PoRegisterCoalescingCallback @ 0x140843270
 * Callers:
 *     CmpCmdInit @ 0x140842D94 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x140B49A88 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x140B60E60 (PopCoalescingInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140223590 (ExInitializePushLock.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x1403A0038 (ExCompareExchangeCallBack.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(__int64 a1, char a2, __int64 *a3, __int64 a4)
{
  __int64 Pool2; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 result; // rax

  Pool2 = ExAllocatePool2(64LL, 72LL, 1648586576LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = Pool2;
  *(_QWORD *)(Pool2 + 8) = PopCoalescingCallback;
  *(_QWORD *)(Pool2 + 40) = a4;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_BYTE *)(Pool2 + 32) = a2 != 0;
  ExInitializePushLock((PEX_RUNDOWN_REF)Pool2);
  if ( !ExCompareExchangeCallBack((signed __int64 *)(Pool2 + 64), (struct _EX_RUNDOWN_REF *)Pool2, 0LL) )
    return 3221225485LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoalRegistrationListLock);
  v9 = off_140C06490;
  v10 = (_QWORD *)(Pool2 + 48);
  if ( *off_140C06490 != (_UNKNOWN *)&PopCoalRegistrationList )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 56) = off_140C06490;
  *v10 = &PopCoalRegistrationList;
  *v9 = v10;
  off_140C06490 = (_UNKNOWN **)(Pool2 + 48);
  PopReleaseRwLock((__int64 *)&PopCoalRegistrationListLock);
  result = 0LL;
  *a3 = Pool2;
  return result;
}
