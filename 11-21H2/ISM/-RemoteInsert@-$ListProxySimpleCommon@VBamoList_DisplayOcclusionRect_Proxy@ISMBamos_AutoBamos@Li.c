/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18012F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$emplace@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@AEBUDisplayOcclusionRect@@@Z @ 0x18012EDF4 (--$emplace@AEBUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteInsert(
        _QWORD *a1,
        unsigned int a2,
        _OWORD *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  const char *v15; // r9
  __int64 (*v16)(void); // rax
  int v17; // eax
  Microsoft::BamoImpl::BamoImplObject *v18[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1 + 6;
  v7 = a2;
  if ( a2 <= (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[7] - a1[6]) >> 4)) )
  {
    v9 = a1[4];
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 32LL);
    if ( *(int *)(v10 + 8) <= 0 )
      v11 = 0LL;
    else
      v11 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v10 + 16);
    try
    {
      Microsoft::Bamo::Lock::Lock(v18, v11);
      std::vector<DisplayOcclusionRect>::emplace<DisplayOcclusionRect const &>((__int64)v6, &v20, *v6 + 176 * v7, a3);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v18, v12, v13, v14);
      v16 = *(__int64 (**)(void))(*a1 + 56LL);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x48F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v15);
    }
    if ( *(_BYTE *)(v16() + 28) )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 136LL))(a1, a2);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x493,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v17,
          (int)v18[0]);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x486,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)0x87B2080CLL);
    return 2276591628LL;
  }
}
