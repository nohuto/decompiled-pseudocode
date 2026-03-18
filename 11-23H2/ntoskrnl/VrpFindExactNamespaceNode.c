/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14077B7F4
 * Callers:
 *     VrpPostEnumerateKey @ 0x14077A9B8 (VrpPostEnumerateKey.c)
 *     VrpAddNamespaceNodeToList @ 0x14077B520 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14077B604 (VrpDestroyNamespaceNode.c)
 *     VrpPreUnloadKey @ 0x140A72FA4 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14068D8C0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
