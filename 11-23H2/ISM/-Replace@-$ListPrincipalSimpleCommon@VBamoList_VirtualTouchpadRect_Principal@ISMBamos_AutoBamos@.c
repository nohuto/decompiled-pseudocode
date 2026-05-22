/*
 * XREFs of ?Replace@?$ListPrincipalSimpleCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_VirtualTouchpadRect_Stub@2345@UVirtualTouchpadRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180150AF4
 * Callers:
 *     ?OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x18014EC3C (-OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800A40D4 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800A41E8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800A495C (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,VirtualTouchpadRect,VirtualTouchpadRect const &>::Replace(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbx
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v14; // eax
  Microsoft::BamoImpl::BamoImplObject *v16[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v6 = *(_QWORD *)(a1[4] + 32LL);
  if ( *(int *)(v6 + 8) <= 0 )
    v7 = 0LL;
  else
    v7 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
  Microsoft::Bamo::Lock::Lock(v16, v7);
  v8 = a1[7];
  if ( v4 >= 0xAAAAAAAAAAAAAAABuLL * ((a1[8] - v8) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x114,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)0xAAAAAAAAAAAAAAABLL);
  v9 = *(_QWORD *)(a3 + 16);
  v10 = 3 * v4;
  *(_OWORD *)(v8 + 8 * v10) = *(_OWORD *)a3;
  *(_QWORD *)(v8 + 8 * v10 + 16) = v9;
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v7) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(a1[1] + 40LL))(a1 + 1, (unsigned int)v4, a3);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v14,
        (int)v16[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v16, v11, v12, v13);
  return 0LL;
}
