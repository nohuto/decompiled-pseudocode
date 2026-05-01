/*
 * XREFs of sub_18001EB84 @ 0x18001EB84
 * Callers:
 *     AppModelQueryLifecyclePolicy @ 0x180009220 (AppModelQueryLifecyclePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001EB84(HKEY a1, const WCHAR *a2, int a3, _DWORD *a4)
{
  LSTATUS v6; // eax
  unsigned int v7; // ecx
  DWORD v9; // [rsp+30h] [rbp-18h] BYREF
  BYTE v10[20]; // [rsp+34h] [rbp-14h] BYREF

  v9 = 4;
  v6 = RegQueryValueExW(a1, a2, 0LL, 0LL, v10, &v9);
  v7 = 0;
  if ( v6 == 2 || v6 == 234 )
  {
LABEL_2:
    *a4 = 0;
    return v7;
  }
  if ( !v6 )
  {
    if ( v9 == 4 && (a3 & *(_DWORD *)v10) == *(_DWORD *)v10 && (v10[0] & (unsigned __int8)(v10[0] - 1) & 3) == 0 )
    {
      *a4 = *(_DWORD *)v10;
      return v7;
    }
    goto LABEL_2;
  }
  if ( v6 > 0 )
    return (unsigned __int16)v6 | 0xC0070000;
  else
    return (unsigned int)v6;
}
