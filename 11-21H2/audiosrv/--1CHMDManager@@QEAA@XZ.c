/*
 * XREFs of ??1CHMDManager@@QEAA@XZ @ 0x18010EA24
 * Callers:
 *     HOLOGRAPHICDISPLAY_rundown @ 0x18010EEE0 (HOLOGRAPHICDISPLAY_rundown.c)
 *     s_CreateHolographicDisplay @ 0x18010EF10 (s_CreateHolographicDisplay.c)
 *     s_DestroyHolographicDisplay @ 0x18010F030 (s_DestroyHolographicDisplay.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CHMDManager::~CHMDManager(CHMDManager *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 1);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this);
}
