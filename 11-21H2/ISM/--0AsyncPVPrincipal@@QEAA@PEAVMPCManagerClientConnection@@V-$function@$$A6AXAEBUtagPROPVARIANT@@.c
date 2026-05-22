/*
 * XREFs of ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x18016E478
 * Callers:
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801672B4 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXJ@Z@std@@QEAA@AEBV01@@Z @ 0x18016E424 (--0-$function@$$A6AXJ@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AsyncPVPrincipal::AsyncPVPrincipal(
        __int64 a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)a1 = &BamoAsyncResult_PROPVARIANT_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncResult_PROPVARIANT_Principal::`vftable'{for `IAsyncResult_PROPVARIANT_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 16) = &BamoImpl::BamoAsyncResult_PROPVARIANT_PrincipalImpl::`vftable';
  *(_QWORD *)a1 = &AsyncPVPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncResult_PROPVARIANT_Principal::`vftable'{for `IAsyncResult_PROPVARIANT_Principal'};
  *(_QWORD *)(a1 + 112) = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a3 + 56);
  if ( v7 )
    *(_QWORD *)(a1 + 112) = (**v7)(v7, a1 + 56);
  std::function<void (long)>::function<void (long)>(a1 + 120, a4);
  *(_BYTE *)(a1 + 184) = 1;
  v9 = *(_QWORD *)(a3 + 56);
  if ( v9 )
  {
    LOBYTE(v8) = v9 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  v10 = *(_QWORD *)(a4 + 56);
  if ( v10 )
  {
    LOBYTE(v8) = v10 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v8);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a1;
}
