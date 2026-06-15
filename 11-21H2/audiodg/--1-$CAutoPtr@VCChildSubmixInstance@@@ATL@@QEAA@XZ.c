/*
 * XREFs of ??1?$CAutoPtr@VCChildSubmixInstance@@@ATL@@QEAA@XZ @ 0x140062308
 * Callers:
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$1 @ 0x140038E35 (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<CChildSubmixInstance>::~CAutoPtr<CChildSubmixInstance>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
