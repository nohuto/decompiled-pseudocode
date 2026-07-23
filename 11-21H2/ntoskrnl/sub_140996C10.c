/*
 * XREFs of sub_140996C10 @ 0x140996C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void sub_140996C10()
{
  __int64 v0; // rbx

  v0 = MEMORY[0xFFFFF78000000014];
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  *(_QWORD *)&xmmword_140C54798 = v0;
  sub_1403697C8(1);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
