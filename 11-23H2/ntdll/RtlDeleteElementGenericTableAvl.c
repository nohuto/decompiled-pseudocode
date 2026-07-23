/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x18006AD70
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006AF5C (FindNodeOrParent_0.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x18006B010 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent_0(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
