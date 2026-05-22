/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180130930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$emplace@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@AEBUVirtualTouchpadRect@@@Z @ 0x180130210 (--$emplace@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteInsert(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r14
  _QWORD *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  const char *v14; // r9
  __int64 (*v15)(void); // rax
  int v16; // eax
  Microsoft::BamoImpl::BamoImplObject *v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  v6 = a1 + 6;
  if ( a2 <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[7] - a1[6]) >> 3) )
  {
    v8 = a1[4];
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 32LL);
    if ( *(int *)(v9 + 8) <= 0 )
      v10 = 0LL;
    else
      v10 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v9 + 16);
    try
    {
      Microsoft::Bamo::Lock::Lock(v17, v10);
      std::vector<VirtualTouchpadRect>::emplace<VirtualTouchpadRect const &>((__int64)v6, &v19, *v6 + 24 * v4, a3);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v17, v11, v12, v13);
      v15 = *(__int64 (**)(void))(*a1 + 56LL);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x48F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v14);
    }
    if ( *(_BYTE *)(v15() + 28) )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 136LL))(a1, (unsigned int)v4);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x493,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v16,
          (int)v17[0]);
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
