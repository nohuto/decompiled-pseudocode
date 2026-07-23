/*
 * XREFs of sub_1407EFF14 @ 0x1407EFF14
 * Callers:
 *     sub_14036A8F0 @ 0x14036A8F0 (sub_14036A8F0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14036B0D0 @ 0x14036B0D0 (sub_14036B0D0.c)
 *     sub_14036B190 @ 0x14036B190 (sub_14036B190.c)
 */

void __fastcall sub_1407EFF14(__int64 a1, int a2, char a3)
{
  KSPIN_LOCK *v5; // rcx

  if ( *(_QWORD *)(a1 + 160) && ((a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C1CFD0);
    v5 = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 160) + 16LL);
    if ( a3 )
      sub_14036B190(v5);
    else
      sub_14036B0D0(v5);
    sub_1402935D0((ULONG_PTR)&qword_140C1CFD0);
  }
}
