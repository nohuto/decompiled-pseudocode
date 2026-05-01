/*
 * XREFs of ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x1806F24EC
 * Callers:
 *     wistd::__function::__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::operator() @ 0x1806F0D00 (wistd--__function--__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl(enum_wil--Folde.c)
 * Callees:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x180090534 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x18025AA60 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x1803DC878 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x18051DA28 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18051DA28.c)
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806F0FC8 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        const enum wil::FolderChangeEvent *a2,
        WCHAR *a3)
{
  char v6; // di
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax
  const unsigned __int16 *v10; // rdx
  int v11; // eax
  char v12; // si
  char *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR *v18; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int16 *v19[2]; // [rsp+40h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-98h]
  _QWORD v21[2]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-78h]
  unsigned __int64 v23; // [rsp+78h] [rbp-70h]
  _QWORD v24[2]; // [rsp+80h] [rbp-68h] BYREF
  int cchCount1[4]; // [rsp+90h] [rbp-58h]
  char v26[32]; // [rsp+A0h] [rbp-48h] BYREF

  v18 = a3;
  v6 = 0;
  v17 = 0;
  try
  {
    std::wstring::wstring(v21, a3);
    std::wstring::wstring(v24, L"Backup");
    if ( CompareStringOrdinal(a3, cchCount1[0], L"Backup", cchCount1[0], 1) != 2 || v22 <= *(_QWORD *)cchCount1 )
      goto LABEL_12;
    v7 = *(_QWORD *)cchCount1 + 1LL;
    v19[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v21, *(_QWORD *)cchCount1 + 1LL);
    v8 = -1LL;
    if ( v22 - v7 != -1LL )
      v8 = v22 - v7;
    v9 = v21;
    if ( v23 >= 8 )
      v9 = (_QWORD *)v21[0];
    std::wstring::assign((char *)v19, (char *)v9 + 2 * v7, v8);
    v6 = 3;
    v17 = 3;
    v10 = (const unsigned __int16 *)v19;
    if ( si128.m128i_i64[1] >= 8uLL )
      v10 = v19[0];
    if ( !winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser(this, v10)
      || (v11 = *(_DWORD *)a2 - 1, v12 = 1, (v11 & 0xFFFFFFFD) != 0) )
    {
LABEL_12:
      v12 = 0;
    }
    if ( (v6 & 1) != 0 )
      std::wstring::_Tidy_deallocate((__int64)v19);
    if ( v12 )
    {
      v13 = std::operator+<unsigned short>(v26, (_QWORD *)this + 59, L"\\");
      std::operator+<unsigned short>(v19, v13, (__int64)a3);
      std::wstring::_Tidy_deallocate((__int64)v26);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(v14, (__int64 *)v19);
      std::wstring::_Tidy_deallocate((__int64)v19);
    }
    std::wstring::_Tidy_deallocate((__int64)v24);
    std::wstring::_Tidy_deallocate((__int64)v21);
  }
  catch ( ... )
  {
    v15 = winrt::to_hresult(&v17);
    CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const * &>(
      v16,
      v15,
      (__int64 *)&v18);
  }
}
