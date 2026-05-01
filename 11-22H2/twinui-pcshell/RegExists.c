/*
 * XREFs of RegExists @ 0x18010EA80
 * Callers:
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002F2B0 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 *     ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x18010EA20 (-IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE6B0 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegExists(HKEY a1, const WCHAR *a2, const WCHAR *a3)
{
  unsigned int v3; // ebx
  LSTATUS Value; // eax
  BOOL v7; // esi
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  hKey = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( RegOpenKeyExW(a1, a2, 0, 0x20019u, &hKey) || (a1 = hKey) == 0LL )
      {
LABEL_10:
        SetLastError(0);
        return v3;
      }
    }
    else
    {
      hKey = a1;
    }
    if ( a3 )
    {
      Value = RegQueryValueExW(a1, a3, 0LL, 0LL, 0LL, 0LL);
      a1 = hKey;
      v7 = Value == 0;
    }
    else
    {
      v7 = 1;
    }
    if ( a2 )
      RegCloseKey(a1);
    v3 = v7;
    goto LABEL_10;
  }
  SetLastError(0x57u);
  return 0LL;
}
