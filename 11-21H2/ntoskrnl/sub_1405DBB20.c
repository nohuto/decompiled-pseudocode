/*
 * XREFs of sub_1405DBB20 @ 0x1405DBB20
 * Callers:
 *     sub_1405DBF90 @ 0x1405DBF90 (sub_1405DBF90.c)
 * Callees:
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 */

__int64 __fastcall sub_1405DBB20(int a1, __int64 a2)
{
  __int16 *v2; // r8
  __int64 result; // rax

  if ( a1 == 6 && *(_BYTE *)a2 == 3 )
  {
    if ( !qword_140C23FA0
      || MEMORY[0xFFFFF78000000014] < (unsigned __int64)qword_140C23FA0
      || (v2 = &word_140C23F20, (unsigned __int64)(qword_140C23FA0 + 20000000) < MEMORY[0xFFFFF78000000014]) )
    {
      v2 = L"Unknown";
    }
    return sub_1402E0978((_WORD *)(a2 + 2), 0x80uLL, (__int64)v2);
  }
  return result;
}
