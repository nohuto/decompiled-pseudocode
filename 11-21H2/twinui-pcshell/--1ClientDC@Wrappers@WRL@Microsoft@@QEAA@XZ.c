/*
 * XREFs of ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1805F53EC
 * Callers:
 *     s_OnMeasureItem @ 0x1805F6C18 (s_OnMeasureItem.c)
 *     _s_OnMeasureItem_::_1_::dtor$0 @ 0x1805F7047 (_s_OnMeasureItem_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1805F5760 (-InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ.c)
 */

void __fastcall Microsoft::WRL::Wrappers::ClientDC::~ClientDC(Microsoft::WRL::Wrappers::ClientDC *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::ClientDC::`vftable';
  Microsoft::WRL::Wrappers::ClientDC::InternalClose(this);
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ClientDCTraits>::`vftable';
}
