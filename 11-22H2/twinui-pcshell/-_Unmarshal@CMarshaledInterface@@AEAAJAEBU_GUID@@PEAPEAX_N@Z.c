/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18009D6A4
 * Callers:
 *     _lambda_1a5eae780b6c1663d254d797c20a7e0a_::operator() @ 0x18000BDB0 (_lambda_1a5eae780b6c1663d254d797c20a7e0a_--operator().c)
 *     _lambda_1b237cfa226cb7a358646b393456f6b8_::operator() @ 0x180036BA8 (_lambda_1b237cfa226cb7a358646b393456f6b8_--operator().c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x180040800 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x180059870 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18009D7F4 (--$Unmarshal@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Wind.c)
 *     _lambda_9365875fc030439f6f0f43b5b8276b2a_::operator() @ 0x1800F5368 (_lambda_9365875fc030439f6f0f43b5b8276b2a_--operator().c)
 *     ?Unmarshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0A20 (-Unmarshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&_::Run @ 0x1803B0EF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__-_--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x1803CAFC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--Run.c)
 *     _lambda_4223d05ba65e9276aa35258dd9088577_::operator() @ 0x1803EC514 (_lambda_4223d05ba65e9276aa35258dd9088577_--operator().c)
 *     _lambda_cc71f995493a19c27cb11ded8267b6a9_::operator() @ 0x1804716DC (_lambda_cc71f995493a19c27cb11ded8267b6a9_--operator().c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x18049D784 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x18049D878 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 *     ?GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804B3640 (-GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804B3890 (-GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804B3ED0 (-GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??R_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@QEAA@XZ @ 0x1804FFEB8 (--R_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@QEAA@XZ.c)
 *     ??R_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@QEAA@XZ @ 0x1804FFF9C (--R_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAXPEAVCMarshalStream@CMarshaledInterface@@@Z @ 0x1801BCC48 (-Attach@-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAXPEAVCMarshalStream@CM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(
        CMarshaledInterface *this,
        const struct _GUID *a2,
        void **a3,
        char a4)
{
  unsigned int InterfaceAndReleaseStream; // edi
  __int64 v7; // rbx
  IStream *v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  InterfaceAndReleaseStream = -2147467259;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v10 = 0LL;
    if ( a4 || *(_DWORD *)(v7 + 24) != 2 )
    {
      *(_QWORD *)this = 0LL;
      Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::Attach(&v10, v7);
      v7 = v10;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v11 = 0LL;
      v10 = v7;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    }
    *a3 = 0LL;
    if ( *(_DWORD *)(v7 + 24) == 2 )
    {
      if ( *(_QWORD *)(v7 + 32) )
        InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, void **))(**(_QWORD **)(v7 + 32) + 24LL))(
                                      *(_QWORD *)(v7 + 32),
                                      a2,
                                      a3);
      else
        InterfaceAndReleaseStream = -2147024809;
    }
    else
    {
      v9 = *(IStream **)(v7 + 16);
      *(_QWORD *)(v7 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v9, a2, a3);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  return InterfaceAndReleaseStream;
}
