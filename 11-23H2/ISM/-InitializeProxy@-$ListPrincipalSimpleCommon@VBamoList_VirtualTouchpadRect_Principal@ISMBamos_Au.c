/*
 * XREFs of ?InitializeProxy@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@MEAAJPEAVBamoList_VirtualTouchpadRect_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x18014D840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::InitializeProxy(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)i >= 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 64) - v5) >> 3) )
      break;
    *(_OWORD *)v9 = *(_OWORD *)(v5 + 24 * i);
    v6 = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(v5 + 24 * i + 16);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v6 + 24))(a2 + 8, (unsigned int)i, v9);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x135,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7,
        v9[0]);
  }
  return 0LL;
}
