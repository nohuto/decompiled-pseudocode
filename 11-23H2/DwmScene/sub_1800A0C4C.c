/*
 * XREFs of sub_1800A0C4C @ 0x1800A0C4C
 * Callers:
 *     sub_1800A0D10 @ 0x1800A0D10 (sub_1800A0D10.c)
 *     sub_1800A0D1C @ 0x1800A0D1C (sub_1800A0D1C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_1800A0C4C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v3 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v3;
    if ( !v3 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 16);
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v4);
    if ( v5 )
      sub_1800100E8(v5, 0x10uLL);
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
    sub_1800100E8(v6, 8LL * *(_QWORD *)(a1 + 16));
  v7 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  return sub_1800100E8(v7, 0x10uLL);
}
