/*
 * XREFs of ??1?$CAutoPtr@VCChildSubmixInstance@@@ATL@@QEAA@XZ @ 0x1400670DC
 * Callers:
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$1 @ 0x14003499C (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<CChildSubmixInstance>::~CAutoPtr<CChildSubmixInstance>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
