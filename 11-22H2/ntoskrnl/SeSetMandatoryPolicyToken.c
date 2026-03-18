/*
 * XREFs of SeSetMandatoryPolicyToken @ 0x1407F0D88
 * Callers:
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B5719C (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B5742C (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B576DC (SeMakeSystemToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SeSetMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*a2 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v6, 0);
  *(_DWORD *)(a1 + 212) = *a2;
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v6, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
