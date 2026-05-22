/*
 * XREFs of ?InitializeProxy@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@MEAAJPEAVBamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x18015B9D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,DisplayOcclusionRect,DisplayOcclusionRect const &>::InitializeProxy(
        __int64 a1,
        __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  _OWORD *v6; // rcx
  int v7; // eax
  _OWORD v9[11]; // [rsp+20h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  for ( i = 0; ; ++i )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( i >= (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 64) - v5) >> 4)) )
      break;
    v6 = (_OWORD *)(176LL * i + v5);
    v9[0] = *v6;
    v9[1] = v6[1];
    v9[2] = v6[2];
    v9[3] = v6[3];
    v9[4] = v6[4];
    v9[5] = v6[5];
    v9[6] = v6[6];
    v9[7] = v6[7];
    v9[8] = v6[8];
    v9[9] = v6[9];
    v9[10] = v6[10];
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *))(*(_QWORD *)(a2 + 8) + 24LL))(a2 + 8, i, v9);
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
