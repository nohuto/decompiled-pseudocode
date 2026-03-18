/*
 * XREFs of PipDereferenceDependencyNode @ 0x140838090
 * Callers:
 *     IoResolveDependency @ 0x140398140 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14055FBDC (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1409545D8 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
