/*
 * XREFs of sub_140865288 @ 0x140865288
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

_SLIST_HEADER *sub_140865288()
{
  _SLIST_HEADER *result; // rax

  result = &stru_140C5A6B0;
  if ( ((unsigned __int8)&stru_140C5A6B0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C5A6C0 = 0;
  dword_140C5A6C4 = 0;
  stru_140C5A6B0 = 0LL;
  return result;
}
