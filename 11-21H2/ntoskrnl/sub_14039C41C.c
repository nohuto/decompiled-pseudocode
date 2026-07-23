/*
 * XREFs of sub_14039C41C @ 0x14039C41C
 * Callers:
 *     ExDisownFastResource @ 0x14039C100 (ExDisownFastResource.c)
 *     sub_140575C90 @ 0x140575C90 (sub_140575C90.c)
 * Callees:
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 */

char __fastcall sub_14039C41C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  char result; // al

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v2 = (__int64 *)((char *)KeGetCurrentThread() + 96 * (unsigned __int8)((unsigned __int64)a2 >> 1) + 1696);
  if ( *v2 >= 0 )
    sub_14039C4BC(v2);
  result = *(_BYTE *)v2 | 1;
  *(_BYTE *)v2 = result;
  return result;
}
