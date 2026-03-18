/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x14077BA78
 * Callers:
 *     VrpCreateNamespaceNode @ 0x14077B818 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14068D8C0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0LL, a3);
}
