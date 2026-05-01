/*
 * XREFs of PersistEnterprisePinDataToRegistry_Old @ 0x180288158
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stringify@?$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802887C4 (-Stringify@-$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@win.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1803E4410 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x18046A3A4 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall PersistEnterprisePinDataToRegistry_Old(__int64 a1)
{
  winrt::hstring *v2; // rax
  const unsigned __int16 *v3; // rax
  int v4; // eax
  int v5; // eax
  LSTATUS v6; // eax
  LSTATUS v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(a1) )
  {
    v2 = (winrt::hstring *)winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonArray>::Stringify(
                             a1,
                             &v11);
    v3 = winrt::hstring::c_str(v2);
    v4 = SHRegSetString(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"EnterprisePinData",
           v3);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x153,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v4,
        v9);
    winrt::hstring::~hstring(&v11);
    v5 = SHRegSetDWORD(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"EnterprisePinDataVersion",
           1u);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x155,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v5,
        v9);
  }
  else
  {
    v6 = SHDeleteValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"EnterprisePinData");
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15A,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v6,
        v9);
    v7 = SHDeleteValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"EnterprisePinDataVersion");
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15B,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7,
        v9);
  }
  return 1;
}
