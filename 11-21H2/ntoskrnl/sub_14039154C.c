/*
 * XREFs of sub_14039154C @ 0x14039154C
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     <none>
 */

int sub_14039154C()
{
  int result; // eax

  qword_140C4E358 = 0LL;
  result = HIDWORD(KeGetPcr()[1].LockArray);
  if ( !result )
  {
    result = qword_140C4E400;
    qword_140C4E408 = *(_QWORD *)qword_140C4E400;
  }
  return result;
}
