/*
 * XREFs of ??$make_unique@$$BY0A@U_HIDP_VALUE_CAPS@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@U_HIDP_VALUE_CAPS@@U?$default_delete@$$BY0A@U_HIDP_VALUE_CAPS@@@std@@@0@_K@Z @ 0x1800E6A40
 * Callers:
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E6F3C (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<_HIDP_VALUE_CAPS [0],0>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rdi
  void *v4; // rbx

  v3 = saturated_mul(a2, 0x48uLL);
  v4 = operator new[](v3);
  memset_0(v4, 0, v3);
  *a1 = v4;
  return a1;
}
