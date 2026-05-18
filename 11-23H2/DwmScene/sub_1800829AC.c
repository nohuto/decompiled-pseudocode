/*
 * XREFs of sub_1800829AC @ 0x1800829AC
 * Callers:
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800829AC(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  if ( *(_DWORD *)(a1 + 1172) )
    v1 = ~(*(unsigned int *)(a1 + 1172) - 1LL) & (*(unsigned int *)(a1 + 1172) + v1 - 1);
  sub_180081A24((__int64 *)(a1 + 80), v1);
}
