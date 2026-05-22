/*
 * XREFs of ??0Edge@@QEAA@AEBV0@@Z @ 0x1801AAE00
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AA8CC (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AB22C (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AB324 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009440C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AAC80 (--0-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 */

// Hidden C++ exception states: #wind=3
Edge *__fastcall Edge::Edge(Edge *this, const struct Edge *a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = *(_QWORD *)a2;
  std::wstring::wstring((__int64)this + 8);
  v4 = *((_QWORD *)a2 + 5);
  *((_QWORD *)this + 5) = v4;
  if ( v4 )
    (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)((char *)a2 + 52);
  *(_OWORD *)((char *)this + 68) = *(_OWORD *)((char *)a2 + 68);
  *(_QWORD *)((char *)this + 84) = *(_QWORD *)((char *)a2 + 84);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>(
    (__int64 **)this + 13,
    (__int64 **)a2 + 13);
  return this;
}
