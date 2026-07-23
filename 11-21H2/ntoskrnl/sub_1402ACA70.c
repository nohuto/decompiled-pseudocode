/*
 * XREFs of sub_1402ACA70 @ 0x1402ACA70
 * Callers:
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_14053E958 @ 0x14053E958 (sub_14053E958.c)
 */

__int64 sub_1402ACA70()
{
  __int64 result; // rax

  sub_1402D6B0C((unsigned int)&unk_140CE1C18, 29919768, 0, 0, (__int64)&qword_14000EFB0, 1);
  result = *((_QWORD *)KeGetCurrentThread() + 284);
  if ( !result )
    return sub_14053E958();
  ++*(_DWORD *)(result + 8);
  return result;
}
