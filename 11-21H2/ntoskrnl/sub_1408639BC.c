/*
 * XREFs of sub_1408639BC @ 0x1408639BC
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

_SLIST_HEADER *sub_1408639BC()
{
  _SLIST_HEADER *result; // rax

  dword_140C54CA8 = 0;
  qword_140C497E0 = 0LL;
  qword_140C497D8 = 0LL;
  qword_140C49800 = 0LL;
  qword_140C497F8 = (__int64)&qword_140C497F0;
  qword_140C497F0 = (__int64)&qword_140C497F0;
  RtlInitUnicodeString(&stru_140D00A00, L"425000");
  qword_140C49808 = MEMORY[0xFFFFF78000000014];
  result = &stru_140CE23D0;
  if ( ((unsigned __int8)&stru_140CE23D0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140CE23D0 = 0LL;
  return result;
}
