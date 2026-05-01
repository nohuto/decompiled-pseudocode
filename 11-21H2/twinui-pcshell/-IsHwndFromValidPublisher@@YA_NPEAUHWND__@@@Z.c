/*
 * XREFs of ?IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z @ 0x1800195CC
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180019CFC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$K32GetModuleFileNameExW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJPEAXPEAUHINSTANCE__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x180579F3C (--$K32GetModuleFileNameExW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1.c)
 *     ??$WindowTabHostCreationBlocked@AEAPEBG@WindowTabHostTelemetry@@SAXAEAPEBG@Z @ 0x180579FA0 (--$WindowTabHostCreationBlocked@AEAPEBG@WindowTabHostTelemetry@@SAXAEAPEBG@Z.c)
 *     ??$WindowTabHostCreationBlocked@AEAY00$$CBG@WindowTabHostTelemetry@@SAXAEAY00$$CBG@Z @ 0x18057A014 (--$WindowTabHostCreationBlocked@AEAY00$$CBG@WindowTabHostTelemetry@@SAXAEAY00$$CBG@Z.c)
 *     ?IsAllowedSignInfo@@YA_NPEBG0@Z @ 0x18057A148 (-IsAllowedSignInfo@@YA_NPEBG0@Z.c)
 */

char __fastcall IsHwndFromValidPublisher(HWND hWnd)
{
  char *v3; // rax
  __int64 v4; // rdx
  const WCHAR *v5; // rbx
  char v6; // di
  __int64 SystemInformation; // [rsp+20h] [rbp-E0h] BYREF
  DWORD dwProcessId; // [rsp+28h] [rbp-D8h] BYREF
  LPWSTR FileNameW; // [rsp+30h] [rbp-D0h] BYREF
  char *v10; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v11[6]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v12; // [rsp+58h] [rbp-A8h]
  int v13; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+70h] [rbp-90h]
  unsigned __int16 v16[128]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v17[264]; // [rsp+1B0h] [rbp+B0h] BYREF

  SystemInformation = 8LL;
  if ( NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) >= 0
    && (SystemInformation & 0x200000000LL) != 0 )
  {
    return 1;
  }
  SystemInformation = 0LL;
  dwProcessId = 0;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  v3 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v10 = v3;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (wil::K32GetModuleFileNameExW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,128>(
          v3,
          v4,
          &SystemInformation),
        (v5 = (const WCHAR *)SystemInformation) != 0LL) )
  {
    memset_0(v16, 0, sizeof(v16));
    memset_0(v17, 0, 0x208uLL);
    memset_0(v11, 0, 0x68uLL);
    v11[0] = 104;
    v14 = v16;
    v15 = 128;
    v12 = v17;
    v13 = 260;
    if ( (int)IEGetSignatureInfo(v5, 4111LL, v11) >= 0 )
    {
      v6 = 1;
      if ( (unsigned int)(v11[1] - 5) <= 1 && IsAllowedSignInfo(v16, v17) )
        goto LABEL_12;
    }
    FileNameW = PathFindFileNameW(v5);
    WindowTabHostTelemetry::WindowTabHostCreationBlocked<unsigned short const * &>(&FileNameW);
  }
  else
  {
    WindowTabHostTelemetry::WindowTabHostCreationBlocked<unsigned short const (&)[1]>();
  }
  v6 = 0;
LABEL_12:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v10);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&SystemInformation);
  return v6;
}
