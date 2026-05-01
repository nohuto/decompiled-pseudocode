/*
 * XREFs of ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000C500
 * Callers:
 *     _lambda_8e74cd273561b15a8d8b985ad84a422d_::operator() @ 0x18000C1B0 (_lambda_8e74cd273561b15a8d8b985ad84a422d_--operator().c)
 *     _lambda_93476770441aba3d23e91e227d0f076e_::operator() @ 0x18019C5A0 (_lambda_93476770441aba3d23e91e227d0f076e_--operator().c)
 *     _lambda_b17d91d583f17bab605aaa56f30e01cd_::operator() @ 0x1801A7230 (_lambda_b17d91d583f17bab605aaa56f30e01cd_--operator().c)
 *     _lambda_0a887bd1ba0ce60acd924cbd6ddeb365_::operator() @ 0x180376708 (_lambda_0a887bd1ba0ce60acd924cbd6ddeb365_--operator().c)
 *     _lambda_9b6ed6ccb199c6b3492e39643cf3e189_::operator() @ 0x1803936DC (_lambda_9b6ed6ccb199c6b3492e39643cf3e189_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

int __fastcall CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        CMarshaledInterface *this,
        void **a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return CMarshaledInterface::_Unmarshal(this, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, a2, 0);
}
