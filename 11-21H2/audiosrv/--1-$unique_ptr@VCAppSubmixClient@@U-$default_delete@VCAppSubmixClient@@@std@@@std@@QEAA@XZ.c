/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x1800FE4D0
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$1 @ 0x18006FB80 (_BuildDeviceGraphForStream_--_1_--dtor$1.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$3 @ 0x180108014 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$3.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$5 @ 0x18010802C (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$5.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(__int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(*a1);
    operator delete(v1);
  }
}
