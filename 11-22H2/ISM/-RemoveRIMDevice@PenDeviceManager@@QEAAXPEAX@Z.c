/*
 * XREFs of ?RemoveRIMDevice@PenDeviceManager@@QEAAXPEAX@Z @ 0x1801B409C
 * Callers:
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800F3B20 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@V?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAV?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18015A208 (--0-$com_ptr_t@V-$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@U.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAX@Z @ 0x1801B285C (--$find@X@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wi.c)
 *     ??0?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z @ 0x1801B2988 (--0-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1801B42E8 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@.c)
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801B63AC (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PenDeviceManager::RemoveRIMDevice(PenDeviceManager *this, void *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 i; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rax
  const char *v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  void *v15; // [rsp+68h] [rbp+38h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF

  v15 = a2;
  std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::find<void>(
    (_QWORD *)this + 10,
    &v14,
    (const unsigned __int8 *)&v15);
  v3 = v14;
  if ( v14 != *((_QWORD *)this + 11) )
  {
    wil::com_ptr_t<PenInterface,wil::err_exception_policy>::com_ptr_t<PenInterface,wil::err_exception_policy>(
      &v17,
      *(_QWORD *)(v14 + 24));
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::_Unchecked_erase(
      (char *)this + 80,
      v3);
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>,wil::err_exception_policy>(
      &v16,
      *((void (__fastcall ****)(_QWORD))this + 7));
    v4 = v16;
    if ( v16 )
    {
      v5 = (__int64)(v16[8] - v16[7]) >> 3;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(v4[4] + 32LL);
        if ( *(int *)(v7 + 8) <= 0 )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)(v7 + 16);
        v9 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
        Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v9);
        v11 = v4[7];
        if ( (unsigned int)i >= (unsigned __int64)((v4[8] - v11) >> 3) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x49,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
            v10);
        v12 = *(_QWORD *)(v11 + 8 * i);
        wil::com_ptr_t<PenInterface,wil::err_exception_policy>::com_ptr_t<PenInterface,wil::err_exception_policy>(
          &v14,
          v17);
        PenDevice::RemoveInterface(v12, &v14);
      }
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v17);
  }
}
