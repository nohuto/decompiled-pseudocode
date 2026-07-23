/*
 * XREFs of sub_140521A70 @ 0x140521A70
 * Callers:
 *     sub_140A530A0 @ 0x140A530A0 (sub_140A530A0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140521A70(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax

  if ( a1 >= dword_140C4A418 )
    return __readmsr(0x38Du);
  __writemsr(a1 + 193, a2);
  result = a3;
  __writemsr(a1 + 390, a3);
  return result;
}
