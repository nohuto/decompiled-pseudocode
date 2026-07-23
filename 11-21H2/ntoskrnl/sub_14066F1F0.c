/*
 * XREFs of sub_14066F1F0 @ 0x14066F1F0
 * Callers:
 *     sub_14066EFE8 @ 0x14066EFE8 (sub_14066EFE8.c)
 * Callees:
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 */

__int64 __fastcall sub_14066F1F0(char a1, _QWORD *a2, _QWORD *a3)
{
  ULONG_PTR v3; // r11
  __int64 result; // rax

  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  result = 0LL;
  if ( a1 )
    return ObDuplicateObject(v3, 0, 0, 2, 0);
  *a3 = *a2;
  *a2 = 0LL;
  return result;
}
