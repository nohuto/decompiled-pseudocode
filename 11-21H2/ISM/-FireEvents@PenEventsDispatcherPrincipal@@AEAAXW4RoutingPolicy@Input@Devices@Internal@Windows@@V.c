/*
 * XREFs of ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180190448
 * Callers:
 *     ?OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180190F08 (-OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180191418 (-OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x18019149C (-OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180191520 (-OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x1801915B0 (-OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180087394 (--1-$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801310C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x18018FB8C (--$count@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x18018FCB0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ??R?$_Func_class@_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@std@@QEBA_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z @ 0x1801901E0 (--R-$_Func_class@_NV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N.c)
 *     ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x18019066C (-GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClien.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180190798 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall PenEventsDispatcherPrincipal::FireEvents(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  char v6; // r12
  __int64 *v7; // rdi
  __int64 *v8; // r14
  void (__fastcall ***v9)(_QWORD); // rbx
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD); // [rsp+20h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+48h] BYREF
  int v18; // [rsp+98h] [rbp+50h]
  __int64 v19; // [rsp+A0h] [rbp+58h]
  __int64 v20; // [rsp+A8h] [rbp+60h] BYREF

  v19 = a3;
  v18 = a2;
  v4 = a2;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 192) )
    goto LABEL_11;
  if ( (_DWORD)a2 )
  {
    PenEventsDispatcherPrincipal::GetClientsForProcess(a1, &v14);
    v7 = v14;
    v8 = v15;
    if ( v14 != v15 )
    {
      do
      {
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          &v13,
          (void (__fastcall ***)(_QWORD))*v7);
        v9 = v13;
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          &v20,
          v13);
        if ( std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,bool>::operator()(
               a3,
               &v20,
               0) )
        {
          LODWORD(v17) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9[4][2] + 8LL))(v9[4][2]) + 32);
          if ( !std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count<void>(
                  a1 + 128,
                  (const unsigned __int8 *)&v17) )
            v6 = 1;
        }
        wil::com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>::~com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>((__int64 *)&v13);
        ++v7;
      }
      while ( v7 != v8 );
      v8 = v15;
      v7 = v14;
      v4 = v18;
    }
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
        v7,
        v8);
      std::_Deallocate<16,0>(v14, (v16 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL);
    }
LABEL_11:
    if ( v4 == 1 && v6 )
      goto LABEL_18;
  }
  PenEventsDispatcherPrincipal::GetShellClients(a1, &v14);
  v10 = v14;
  v11 = v15;
  if ( v14 != v15 )
  {
    do
    {
      wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
        &v17,
        (void (__fastcall ***)(_QWORD))*v10);
      std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,bool>::operator()(
        a3,
        &v17,
        v6);
      ++v10;
    }
    while ( v10 != v11 );
    v11 = v15;
    v10 = v14;
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
      v10,
      v11);
    std::_Deallocate<16,0>(v14, (v16 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL);
  }
LABEL_18:
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 )
  {
    LOBYTE(a2) = v12 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, a2);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
