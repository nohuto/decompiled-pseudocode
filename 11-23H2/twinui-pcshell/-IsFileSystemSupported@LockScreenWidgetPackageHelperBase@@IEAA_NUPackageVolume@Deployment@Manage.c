/*
 * XREFs of ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x18023EFDC
 * Callers:
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x18023CF60 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1 @ 0x18023FBD0 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800B08A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall LockScreenWidgetPackageHelperBase::IsFileSystemSupported(__int64 a1, _QWORD *a2)
{
  bool v3; // bl
  int v4; // eax
  const WCHAR *v5; // rax
  LPWSTR lpFileSystemNameBuffer; // rdx
  char *v7; // rdx
  char *i; // rax
  __int64 v9; // rcx
  char *v10; // r8
  char *v11; // rax
  __int64 v12; // r9
  const wchar_t *v13; // r8
  bool v14; // cc
  wchar_t v15; // cx
  __int64 v16; // rax
  void *v18; // [rsp+48h] [rbp-9h] BYREF
  void *v19; // [rsp+50h] [rbp-1h] BYREF
  void *v20[2]; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp+17h] BYREF
  DWORD nFileSystemNameSize[2]; // [rsp+78h] [rbp+27h]
  unsigned __int64 v23; // [rsp+80h] [rbp+2Fh]

  v20[1] = a2;
  v3 = 0;
  std::wstring::wstring((__int64)v21, 0x104uLL, 0);
  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)*a2 + 64LL))(*a2, &v18);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  v19 = v18;
  winrt::operator+(v20, &v19, L"\\");
  winrt::hstring::~hstring(&v19);
  v5 = winrt::hstring::c_str((winrt::hstring *)v20);
  if ( GetVolumeInformationW(v5, 0LL, 0, 0LL, 0LL, 0LL, lpFileSystemNameBuffer, nFileSystemNameSize[0]) )
  {
    v7 = (char *)v21;
    if ( v23 >= 8 )
      v7 = (char *)v21[0];
    if ( *(_QWORD *)nFileSystemNameSize >= 4uLL )
    {
      for ( i = v7; ; i = v11 + 2 )
      {
        v9 = (&v7[2 * *(_QWORD *)nFileSystemNameSize - 6] - i) >> 1;
        v10 = 0LL;
        if ( v9 )
        {
          while ( *(_WORD *)i != 78 )
          {
            if ( v9 == 1 )
              goto LABEL_13;
            --v9;
            i += 2;
          }
          v10 = i;
        }
LABEL_13:
        v11 = v10;
        if ( !v10 )
          break;
        v12 = 4LL;
        v13 = L"NTFS";
        if ( *(_WORD *)v11 >= 0x4Eu )
        {
          v14 = *(_WORD *)v11 <= 0x4Eu;
          while ( v14 )
          {
            if ( v12 == 1 )
            {
              v16 = (v11 - v7) >> 1;
              goto LABEL_22;
            }
            --v12;
            v15 = *(const wchar_t *)((char *)++v13 + v11 - (char *)L"NTFS");
            v14 = v15 <= *v13;
            if ( v15 < *v13 )
              break;
          }
        }
      }
    }
    v16 = -1LL;
LABEL_22:
    v3 = v16 != -1;
  }
  winrt::hstring::~hstring(v20);
  std::wstring::_Tidy_deallocate((__int64)v21);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a2);
  return v3;
}
