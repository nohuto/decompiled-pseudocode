/*
 * XREFs of ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1806A3964
 * Callers:
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A3868 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$PinHistoryOperationBlockedChecked@W4PinHistoryOperationBlockedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAX$$QEAW4PinHistoryOperationBlockedCheckResult@0@@Z @ 0x18069A81C (--$PinHistoryOperationBlockedChecked@W4PinHistoryOperationBlockedCheckResult@PinManagerTelemetry.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x18069F680 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x18069F790 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 */

char __fastcall PinHistory::IsPinOperationBlocked(PSRWLOCK SRWLock, _QWORD **a2)
{
  _QWORD *Ptr; // rdi
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD **v10; // r8
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF

  AcquireSRWLockShared(SRWLock);
  if ( *std::chrono::steady_clock::now(&v14) >= (__int64)SRWLock[1].Ptr )
  {
    Ptr = SRWLock[2].Ptr;
    v5 = SRWLock[3].Ptr;
    while ( Ptr != v5 )
    {
      if ( *std::chrono::steady_clock::now(&v14) < Ptr[2] )
      {
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          v15,
          *a2);
        v6 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
               v16,
               Ptr);
        if ( AreEquivalentPinSources(v6, v15) )
        {
          LODWORD(v14) = 3;
          goto LABEL_18;
        }
      }
      Ptr += 3;
    }
    v7 = SRWLock[5].Ptr;
    v8 = SRWLock[6].Ptr;
    while ( v7 != v8 )
    {
      if ( *std::chrono::steady_clock::now(&v14) < v7[2] )
      {
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          v16,
          a2);
        v9 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
               v15,
               v7);
        if ( AreEquivalentPinOperations((_QWORD **)v9, v10) )
        {
          LODWORD(v14) = 2;
          goto LABEL_18;
        }
      }
      v7 += 3;
    }
    LODWORD(v14) = 0;
    PinManagerTelemetry::PinHistoryOperationBlockedChecked<enum PinManagerTelemetry::PinHistoryOperationBlockedCheckResult>((int *)&v14);
    ReleaseSRWLockShared(SRWLock);
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 0;
  }
  else
  {
    LODWORD(v14) = 1;
LABEL_18:
    PinManagerTelemetry::PinHistoryOperationBlockedChecked<enum PinManagerTelemetry::PinHistoryOperationBlockedCheckResult>((int *)&v14);
    ReleaseSRWLockShared(SRWLock);
    v13 = (std::_Ref_count_base *)a2[1];
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return 1;
  }
}
