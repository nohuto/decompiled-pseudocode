/*
 * XREFs of sub_140B2B698 @ 0x140B2B698
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

_QWORD *sub_140B2B698()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  if ( ((unsigned __int8)&stru_140C52F00 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140C52F10 = 0LL;
  result = &unk_140C53DB0;
  v1 = 16LL;
  stru_140C52F00 = 0LL;
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
