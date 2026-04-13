/*
 * XREFs of ??1SwapStartTileService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800ACA7C
 * Callers:
 *     ??_GSwapStartTileService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800AD080 (--_GSwapStartTileService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::SwapStartTileService::~SwapStartTileService(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 33);
  std::wstring::_Tidy((_QWORD *)this + 29, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 25, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 21, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 17, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 13, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 9, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 5, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
