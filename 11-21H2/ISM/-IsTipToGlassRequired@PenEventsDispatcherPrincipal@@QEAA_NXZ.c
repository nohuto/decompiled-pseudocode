/*
 * XREFs of ?IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ @ 0x1801909E8
 * Callers:
 *     ?IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ @ 0x1801BC54C (-IsTipToGlassRequired@PenEventsTipToGlassAdapter@@SA_NXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801310C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180190798 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall PenEventsDispatcherPrincipal::IsTipToGlassRequired(PenEventsDispatcherPrincipal *this)
{
  char v1; // di
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = 0;
  PenEventsDispatcherPrincipal::GetShellClients((__int64)this, (__int64)&v5);
  v2 = v5;
  v3 = v6;
  if ( v5 != v6 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v2 + 8) + 136LL))(*v2 + 8) )
    {
      if ( ++v2 == v3 )
        goto LABEL_6;
    }
    v1 = 1;
LABEL_6:
    v2 = v5;
  }
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
      v2,
      v6);
    std::_Deallocate<16,0>(v5, (v7 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v1;
}
