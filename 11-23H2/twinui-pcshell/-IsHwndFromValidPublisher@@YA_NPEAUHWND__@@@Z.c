/*
 * XREFs of ?IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z @ 0x180639690
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$K32GetModuleFileNameExW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJPEAXPEAUHINSTANCE__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18063941C (--$K32GetModuleFileNameExW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1.c)
 *     ??$WindowTabHostCreationBlocked@AEAPEBG@WindowTabHostTelemetry@@SAXAEAPEBG@Z @ 0x180639480 (--$WindowTabHostCreationBlocked@AEAPEBG@WindowTabHostTelemetry@@SAXAEAPEBG@Z.c)
 *     ??$WindowTabHostCreationBlocked@AEAY00$$CBG@WindowTabHostTelemetry@@SAXAEAY00$$CBG@Z @ 0x1806394F4 (--$WindowTabHostCreationBlocked@AEAY00$$CBG@WindowTabHostTelemetry@@SAXAEAY00$$CBG@Z.c)
 *     ?IsAllowedSignInfo@@YA_NPEBG0@Z @ 0x180639638 (-IsAllowedSignInfo@@YA_NPEBG0@Z.c)
 */

char __fastcall IsHwndFromValidPublisher(HWND hWnd)
{
  WCHAR *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // rdi
  char v7; // si
  __int64 SystemInformation; // [rsp+28h] [rbp-E0h] BYREF
  DWORD dwProcessId; // [rsp+34h] [rbp-D4h] BYREF
  _DWORD v10[6]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 *v11; // [rsp+50h] [rbp-B8h]
  __int64 v12; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v13; // [rsp+60h] [rbp-A8h]
  int v14; // [rsp+68h] [rbp-A0h]
  unsigned __int16 v15[128]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 v16[264]; // [rsp+1A8h] [rbp+A0h] BYREF

  SystemInformation = 8LL;
  if ( NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) >= 0
    && (SystemInformation & 0x200000000LL) != 0 )
  {
    return 1;
  }
  v3 = 0LL;
  dwProcessId = 0;
  SystemInformation = 0LL;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  v6 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && (wil::K32GetModuleFileNameExW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,128>(
          (__int64)v6,
          v4,
          (void **)&SystemInformation),
        (v3 = (WCHAR *)SystemInformation) != 0LL) )
  {
    memset_0(v15, 0, sizeof(v15));
    memset_0(v16, 0, 0x208uLL);
    memset_0(v10, 0, 0x68uLL);
    v10[0] = 104;
    v13 = v15;
    v14 = 128;
    v11 = v16;
    LODWORD(v12) = 260;
    if ( (int)IEGetSignatureInfo(v3, 4111LL, v10) >= 0 )
    {
      v7 = 1;
      if ( (unsigned int)(v10[1] - 5) <= 1 && IsAllowedSignInfo(v15, v16) )
        goto LABEL_13;
    }
    SystemInformation = (__int64)PathFindFileNameW(v3);
    WindowTabHostTelemetry::WindowTabHostCreationBlocked<unsigned short const * &>(&SystemInformation);
  }
  else
  {
    WindowTabHostTelemetry::WindowTabHostCreationBlocked<unsigned short const (&)[1]>(v5);
  }
  v7 = 0;
  if ( v6 && v6 != (char *)-1LL )
LABEL_13:
    CloseHandle(v6);
  if ( v3 )
    CoTaskMemFree(v3);
  return v7;
}
