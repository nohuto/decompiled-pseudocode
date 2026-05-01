/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x1804A5A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180192AE0 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2,
        HSTRING *a3)
{
  __int64 v4; // rax
  HSTRING v5; // rax
  HSTRING v7; // [rsp+20h] [rbp-48h] BYREF
  const wchar_t *v8; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(char *, _BYTE *, __int64))(*((_QWORD *)this - 3) + 72LL))((char *)this - 24, v9, a2);
  if ( *(_QWORD *)(v4 + 24) >= 8uLL )
    v4 = *(_QWORD *)v4;
  v8 = (const wchar_t *)v4;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((Microsoft::WRL::Wrappers::HString *)&v7, &v8);
  std::wstring::_Tidy_deallocate((__int64)v9);
  v5 = v7;
  v7 = 0LL;
  *a3 = v5;
  WindowsDeleteString(0LL);
  return 0LL;
}
