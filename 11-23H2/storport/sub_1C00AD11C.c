/*
 * XREFs of sub_1C00AD11C @ 0x1C00AD11C
 * Callers:
 *     sub_1C0036834 @ 0x1C0036834 (sub_1C0036834.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AD11C(__int64 a1, int a2, unsigned __int16 a3)
{
  char v6; // si
  __int64 result; // rax
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  unsigned int v12; // ebx
  _DWORD v13[15]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+9Ch] [rbp-Ch]

  memset_0(v13, 0, 0x40uLL);
  v6 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 5964) != 1 )
    return 3221225860LL;
  v8 = a2 - 1;
  if ( !v8 )
  {
    v11 = 0;
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = 0x10000;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = 0x20000;
    goto LABEL_12;
  }
  if ( v10 != 1 )
    return 3221225659LL;
  v11 = 196608;
LABEL_12:
  if ( *(_DWORD *)(a1 + 5960) != 1 )
  {
    result = sub_1C0078140(a1, 1);
    if ( (int)result < 0 )
      return result;
    v6 = 1;
  }
  v13[0] = v13[0] & 0xFFFFFF00 | 0xD0;
  LOBYTE(v14) = 4;
  v14 = v14 & 0xF00000FF | ((v11 | a3) << 8);
  v12 = sub_1C00AEFFC(a1, 0, 0, 0, (__int64)v13);
  if ( v6 )
    sub_1C0078140(a1, 0);
  return v12;
}
