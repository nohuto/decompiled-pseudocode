/*
 * XREFs of TryReadRegDWord @ 0x1801E8DE0
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TryReadRegDWord(__int64 a1, __int64 a2, __int64 a3)
{
  LSTATUS ValueW; // eax
  bool v5; // sf
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+64h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  v7 = a2;
  v8 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\",
             L"AltTabDelay",
             0x10u,
             0LL,
             &v7,
             &v8);
  v5 = ValueW < 0;
  if ( ValueW > 0 )
    v5 = 1;
  if ( v5 )
  {
    *(_BYTE *)(a1 + 4) = 0;
  }
  else
  {
    *(_DWORD *)a1 = v7;
    *(_BYTE *)(a1 + 4) = 1;
  }
  return a1;
}
