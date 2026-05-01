/*
 * XREFs of ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1805F5420
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x1805F5B78 (s_DrawThemeTextPPIAware.c)
 *     _s_DrawThemeTextPPIAware_::_1_::dtor$0 @ 0x1805F60D8 (_s_DrawThemeTextPPIAware_--_1_--dtor$0.c)
 *     s_OnDrawItem @ 0x1805F61A8 (s_OnDrawItem.c)
 *     _s_OnDrawItem_::_1_::dtor$0 @ 0x1805F6C03 (_s_OnDrawItem_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1805F5790 (-InternalClose@CompatibleDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC(Microsoft::WRL::Wrappers::CompatibleDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  Microsoft::WRL::Wrappers::CompatibleDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
