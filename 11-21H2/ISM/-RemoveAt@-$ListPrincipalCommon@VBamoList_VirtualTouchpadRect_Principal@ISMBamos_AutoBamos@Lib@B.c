/*
 * XREFs of ?RemoveAt@?$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UVirtualTouchpadRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180136104
 * Callers:
 *     ?OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z @ 0x1801344A4 (-OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x18008DD74 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,VirtualTouchpadRect>::RemoveAt(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  struct Microsoft::Bamo::BaseBamoConnection *v5; // rbx
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // eax
  Microsoft::BamoImpl::BamoImplObject *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v4 = *(_QWORD *)(a1[4] + 32LL);
  if ( *(int *)(v4 + 8) <= 0 )
    v5 = 0LL;
  else
    v5 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
  Microsoft::Bamo::Lock::Lock(v12, v5);
  v6 = (const char *)a1[7];
  if ( v2 >= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[8] - (_QWORD)v6) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      167LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v6);
  memmove_0((void *)&v6[24 * v2], &v6[24 * v2 + 24], a1[8] - (_QWORD)&v6[24 * v2 + 24]);
  a1[8] -= 24LL;
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v5) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(a1[1] + 32LL))(a1 + 1, (unsigned int)v2);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v10,
        (int)v12[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v12, v7, v8, v9);
  return 0LL;
}
