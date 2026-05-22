/*
 * XREFs of ??0Edge@@QEAA@AEBV0@@Z @ 0x1801C9198
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801C8CB8 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801C9604 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801C96FC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Buy_nonzero@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18009DBEC (-_Buy_nonzero@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@s.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800AAA90 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_copy@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801C8E60 (--$_Uninitialized_copy@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$.c)
 */

// Hidden C++ exception states: #wind=3
Edge *__fastcall Edge::Edge(Edge *this, const struct Edge *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  *(_QWORD *)this = *(_QWORD *)a2;
  std::wstring::wstring((_QWORD *)this + 1, (__int64)a2 + 8);
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
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v5 = (__int64)(*((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 13)) >> 3;
  if ( v5 )
  {
    std::vector<LightDismissClientProxy *>::_Buy_nonzero((_QWORD *)this + 13, v5);
    *((_QWORD *)this + 14) = std::_Uninitialized_copy<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
                               *((__int64 **)a2 + 13),
                               *((__int64 **)a2 + 14),
                               *((__int64 **)this + 13));
  }
  return this;
}
