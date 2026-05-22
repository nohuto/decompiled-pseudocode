/*
 * XREFs of ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800449B4
 * Callers:
 *     ?SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180044990 (-SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800469A4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180049124 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007EE54 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x1800F441C (--R-$_Func_class@XAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall AnimationDataProvider::SetBootstrapProxy(
        AnimationDataProvider *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  int v4; // eax
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rdx
  const char *v8; // r9
  int v9; // eax
  __int64 v10; // rsi
  __int64 i; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp+18h] BYREF
  _LUID Luid; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130,
         &v17);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v4,
      v15);
  if ( *((struct Microsoft::Bamo::BamoProxy **)this + 3) != a2 )
  {
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
    v18 = (_QWORD *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(&v18);
  }
  v5 = (_QWORD *)((char *)this + 32);
  v6 = operator new(0x40uLL);
  v18 = v6;
  v7 = (struct Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 2);
  *v6 = &BamoDataProviderPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v6[1] = &BamoDataProviderPrincipal::`vftable'{for `IDataProviderPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 2), v7);
  v6[2] = &BamoImpl::BamoDataProviderPrincipalImpl::`vftable';
  v6[7] = 0LL;
  *v6 = &DataProviderPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v6[1] = &BamoDataProviderPrincipal::`vftable'{for `IDataProviderPrincipal'};
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  *v5 = v6;
  if ( !AllocateLocallyUniqueId(&Luid) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x63,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v8);
  (*(void (__fastcall **)(__int64, _LUID *))(*(_QWORD *)(*v5 + 8LL) + 48LL))(*v5 + 8LL, &Luid);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 24LL))(
         *((_QWORD *)this + 3) + 8LL,
         *v5);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v9,
      v15);
  v10 = *((_QWORD *)this + 6);
  for ( i = *((_QWORD *)this + 5); i != v10; i += 64LL )
    std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()(i, (char *)this + 32);
  v12 = *((_QWORD *)this + 6);
  v13 = *((_QWORD *)this + 5);
  if ( v13 != v12 )
  {
    do
    {
      std::_Func_class<void,>::_Tidy(v13);
      v13 += 64LL;
    }
    while ( v13 != v12 );
    v13 = *((_QWORD *)this + 5);
  }
  *((_QWORD *)this + 6) = v13;
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
