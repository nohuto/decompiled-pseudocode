/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180157F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$emplace@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@AEBUDisplayOcclusionRect@@@Z @ 0x180157744 (--$emplace@AEBUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclu.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1801587E0 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteInsert(
        _QWORD *a1,
        unsigned int a2,
        _OWORD *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  const char *v19; // r9
  __int64 (*v20)(void); // rax
  int v21; // eax
  Microsoft::BamoImpl::BamoImplObject *v22[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v24; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1 + 6;
  v7 = a2;
  if ( a2 <= (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[7] - a1[6]) >> 4)) )
  {
    v13 = a1[4];
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 24) + 32LL);
    if ( *(int *)(v14 + 8) <= 0 )
      v15 = 0LL;
    else
      v15 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v14 + 16);
    try
    {
      Microsoft::Bamo::Lock::Lock(v22, v15);
      std::vector<DisplayOcclusionRect>::emplace<DisplayOcclusionRect const &>((__int64)v6, &v24, *v6 + 176 * v7, a3);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v22, v16, v17, v18);
      v20 = *(__int64 (**)(void))(*a1 + 56LL);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x49F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v19);
    }
    if ( *(_BYTE *)(v20() + 28) )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 136LL))(a1, a2);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A3,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v21,
          (int)v22[0]);
    }
    return 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v8 + 8) <= 0 )
      v9 = 0LL;
    else
      v9 = *(Microsoft::Bamo::BaseBamoConnection **)(v8 + 16);
    v10 = Microsoft::Bamo::BaseBamoConnection::TrackError(v9, a2);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x496,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v10);
    return v11;
  }
}
