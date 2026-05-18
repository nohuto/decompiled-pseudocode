/*
 * XREFs of sub_18001F5AC @ 0x18001F5AC
 * Callers:
 *     sub_18001FEAC @ 0x18001FEAC (sub_18001FEAC.c)
 *     sub_180027444 @ 0x180027444 (sub_180027444.c)
 *     sub_180057F88 @ 0x180057F88 (sub_180057F88.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800EBB74 @ 0x1800EBB74 (sub_1800EBB74.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_18001E194 @ 0x18001E194 (sub_18001E194.c)
 */

const void **__fastcall sub_18001F5AC(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 Size; // rdi
  __int64 v5; // rsi
  bool v6; // cf
  _BYTE *v7; // r14

  v3 = a1;
  Size = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v5 = *(_QWORD *)(a1 + 16);
  if ( Size > *(_QWORD *)(a1 + 24) - v5 )
    return sub_18001E194((const void **)a1, Size, a3, a2, Size);
  v6 = *(_QWORD *)(a1 + 24) < 0x10uLL;
  *(_QWORD *)(a1 + 16) = Size + v5;
  v7 = (_BYTE *)a1;
  if ( !v6 )
    v7 = *(_BYTE **)a1;
  memmove(&v7[v5], a2, Size);
  v7[Size + v5] = 0;
  return (const void **)v3;
}
