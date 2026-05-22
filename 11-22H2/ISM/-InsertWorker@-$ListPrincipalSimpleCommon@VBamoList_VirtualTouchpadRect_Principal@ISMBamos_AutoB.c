/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUVirtualTouchpadRect@@@Z @ 0x18015BFF0
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18015A77C (-Add@-$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800B73FC (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??$emplace@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@AEBUVirtualTouchpadRect@@@Z @ 0x180158ABC (--$emplace@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpa.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        const char *a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // r8
  const char *v10; // r9
  Microsoft::Bamo::BaseBamoConnection *v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v16; // [rsp+40h] [rbp+8h] BYREF

  v8 = (_QWORD *)(a1 + 56);
  if ( a3 > 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8[1] - *v8) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  v9 = *v8 + 24LL * a3;
  try
  {
    std::vector<VirtualTouchpadRect>::emplace<VirtualTouchpadRect const &>((__int64)v8, &v16, v9, (__int64)a4);
    v11 = a2;
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x153,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v10);
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v11) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, const char *))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, a3, a4);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v12,
        v14);
  }
  return 0LL;
}
