/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x18018D52C
 * Callers:
 *     ?UpdateBamoProperties@HapticsDevice@@QEAAXXZ @ 0x18018F1BC (-UpdateBamoProperties@HapticsDevice@@QEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x18008DD74 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@?$vector@USimpleHapticsControllerFeedback@@V?$allocator@USimpleHapticsControllerFeedback@@@std@@@std@@QEAAPEAUSimpleHapticsControllerFeedback@@QEAU2@AEBU2@@Z @ 0x18018C040 (--$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@-$vector@USimpleHapticsControllerFe.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::InsertWorker(
        __int64 a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        char *a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  const char *v12; // r9
  int v13; // eax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = *(_QWORD **)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 56);
  if ( a3 > (unsigned __int64)(((__int64)v8 - v9) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      333LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  v10 = (_QWORD *)(v9 + 8LL * a3);
  if ( v8 == *(_QWORD **)(a1 + 72) )
  {
    try
    {
      std::vector<SimpleHapticsControllerFeedback>::_Emplace_reallocate<SimpleHapticsControllerFeedback const &>(
        (const void **)(a1 + 56),
        (_BYTE *)(v9 + 8LL * a3),
        a4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x153,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v12);
    }
  }
  else
  {
    v11 = *(_QWORD *)a4;
    if ( v10 == v8 )
    {
      *v8 = v11;
      *(_QWORD *)(a1 + 64) += 8LL;
    }
    else
    {
      *v8 = *(v8 - 1);
      *(_QWORD *)(a1 + 64) += 8LL;
      memmove_0(v10 + 1, v10, (char *)(v8 - 1) - (char *)v10);
      *v10 = v11;
    }
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(a2) )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, a3, a4);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v13,
        v15);
  }
  return 0LL;
}
