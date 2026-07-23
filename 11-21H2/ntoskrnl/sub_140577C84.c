/*
 * XREFs of sub_140577C84 @ 0x140577C84
 * Callers:
 *     sub_14038D0F4 @ 0x14038D0F4 (sub_14038D0F4.c)
 *     sub_140B5197C @ 0x140B5197C (sub_140B5197C.c)
 * Callees:
 *     sub_140429480 @ 0x140429480 (sub_140429480.c)
 *     sub_1404294A0 @ 0x1404294A0 (sub_1404294A0.c)
 */

__int64 sub_140577C84()
{
  unsigned __int64 v0; // rax
  int v1; // eax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h]

  __writemsr(0xC0010015, __readmsr(0xC0010015) | 8);
  v0 = sub_140429480(0xC0011023);
  HIDWORD(v3) = HIDWORD(v0);
  if ( dword_140D06A2C == 1 )
    v1 = v0 & 0xFFDFFFFF;
  else
    v1 = v0 | 0x800000;
  LODWORD(v3) = v1 | 2;
  return sub_1404294A0(0xC0011023, v3);
}
