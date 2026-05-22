/*
 * XREFs of ?NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z @ 0x1801BCE04
 * Callers:
 *     ?NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z @ 0x1801E81A4 (-NotifyTipToGlass@PenEventsTipToGlassAdapter@@SAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801598A8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1801BC988 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
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
            (void *)0x216,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
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
