/*
 * XREFs of sub_14078BC2C @ 0x14078BC2C
 * Callers:
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14078BC2C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 112) - 0x11D046F0CB3A4006LL;
  if ( *(_QWORD *)(a1 + 112) == 0x11D046F0CB3A4006LL )
    v1 = *(_QWORD *)(a1 + 120) - 0x3F05139760008FB0LL;
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(a1 + 112) - 0x11D3070314689B54LL;
  if ( *(_QWORD *)(a1 + 112) == 0x11D3070314689B54LL )
    v2 = *(_QWORD *)(a1 + 120) - 0x2E5240C9A000D297LL;
  return !v2;
}
