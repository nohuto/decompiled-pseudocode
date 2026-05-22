/*
 * XREFs of ?UpdateBamoProperties@HapticsDevice@@QEAAXXZ @ 0x1801BB4FC
 * Callers:
 *     ?AttachInterface@HapticsDevice@@QEAAXV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801B8E54 (-AttachInterface@HapticsDevice@@QEAAXV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@.c)
 *     ?RemoveInterface@HapticsDevice@@QEAAXV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801BA704 (-RemoveInterface@HapticsDevice@@QEAAXV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA1C4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@1@@Z @ 0x1801B80E0 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@.c)
 *     ??0?$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x1801B8704 (--0-$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEA.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801B97CC (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@IS.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall HapticsDevice::UpdateBamoProperties(HapticsDevice *this)
{
  int v2; // r13d
  struct Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  _QWORD **v6; // r14
  _QWORD *v7; // rbx
  _QWORD **v8; // rdi
  _QWORD *j; // rbx
  __int64 v10; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v11; // r12
  int inserted; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+28h] [rbp-58h]
  Microsoft::BamoImpl::BamoImplObject *v19[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v21; // [rsp+48h] [rbp-38h]
  void *v22; // [rsp+58h] [rbp-28h]
  __int128 v23; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  _QWORD *v25; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD **i; // [rsp+C8h] [rbp+48h]
  _QWORD *v27; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0;
  LODWORD(v25) = 0;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v25 = operator new(0x50uLL);
  v4 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<SimpleHapticsControllerFeedback>::ListPrincipal<SimpleHapticsControllerFeedback>(
         v25,
         BamoServerConnection);
  v5 = v4;
  v27 = v4;
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))*v4)(v4);
  v6 = (_QWORD **)*((_QWORD *)this + 9);
  for ( i = (_QWORD **)*((_QWORD *)this + 10); v6 != i; ++v6 )
  {
    v7 = *v6;
    v25 = v7;
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>(
      (__int64)v20,
      (__int64)(v7 + 3));
    v2 |= 1u;
    v8 = v21;
    for ( j = *v21; j != v8; j = (_QWORD *)*j )
    {
      v17 = j[2];
      v18 = *((_DWORD *)j + 6);
      v10 = *(_QWORD *)(v5[4] + 32LL);
      if ( *(int *)(v10 + 8) <= 0 )
        v11 = 0LL;
      else
        v11 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v10 + 16);
      Microsoft::Bamo::Lock::Lock(v19, v11);
      inserted = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::InsertWorker(
                   (__int64)v5,
                   v11,
                   (__int64)(v5[8] - v5[7]) >> 3,
                   (__int64 *)((char *)&v17 + 4));
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v19, v13, v14, v15);
      if ( inserted < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x42,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticsdevice.cpp",
          (const char *)(unsigned int)inserted,
          v17);
    }
    std::_Deallocate<16,0>(v22, (v23 - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF8uLL);
    v22 = 0LL;
    v23 = 0LL;
    std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
      v16,
      v21);
    std::_Deallocate<16,0>(v21, 0x20uLL);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v25);
  }
  (*(void (__fastcall **)(char *, _QWORD *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, v5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v27);
}
