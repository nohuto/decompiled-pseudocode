/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x1801591D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1801587E0 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ??$emplace@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@AEBUVirtualTouchpadRect@@@Z @ 0x180158ABC (--$emplace@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteInsert(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r14
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  const char *v18; // r9
  __int64 (*v19)(void); // rax
  int v20; // eax
  Microsoft::BamoImpl::BamoImplObject *v21[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  v6 = a1 + 6;
  if ( a2 <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[7] - a1[6]) >> 3) )
  {
    v12 = a1[4];
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 32LL);
    if ( *(int *)(v13 + 8) <= 0 )
      v14 = 0LL;
    else
      v14 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v13 + 16);
    try
    {
      Microsoft::Bamo::Lock::Lock(v21, v14);
      std::vector<VirtualTouchpadRect>::emplace<VirtualTouchpadRect const &>((__int64)v6, &v23, *v6 + 24 * v4, a3);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v21, v15, v16, v17);
      v19 = *(__int64 (**)(void))(*a1 + 56LL);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x49F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v18);
    }
    if ( *(_BYTE *)(v19() + 28) )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 136LL))(a1, (unsigned int)v4);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A3,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v20,
          (int)v21[0]);
    }
    return 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v7 + 8) <= 0 )
      v8 = 0LL;
    else
      v8 = *(Microsoft::Bamo::BaseBamoConnection **)(v7 + 16);
    v9 = Microsoft::Bamo::BaseBamoConnection::TrackError(v8);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x496,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v9);
    return v10;
  }
}
