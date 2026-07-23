/*
 * XREFs of sub_140800204 @ 0x140800204
 * Callers:
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140800204()
{
  PVOID v0; // rcx
  __int64 v1; // rax

  sub_1402D66A8((ULONG_PTR)&qword_140C24580);
  while ( 1 )
  {
    v0 = qword_140C24570;
    if ( qword_140C24570 == &qword_140C24570 )
      break;
    if ( *((PVOID **)qword_140C24570 + 1) != &qword_140C24570
      || (v1 = *(_QWORD *)qword_140C24570, *(PVOID *)(*(_QWORD *)qword_140C24570 + 8LL) != qword_140C24570) )
    {
      __fastfail(3u);
    }
    qword_140C24570 = *(PVOID *)qword_140C24570;
    *(_QWORD *)(v1 + 8) = &qword_140C24570;
    ExFreePoolWithTag(v0, 0x50434B50u);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C24580);
}
