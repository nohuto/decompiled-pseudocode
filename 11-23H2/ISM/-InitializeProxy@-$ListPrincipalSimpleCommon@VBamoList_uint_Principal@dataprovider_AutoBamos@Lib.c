/*
 * XREFs of ?InitializeProxy@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@MEAAJPEAVBamoList_uint_Stub@dataprovider_AutoBamos@Lib@23@@Z @ 0x1801108F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal,dataprovider_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub,unsigned int,unsigned int>::InitializeProxy(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 56);
  if ( (*(_QWORD *)(a1 + 64) - v4) >> 2 )
  {
    v5 = a2 + 8;
    v6 = 0LL;
    do
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
             v5,
             v3,
             *(unsigned int *)(v4 + 4 * v6));
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x135,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v7,
          v9);
      v4 = *(_QWORD *)(a1 + 56);
      v6 = ++v3;
    }
    while ( v3 < (unsigned __int64)((*(_QWORD *)(a1 + 64) - v4) >> 2) );
  }
  return 0LL;
}
