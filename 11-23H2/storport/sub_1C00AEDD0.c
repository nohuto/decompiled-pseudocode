/*
 * XREFs of sub_1C00AEDD0 @ 0x1C00AEDD0
 * Callers:
 *     sub_1C00377A4 @ 0x1C00377A4 (sub_1C00377A4.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AEDD0(__int64 a1, char a2)
{
  char v4; // di
  __int64 result; // rax
  unsigned int v6; // esi
  _DWORD v7[14]; // [rsp+60h] [rbp-48h] BYREF
  char v8; // [rsp+98h] [rbp-10h]
  unsigned int v9; // [rsp+9Ch] [rbp-Ch]

  v4 = 0;
  memset_0(v7, 0, 0x40uLL);
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 5960) != 1 )
  {
    result = sub_1C0078140(a1, 1);
    if ( (int)result < 0 )
      return result;
    v4 = 1;
  }
  LOBYTE(v9) = 3;
  v9 = v9 & 0xF0FFFFFF | 0x1000000;
  v7[0] = 209;
  v8 = a2;
  v6 = sub_1C00AEFFC(a1, 0, 0, 0, (__int64)v7);
  if ( v4 )
    sub_1C0078140(a1, 0);
  return v6;
}
