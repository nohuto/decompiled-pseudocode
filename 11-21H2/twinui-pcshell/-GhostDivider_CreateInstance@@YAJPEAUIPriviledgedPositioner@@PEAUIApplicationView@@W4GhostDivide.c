/*
 * XREFs of ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@AEBU_GUID@@PEAPEAX@Z @ 0x18052BF8C
 * Callers:
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x180528BD0 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x18052B868 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 *     ?InternalRelease@?$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEAAKXZ @ 0x18052C0A0 (-InternalRelease@-$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GhostDivider_CreateInstance(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        GhostDivider *a6)
{
  GhostDivider *v6; // rdi
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  GhostDivider *v12; // rcx
  GhostDivider *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+30h] BYREF
  int v19; // [rsp+68h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v6 = a6;
  *(_QWORD *)a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease(&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<GhostDivider,GhostDivider,IPriviledgedPositioner * &,IApplicationView * &,enum GhostDividerPlacement &,enum GhostDividerSize &>(
         &a6,
         &v16,
         &v17,
         &v18,
         &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 553LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)v9);
    goto LABEL_11;
  }
  *(_QWORD *)v6 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7b6fb5ff_f28e_4cb4_b5a2_b48301faca38, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = a6;
    *(_QWORD *)v6 = a6;
    (*(void (__fastcall **)(GhostDivider *))(*(_QWORD *)v13 + 8LL))(v13);
    v8 = 0;
  }
  else if ( InlineIsEqualGUID(v11, v11) )
  {
    v12 = a6;
    *(_QWORD *)v6 = a6;
    v8 = 0;
    (*(void (__fastcall **)(GhostDivider *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    v8 = -2147467262;
  }
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 554LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease(&a6);
  return (unsigned int)v8;
}
