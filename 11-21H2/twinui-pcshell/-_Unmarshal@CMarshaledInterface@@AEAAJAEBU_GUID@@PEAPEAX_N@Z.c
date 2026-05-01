/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674
 * Callers:
 *     ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000C500 (--$Unmarshal@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x18001E9C0 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     _lambda_1b237cfa226cb7a358646b393456f6b8_::operator() @ 0x1800292A0 (_lambda_1b237cfa226cb7a358646b393456f6b8_--operator().c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x18002D740 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     _lambda_1a5eae780b6c1663d254d797c20a7e0a_::operator() @ 0x180038990 (_lambda_1a5eae780b6c1663d254d797c20a7e0a_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__&_::Run @ 0x180041790 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532f1f640b749836e78f2398ba6696dd__-_--Run.c)
 *     _lambda_9365875fc030439f6f0f43b5b8276b2a_::operator() @ 0x1800B4380 (_lambda_9365875fc030439f6f0f43b5b8276b2a_--operator().c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18011546C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ??R_lambda_27f92beab74f4884d4c93c012b588629_@@QEAAXXZ @ 0x1801AA29C (--R_lambda_27f92beab74f4884d4c93c012b588629_@@QEAAXXZ.c)
 *     ??R_lambda_eb2c18d22b535205c554a19bae5aba9b_@@QEAAXXZ @ 0x1801AA848 (--R_lambda_eb2c18d22b535205c554a19bae5aba9b_@@QEAAXXZ.c)
 *     _lambda_257868cc277a89cd587da3eed8fcd545_::operator() @ 0x1801BE6D8 (_lambda_257868cc277a89cd587da3eed8fcd545_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::Run @ 0x18030EB60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--Run.c)
 *     _lambda_ad5234f91f428945d7e3ad0275c3eac2_::operator() @ 0x18031E658 (_lambda_ad5234f91f428945d7e3ad0275c3eac2_--operator().c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x1803C4144 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1803C4238 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 *     ?GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D6960 (-GetBarFlyoutExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D6BB0 (-GetJumpListExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D71F0 (-GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_::operator() @ 0x1804B3EE0 (_lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_--operator().c)
 * Callees:
 *     ?Attach@?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAXPEAVCMarshalStream@CMarshaledInterface@@@Z @ 0x180179824 (-Attach@-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAXPEAVCMarshalStream@CM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v8; // rcx
  IStream *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  InterfaceAndReleaseStream = -2147467259;
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v11 = 0LL;
    if ( a4 || *(_DWORD *)(v7 + 24) != 2 )
    {
      *(_QWORD *)this = 0LL;
      Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::Attach(&v11, v7);
      v7 = v11;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    *a3 = 0LL;
    if ( *(_DWORD *)(v7 + 24) == 2 )
    {
      if ( *(_QWORD *)(v7 + 32) )
      {
        v8 = *(_QWORD *)(v7 + 32);
        if ( v8 )
          InterfaceAndReleaseStream = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v8 + 24LL))(
                                        v8,
                                        a2,
                                        a3);
        else
          InterfaceAndReleaseStream = 0;
      }
      else
      {
        InterfaceAndReleaseStream = -2147024809;
      }
    }
    else
    {
      v10 = *(IStream **)(v7 + 16);
      *(_QWORD *)(v7 + 16) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v10, a2, a3);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return InterfaceAndReleaseStream;
}
