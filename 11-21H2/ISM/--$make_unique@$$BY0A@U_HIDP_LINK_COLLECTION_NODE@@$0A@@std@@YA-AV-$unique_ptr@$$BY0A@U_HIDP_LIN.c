/*
 * XREFs of ??$make_unique@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@U?$default_delete@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@@std@@@0@_K@Z @ 0x1800CD3BC
 * Callers:
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800CD910 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<_HIDP_LINK_COLLECTION_NODE [0],0>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rdi
  void *v4; // rbx

  v3 = saturated_mul(a2, 0x18uLL);
  v4 = operator new[](v3);
  memset_0(v4, 0, v3);
  *a1 = v4;
  return a1;
}
