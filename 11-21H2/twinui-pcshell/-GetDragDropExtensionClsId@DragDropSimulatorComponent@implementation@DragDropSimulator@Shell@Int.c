/*
 * XREFs of ?GetDragDropExtensionClsId@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU_GUID@@XZ @ 0x18056CF50
 * Callers:
 *     ?GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$com_ptr_t@UIDragDropExtensionForOLE@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18056D0D4 (-GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x18017EE84 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDragDropExtensionClsId(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this,
        struct _GUID *__return_ptr retstr)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  HRESULT v5; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-E0h]
  unsigned int phkResulta; // [rsp+20h] [rbp-E0h]
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  HKEY *p_hKey; // [rsp+40h] [rbp-C0h]
  HKEY v12; // [rsp+48h] [rbp-B8h] BYREF
  char v13; // [rsp+50h] [rbp-B0h]
  DWORD Type; // [rsp+58h] [rbp-A8h] BYREF
  OLECHAR Data[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  hKey = 0LL;
  p_hKey = &hKey;
  v12 = 0LL;
  v13 = 1;
  v3 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Ole\\Extensions", 0, 1u, &v12);
  if ( v3 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      423LL,
      (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)v3,
      phkResult);
  if ( v13 )
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      p_hKey,
      v12);
  cbData = 520;
  v4 = RegQueryValueExW(hKey, L"DragDropExtension", 0LL, &Type, (LPBYTE)Data, &cbData);
  if ( v4 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      428LL,
      (__int64)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)v4,
      phkResulta);
  v5 = CLSIDFromString(Data, retstr);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1AF,
      (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
      (const char *)(unsigned int)v5,
      phkResulta);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return retstr;
}
