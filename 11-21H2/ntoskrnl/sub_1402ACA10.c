/*
 * XREFs of sub_1402ACA10 @ 0x1402ACA10
 * Callers:
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_14053E958 @ 0x14053E958 (sub_14053E958.c)
 */

__int64 sub_1402ACA10()
{
  __int64 result; // rax

  sub_1402D6B0C((unsigned int)&unk_140CE1C18, 29919768, 0, 0, (__int64)&qword_14000EFB0, 1);
  result = *((_QWORD *)KeGetCurrentThread() + 284);
  if ( !result )
    return sub_14053E958();
  --*(_DWORD *)(result + 8);
  return result;
}
