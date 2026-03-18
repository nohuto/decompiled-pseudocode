/*
 * XREFs of ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070F78
 * Callers:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C006F4E4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     FreeHook @ 0x1C00704F0 (FreeHook.c)
 *     _SetWinEventHook @ 0x1C0070AC4 (_SetWinEventHook.c)
 *     DestroyEventHook @ 0x1C0070D40 (DestroyEventHook.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C01AEB84 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01BB430 (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(
        __int64 a1)
{
  unsigned int DLT; // eax

  DLT = DLT_HANDLEMANAGER::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  return a1;
}
