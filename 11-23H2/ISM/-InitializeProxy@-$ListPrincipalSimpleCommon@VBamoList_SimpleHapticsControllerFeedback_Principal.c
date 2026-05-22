/*
 * XREFs of ?InitializeProxy@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@MEAAJPEAVBamoList_SimpleHapticsControllerFeedback_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x1801AB5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::InitializeProxy(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 56);
  if ( (*(_QWORD *)(a1 + 64) - v4) >> 3 )
  {
    v6 = 0LL;
    v7 = a2 + 8;
    do
    {
      v12 = *(_QWORD *)(v4 + 8 * v6);
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, v3, &v12);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x135,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v8,
          v10);
      v4 = *(_QWORD *)(a1 + 56);
      v6 = ++v3;
    }
    while ( v3 < (unsigned __int64)((*(_QWORD *)(a1 + 64) - v4) >> 3) );
  }
  return 0LL;
}
