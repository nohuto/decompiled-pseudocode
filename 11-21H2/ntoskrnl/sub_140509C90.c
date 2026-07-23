/*
 * XREFs of sub_140509C90 @ 0x140509C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403AAB4C @ 0x1403AAB4C (sub_1403AAB4C.c)
 */

ULONG_PTR __fastcall sub_140509C90(ULONG_PTR Argument)
{
  __int64 i; // rbx
  __int64 v2; // rax
  __int64 v3; // r8

  for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
  {
    v2 = *(_QWORD *)(i + 24);
    v3 = *(_QWORD *)(i + 172);
    *(_BYTE *)(i + 128) = 1;
    *(_BYTE *)(v2 + 48) = 0;
    sub_1403AAB4C(*(_QWORD *)(i + 24), 0, v3);
  }
  return 0LL;
}
