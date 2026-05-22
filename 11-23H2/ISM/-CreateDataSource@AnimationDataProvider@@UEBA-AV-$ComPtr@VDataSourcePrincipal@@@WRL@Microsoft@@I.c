/*
 * XREFs of ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x180110100
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095F8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18010E29C (--0-$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z.c)
 *     ??0DataSourcePrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x18010E31C (--0DataSourcePrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@QEAAJI@Z @ 0x18010E740 (-Add@-$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Micros.c)
 *     ?Attach@?$ComPtr@V?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@QEAAXPEAV?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@3@@Z @ 0x18010EB78 (-Attach@-$ComPtr@V-$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@Q.c)
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x1801107A8 (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 */

// Hidden C++ exception states: #wind=5
DataSourcePrincipal **__fastcall AnimationDataProvider::CreateDataSource(
        __int64 a1,
        DataSourcePrincipal **a2,
        unsigned int a3)
{
  __int64 v6; // rdi
  struct Microsoft::Bamo::BaseBamoPeer *v7; // rbx
  char *v8; // rbp
  bool v9; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rax
  const char *v11; // r9
  DataSourcePrincipal *v12; // rbx
  const char *v13; // r9
  const char *v14; // r9
  _QWORD *v15; // rax
  const char *v16; // r9
  DataSourcePrincipal *v17; // rbx
  int v18; // eax
  int v19; // eax
  _QWORD *v21; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DataSourcePrincipal *v23; // [rsp+60h] [rbp+8h] BYREF
  DataSourcePrincipal **v24; // [rsp+68h] [rbp+10h]
  struct _LUID Luid; // [rsp+78h] [rbp+20h] BYREF

  v24 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(struct Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v6 + 32) + 32LL));
  v8 = 0LL;
  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::GetStub((Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 16), v7, v9);
  if ( Stub )
    v8 = (char *)Stub - 16;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v11);
  *a2 = 0LL;
  v23 = (DataSourcePrincipal *)operator new(0x48uLL);
  v12 = DataSourcePrincipal::DataSourcePrincipal(v23, *(struct dataprovider_AutoBamos::BamoConnection **)(a1 + 16));
  if ( *a2 )
    (*(void (__fastcall **)(DataSourcePrincipal *))(*(_QWORD *)*a2 + 8LL))(*a2);
  *a2 = v12;
  if ( !v12 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v13);
  if ( !AllocateLocallyUniqueId(&Luid) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0xAE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v14);
  (*(void (__fastcall **)(__int64, struct _LUID *))(*((_QWORD *)*a2 + 1) + 104LL))((__int64)*a2 + 8, &Luid);
  if ( a3 )
  {
    v23 = 0LL;
    v21 = operator new(0x50uLL);
    v15 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>::ListPrincipal<unsigned int>(
            v21,
            *(struct Microsoft::Bamo::BaseBamoConnection **)(a1 + 16));
    Microsoft::WRL::ComPtr<Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>>::Attach(
      (__int64 *)&v23,
      (__int64)v15);
    v17 = v23;
    if ( !v23 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        185LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
        v16);
    v18 = Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub,unsigned int,unsigned int>::Add(
            v23,
            a3);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
        (const char *)(unsigned int)v18,
        1);
    (*(void (__fastcall **)(__int64, DataSourcePrincipal *))(*((_QWORD *)*a2 + 1) + 120LL))((__int64)*a2 + 8, v17);
    (*(void (__fastcall **)(DataSourcePrincipal *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  v19 = (*(__int64 (__fastcall **)(char *, DataSourcePrincipal *))(*((_QWORD *)v8 + 1) + 24LL))(v8 + 8, *a2);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v19,
      1);
  return a2;
}
