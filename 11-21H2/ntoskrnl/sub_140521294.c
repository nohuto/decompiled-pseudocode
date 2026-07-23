/*
 * XREFs of sub_140521294 @ 0x140521294
 * Callers:
 *     sub_140A53160 @ 0x140A53160 (sub_140A53160.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140521294(unsigned int a1, _QWORD *a2, _DWORD *a3)
{
  unsigned __int64 result; // rax
  char v4; // r9
  unsigned __int64 v5; // rax

  if ( a1 >= dword_140C4A418 )
  {
    v4 = a1 - dword_140C4A418;
    *a2 = __readmsr(a1 - dword_140C4A418 + 777);
    v5 = __readmsr(0x38Du);
    result = (unsigned int)(15LL << (4 * v4)) & (unsigned int)v5;
  }
  else
  {
    *a2 = __readmsr(a1 + 193);
    result = __readmsr(a1 + 390);
  }
  *a3 = result;
  return result;
}
