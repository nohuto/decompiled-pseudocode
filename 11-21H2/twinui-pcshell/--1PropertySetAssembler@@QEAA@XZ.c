/*
 * XREFs of ??1PropertySetAssembler@@QEAA@XZ @ 0x1804923F8
 * Callers:
 *     _SystemTray::TrayInfoTipDisplayInfo::InitProperties_::_1_::dtor$1 @ 0x180492F27 (_SystemTray--TrayInfoTipDisplayInfo--InitProperties_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PropertySetAssembler::~PropertySetAssembler(PropertySetAssembler *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this);
}
