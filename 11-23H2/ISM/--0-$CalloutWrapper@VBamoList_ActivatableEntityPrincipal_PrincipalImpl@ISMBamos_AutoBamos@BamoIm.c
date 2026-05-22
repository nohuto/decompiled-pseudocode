/*
 * XREFs of ??0?$CalloutWrapper@VBamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@1Lib@Bamo@2@W4PrologEpilogConfig@12@@Z @ 0x1800290B0
 * Callers:
 *     ?OnDisconnectedThunk@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ @ 0x180029030 (-OnDisconnectedThunk@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Li.c)
 *     ??0?$CalloutWrapper@VBamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@1Lib@Bamo@2@@Z @ 0x1800A0BC0 (--0-$CalloutWrapper@VBamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_Aut_ea_1800A0BC0.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800221F0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl>::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl>(
        __int64 a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        void (__fastcall ***a3)(_QWORD),
        int a4)
{
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = 0LL;
  if ( !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 - 16) + 40LL))(v7 - 16);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v8,
          v10);
    }
  }
  return a1;
}
