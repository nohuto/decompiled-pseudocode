/*
 * XREFs of sub_140862DB0 @ 0x140862DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140862DB0(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0x4D46FB9582011705LL - *a1;
  if ( *a1 == 0x4D46FB9582011705LL )
    v4 = 0xEF0DD2B14240358DuLL - a1[1];
  v5 = 0;
  if ( v4 || a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  sub_140A48330((_DWORD)a1);
  if ( *a2 )
  {
    if ( *a2 != 1 )
      goto LABEL_9;
    dword_140C23320 = 1;
    memset(Src, 0, 0x48uLL);
    Src[2] = 3;
  }
  else
  {
    dword_140C23320 = 0;
    memset(Src, 0, 0x48uLL);
    Src[2] = 2;
  }
  Src[0] = 12;
  sub_14036AF00(Src, 0x48uLL, 0);
LABEL_9:
  sub_140A47CF8(v7, v6);
  return v5;
}
