/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14077B9E4
 * Callers:
 *     VrpPostEnumerateKey @ 0x14077ABA8 (VrpPostEnumerateKey.c)
 *     VrpAddNamespaceNodeToList @ 0x14077B710 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14077B7F4 (VrpDestroyNamespaceNode.c)
 *     VrpPreUnloadKey @ 0x140A73254 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14068D8C0 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
