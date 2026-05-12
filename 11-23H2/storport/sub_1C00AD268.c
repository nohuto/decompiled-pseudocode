/*
 * XREFs of sub_1C00AD268 @ 0x1C00AD268
 * Callers:
 *     sub_1C0036948 @ 0x1C0036948 (sub_1C0036948.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AD268(__int64 a1, unsigned __int16 a2, int a3)
{
  int v3; // r14d
  char v6; // si
  __int64 result; // rax
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ebx
  _DWORD v12[15]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+9Ch] [rbp-Ch]

  v3 = a2;
  memset_0(v12, 0, 0x40uLL);
  v6 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 5964) != 1 )
    return 3221225860LL;
  v8 = a3 - 1;
  if ( !v8 )
  {
    v10 = 0;
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = 256;
    goto LABEL_10;
  }
  if ( v9 != 1 )
    return 3221225659LL;
  v10 = 512;
LABEL_10:
  if ( *(_DWORD *)(a1 + 5960) != 1 )
  {
    result = sub_1C0078140(a1, 1);
    if ( (int)result < 0 )
      return result;
    v6 = 1;
  }
  v12[0] = v12[0] & 0xFFFFFF00 | 0xD0;
  LOBYTE(v13) = 8;
  v13 = v10 | v13 & 0xFFFFF0FF;
  v12[1] = v3;
  v11 = sub_1C00AEFFC(a1, 0, 0, 0, (__int64)v12);
  if ( v6 )
    sub_1C0078140(a1, 0);
  return v11;
}
