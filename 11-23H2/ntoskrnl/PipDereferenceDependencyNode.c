/*
 * XREFs of PipDereferenceDependencyNode @ 0x140838390
 * Callers:
 *     IoResolveDependency @ 0x140398320 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14056029C (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1409547D8 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
