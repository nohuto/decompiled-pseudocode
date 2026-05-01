/*
 * XREFs of RegGetDword @ 0x18073B5EC
 * Callers:
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002F2B0 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 *     ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x18010EA20 (-IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE6B0 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegGetDword(HKEY a1, const WCHAR *a2, __int64 a3)
{
  DWORD v4; // ecx
  LSTATUS v6; // eax
  LSTATUS v7; // edi
  HKEY hKey; // [rsp+30h] [rbp-10h] BYREF
  DWORD cbData; // [rsp+60h] [rbp+20h] BYREF
  unsigned int Data; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+74h] [rbp+34h]
  DWORD Type; // [rsp+78h] [rbp+38h] BYREF

  v11 = HIDWORD(a3);
  hKey = 0LL;
  Data = 0;
  Type = 0;
  cbData = 4;
  if ( !a1 )
  {
    v4 = 87;
LABEL_3:
    SetLastError(v4);
    return 0LL;
  }
  if ( a2 )
  {
    v6 = RegOpenKeyExW(a1, a2, 0, 0x20019u, &hKey);
    if ( v6 || (a1 = hKey) == 0LL )
    {
      v4 = v6;
      goto LABEL_3;
    }
  }
  else
  {
    hKey = a1;
  }
  v7 = RegQueryValueExW(a1, L"AuditBoot", 0LL, &Type, (LPBYTE)&Data, &cbData);
  if ( v7 )
    goto LABEL_12;
  if ( cbData != 4 )
  {
    v7 = 13;
LABEL_12:
    Data = 0;
  }
  if ( a2 )
    RegCloseKey(hKey);
  SetLastError(v7);
  return Data;
}
