/*
 * XREFs of ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800AC510
 * Callers:
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x1800AC0FC (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x18009AE28 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800ACAFC (--4-$com_ptr_t@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Backgrou.c)
 *     ?CreateTileIdentifier@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W00@Z @ 0x1800AD3F4 (-CreateTileIdentifier@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@U.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x1800B02D8 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=7
CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        const wchar_t *a2,
        void **a3)
{
  int v4; // ebp
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  int v8; // ecx
  __int64 TileIdentifier; // rax
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = (int)a2;
  *(_QWORD *)this = &CreativeFramework::Actions::AddTileToCollectionService::`vftable';
  std::wstring::wstring((__int64)this + 16, a3);
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  std::wstring::wstring((__int64)this + 80, a3 + 8);
  v6 = (_QWORD *)((char *)this + 112);
  std::wstring::wstring((__int64)this + 112, a3 + 12);
  v7 = (_QWORD *)((char *)this + 144);
  std::wstring::wstring((__int64)this + 144, a3 + 16);
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 40);
  *((_BYTE *)this + 8) = (unsigned int)std::wstring::compare(a3 + 4, L"hidden") == 0;
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v7 = (_QWORD *)*v7;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v6 = (_QWORD *)*v6;
  TileIdentifier = CreativeFramework::Actions::AddTileToCollectionService::CreateTileIdentifier(
                     v8,
                     (unsigned int)&v11,
                     v4,
                     (_DWORD)v6,
                     (__int64)v7);
  wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
    (char *)this + 176,
    TileIdentifier);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v11);
  return this;
}
