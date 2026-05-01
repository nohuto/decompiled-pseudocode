/*
 * XREFs of ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18009D7F4
 * Callers:
 *     _lambda_413f3f880149f4cff04c110e647cdbfa_::operator() @ 0x1801E9280 (_lambda_413f3f880149f4cff04c110e647cdbfa_--operator().c)
 *     _lambda_cb3ae43376446b85946ab6d3cd0c1987_::operator() @ 0x1801F19D0 (_lambda_cb3ae43376446b85946ab6d3cd0c1987_--operator().c)
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180285B78 (_lambda_71ae74f74888d637c85562ef224bc48a_--operator().c)
 *     _lambda_0a887bd1ba0ce60acd924cbd6ddeb365_::operator() @ 0x18044C438 (_lambda_0a887bd1ba0ce60acd924cbd6ddeb365_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        CMarshaledInterface *this,
        void **a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return CMarshaledInterface::_Unmarshal(this, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, a2, 0);
}
