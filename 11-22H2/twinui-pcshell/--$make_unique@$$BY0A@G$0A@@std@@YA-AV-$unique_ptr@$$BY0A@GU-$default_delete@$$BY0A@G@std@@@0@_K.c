/*
 * XREFs of ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x18070CCA4
 * Callers:
 *     ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x1807193D0 (-TryGetValue@InProcPropertyStore@Util@@UEAA-AUhstring@winrt@@_KAEBU34@@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x1801C9334 (--_U@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<unsigned short [0],0>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rdi
  void *v4; // rbx

  v3 = saturated_mul(a2, 2uLL);
  v4 = operator new[](v3);
  memset_0(v4, 0, v3);
  *a1 = v4;
  return a1;
}
