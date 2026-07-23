/*
 * XREFs of sub_14021378C @ 0x14021378C
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     sub_14065FFA0 @ 0x14065FFA0 (sub_14065FFA0.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 * Callees:
 *     sub_140235D34 @ 0x140235D34 (sub_140235D34.c)
 */

__int64 __fastcall sub_14021378C(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  bool v4; // zf
  char v5; // dl
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 < 0 )
    return 0LL;
  if ( (v1 & 0x10000000000LL) == 0 )
  {
    v2 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( v2 < 0xFFFFF68000000000uLL )
      return 0LL;
    if ( v2 > 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
    if ( (v1 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      return 0LL;
    v5 = *(_BYTE *)(a1 + 34);
    if ( (v5 & 0x20) != 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(a1 + 32) )
      return 0LL;
    if ( (v5 & 8) != 0 )
      return 0LL;
    v4 = ((*(_QWORD *)a1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL;
    goto LABEL_7;
  }
  v6 = 0;
  v7 = 0;
  if ( (unsigned int)sub_140235D34(a1, &v6, &v7) != 3 )
  {
    v4 = v6 == 6;
LABEL_7:
    if ( !v4 )
      return 3221225496LL;
    return 0LL;
  }
  return 3221225496LL;
}
