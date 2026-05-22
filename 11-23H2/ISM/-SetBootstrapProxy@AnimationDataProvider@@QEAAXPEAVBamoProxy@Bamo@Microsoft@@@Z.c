/*
 * XREFs of ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18004E4AC
 * Callers:
 *     ?SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18004E400 (-SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ??0DataProviderPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x18004E638 (--0DataProviderPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004E88C (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180054C58 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095F8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x18010E4B4 (--R-$_Func_class@XAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall AnimationDataProvider::SetBootstrapProxy(
        AnimationDataProvider *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  int v4; // eax
  DataProviderPrincipal **v5; // rsi
  DataProviderPrincipal *v6; // rdi
  const char *v7; // r9
  const char *v8; // r9
  int v9; // eax
  __int64 v10; // rbp
  __int64 i; // rdi
  __int64 v12; // rsi
  __int64 j; // rdi
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF
  DataProviderPrincipal *v18; // [rsp+50h] [rbp+18h] BYREF
  _LUID Luid; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_a9fa7235_98d0_fd42_aad0_f9b4ffe7b130,
         &v17);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x62,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v4,
      v15);
  if ( *((struct Microsoft::Bamo::BamoProxy **)this + 3) != a2 )
  {
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
    v18 = (DataProviderPrincipal *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(&v18);
  }
  v5 = (DataProviderPrincipal **)((char *)this + 32);
  v18 = (DataProviderPrincipal *)operator new(0x40uLL);
  v6 = DataProviderPrincipal::DataProviderPrincipal(v18, *((struct dataprovider_AutoBamos::BamoConnection **)this + 2));
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  *v5 = v6;
  if ( !v6 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v7);
  if ( !AllocateLocallyUniqueId(&Luid) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v8);
  (*(void (__fastcall **)(__int64, _LUID *))(*((_QWORD *)*v5 + 1) + 48LL))((__int64)*v5 + 8, &Luid);
  v9 = (*(__int64 (__fastcall **)(__int64, DataProviderPrincipal *))(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 24LL))(
         *((_QWORD *)this + 3) + 8LL,
         *v5);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x79,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v9,
      v15);
  v10 = *((_QWORD *)this + 6);
  for ( i = *((_QWORD *)this + 5); i != v10; i += 64LL )
    std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()(i, (char *)this + 32);
  v12 = *((_QWORD *)this + 6);
  for ( j = *((_QWORD *)this + 5); j != v12; j += 64LL )
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(j);
  *((_QWORD *)this + 6) = *((_QWORD *)this + 5);
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
