/*
 * XREFs of ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x1801AE884
 * Callers:
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x1801AE67C (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 * Callees:
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x18003C6F8 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801ADD20 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@.c)
 *     ??$equal_range@X@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@1@AEBI@Z @ 0x1801ADEC4 (--$equal_range@X@-$_Hash@V-$_Umap_traits@IV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_excepti.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenEventsDispatcherPrincipal::GetClientsForProcess(__int64 a1, __int64 a2, int a3)
{
  __int64 *i; // rbx
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::equal_range<void>(
    a1 + 64,
    v6,
    (const unsigned __int8 *)&v7);
  for ( i = (__int64 *)v6[0]; i != (__int64 *)v6[1]; i = (__int64 *)*i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(i[3] + 8) + 128LL))(i[3] + 8) )
    {
      if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a2 + 16) )
      {
        std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> const &>(
          (__int64 **)a2,
          *(__int64 **)(a2 + 8),
          (void (__fastcall ****)(_QWORD))i + 3);
      }
      else
      {
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          *(_QWORD **)(a2 + 8),
          (void (__fastcall ***)(_QWORD))i[3]);
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
  }
  return a2;
}
