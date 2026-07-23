/*
 * XREFs of sub_140752B6C @ 0x140752B6C
 * Callers:
 *     sub_140752F30 @ 0x140752F30 (sub_140752F30.c)
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 * Callees:
 *     sub_1406E8E9C @ 0x1406E8E9C (sub_1406E8E9C.c)
 */

_DWORD *sub_140752B6C()
{
  unsigned int v0; // ecx
  _DWORD *result; // rax

  v0 = 0;
  if ( dword_140C09600 )
  {
    v0 = 1;
    result = &unk_140C095FC;
  }
  else
  {
    result = &unk_140C095F8;
  }
  if ( *result != MEMORY[0xFFFFF780000002E4] )
  {
    *result = MEMORY[0xFFFFF780000002E4];
    return (_DWORD *)sub_1406E8E9C(v0);
  }
  return result;
}
