/*
 * XREFs of ?NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z @ 0x1801AEE24
 * Callers:
 *     ?NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z @ 0x1801DA994 (-NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18014B5C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1801AE9A8 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenEventsDispatcherPrincipal::NotifyTipToGlass(PenEventsDispatcherPrincipal *this, unsigned int a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  int v5; // eax
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  PenEventsDispatcherPrincipal::GetShellClients((__int64)this, (__int64)&v6);
  v3 = v7;
  v4 = v6;
  if ( v6 != v7 )
  {
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v4 + 8) + 136LL))(*v4 + 8) )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*v4 + 8) + 80LL))(*v4 + 8, a2);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            534LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneven"
                     "tsdispatcherprincipal.cpp",
            (const char *)(unsigned int)v5);
      }
      ++v4;
    }
    while ( v4 != v3 );
    v3 = v7;
    v4 = v6;
  }
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
      v4,
      v3);
    std::_Deallocate<16,0>(v6, (v8 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
