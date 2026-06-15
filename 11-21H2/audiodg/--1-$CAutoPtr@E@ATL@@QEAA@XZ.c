/*
 * XREFs of ??1?$CAutoPtr@E@ATL@@QEAA@XZ @ 0x14005DBC0
 * Callers:
 *     _SerializeDeviceGraphs_::_1_::dtor$0 @ 0x14005F263 (_SerializeDeviceGraphs_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned char>::~CAutoPtr<unsigned char>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
