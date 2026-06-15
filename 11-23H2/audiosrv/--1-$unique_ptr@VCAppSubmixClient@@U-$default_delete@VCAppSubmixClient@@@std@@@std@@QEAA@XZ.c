/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x1800D13F0
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$3 @ 0x1800D230E (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$3.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$5 @ 0x1800D2326 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$5.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(__int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(*a1);
    operator delete(v1);
  }
}
