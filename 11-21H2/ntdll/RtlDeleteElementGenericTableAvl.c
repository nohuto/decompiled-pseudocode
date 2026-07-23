/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x18005FA50
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteElementGenericTableAvlEx @ 0x18005FA90 (RtlDeleteElementGenericTableAvlEx.c)
 *     FindNodeOrParent @ 0x18005FE6C (FindNodeOrParent.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
