/*
 * XREFs of ?Replace@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013622C
 * Callers:
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18013403C (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x18008DD74 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,DisplayOcclusionRect,DisplayOcclusionRect const &>::Replace(
        _QWORD *a1,
        unsigned int a2,
        __int128 *a3)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rdi
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rdi
  const char *v8; // r9
  _OWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  int v13; // eax
  Microsoft::BamoImpl::BamoImplObject *v15[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+30h] [rbp-B8h]
  __int128 v17; // [rsp+40h] [rbp-A8h]
  __int128 v18; // [rsp+50h] [rbp-98h]
  __int128 v19; // [rsp+60h] [rbp-88h]
  __int128 v20; // [rsp+70h] [rbp-78h]
  __int128 v21; // [rsp+80h] [rbp-68h]
  __int128 v22; // [rsp+90h] [rbp-58h]
  __int128 v23; // [rsp+A0h] [rbp-48h]
  __int128 v24; // [rsp+B0h] [rbp-38h]
  __int128 v25; // [rsp+C0h] [rbp-28h]
  __int128 v26; // [rsp+D0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = a2;
  v6 = *(_QWORD *)(a1[4] + 32LL);
  if ( *(int *)(v6 + 8) <= 0 )
    v7 = 0LL;
  else
    v7 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
  Microsoft::Bamo::Lock::Lock(v15, v7);
  if ( v4 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[8] - a1[7]) >> 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      276LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v8);
  v16 = *a3;
  v17 = a3[1];
  v18 = a3[2];
  v19 = a3[3];
  v20 = a3[4];
  v21 = a3[5];
  v22 = a3[6];
  v23 = a3[7];
  v24 = a3[8];
  v25 = a3[9];
  v26 = a3[10];
  v9 = (_OWORD *)(a1[7] + 176 * v4);
  *v9 = v16;
  v9[1] = v17;
  v9[2] = v18;
  v9[3] = v19;
  v9[4] = v20;
  v9[5] = v21;
  v9[6] = v22;
  v9 += 8;
  *(v9 - 1) = v23;
  *v9 = v24;
  v9[1] = v25;
  v9[2] = v26;
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v7) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(a1[1] + 40LL))(a1 + 1, (unsigned int)v4, a3);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v13,
        (int)v15[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v15, v10, v11, v12);
  return 0LL;
}
