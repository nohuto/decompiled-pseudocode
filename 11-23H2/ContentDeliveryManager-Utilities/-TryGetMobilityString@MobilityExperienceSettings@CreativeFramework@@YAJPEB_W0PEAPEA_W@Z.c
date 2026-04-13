/*
 * XREFs of ?TryGetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAPEA_W@Z @ 0x1800C1B58
 * Callers:
 *     ?get_PairingContext@MobilityExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800C1E60 (-get_PairingContext@MobilityExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003F2D0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180045520 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

__int64 __fastcall CreativeFramework::MobilityExperienceSettings::TryGetMobilityString(
        CreativeFramework::MobilityExperienceSettings *this,
        const wchar_t *a2,
        wchar_t *a3,
        wchar_t **a4)
{
  LSTATUS ValueW; // eax
  int v6; // ebx
  void *v7; // rax
  PVOID v8; // rsi
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  PVOID pvData; // [rsp+70h] [rbp+8h] BYREF
  DWORD cb; // [rsp+78h] [rbp+10h] BYREF
  int cb_4; // [rsp+7Ch] [rbp+14h]

  cb_4 = HIDWORD(a2);
  pvData = this;
  *(_QWORD *)a3 = 0LL;
  cb = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"PairingContext",
             2u,
             0LL,
             0LL,
             &cb);
  v6 = ValueW;
  if ( ValueW > 0 )
    v6 = (unsigned __int16)ValueW | 0x80070000;
  if ( v6 < 0 )
  {
    if ( v6 == -2147024894 )
      return 0;
  }
  else
  {
    pvData = 0LL;
    v7 = CoTaskMemAlloc(cb);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &pvData,
      v7);
    v8 = pvData;
    v9 = RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
           L"PairingContext",
           2u,
           0LL,
           pvData,
           &cb);
    if ( v9 )
    {
      v6 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x6D,
             (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
             (const char *)v9,
             (unsigned __int64)"RegKey: %ws %ws",
             (const char *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"PairingContext");
    }
    else
    {
      pvData = 0LL;
      *(_QWORD *)a3 = v8;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&pvData);
  }
  return (unsigned int)v6;
}
