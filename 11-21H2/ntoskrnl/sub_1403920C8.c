/*
 * XREFs of sub_1403920C8 @ 0x1403920C8
 * Callers:
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 *     sub_1405F8CD4 @ 0x1405F8CD4 (sub_1405F8CD4.c)
 * Callees:
 *     sub_1403818D0 @ 0x1403818D0 (sub_1403818D0.c)
 *     sub_140392180 @ 0x140392180 (sub_140392180.c)
 */

__int64 __fastcall sub_1403920C8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, __int64 a7)
{
  char *v11; // r9
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r9
  int v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0;
  if ( a4 )
  {
    v11 = (char *)sub_1403818D0((__int64)a5, &v16);
    v12 = 4;
    if ( (*(_DWORD *)(a4 + 8) & 0x8000000) != 0 )
      v12 = 16;
  }
  else
  {
    v11 = a5;
    v12 = 0;
  }
  if ( !v11 )
    return 3221225626LL;
  v13 = (__int64)&v11[4096 * (unsigned __int64)*(unsigned __int16 *)(a6 + 6)];
  v14 = v13 | 1;
  if ( (v12 & 0x10) == 0 )
    v14 = v13;
  return sub_140392180(a1, a2, a3, v14, a6, a7);
}
