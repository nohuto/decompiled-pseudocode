/*
 * XREFs of ?Materialize_BamoInputDelegationInputObjectProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18000B298
 * Callers:
 *     ?Thunk_Materialize_BamoInputDelegationInputObjectProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000B0E0 (-Thunk_Materialize_BamoInputDelegationInputObjectProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@.c)
 * Callees:
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B850 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoInputDelegationInputObjectProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // rbx
  const char *v5; // r9
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-48h]
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v15; // [rsp+70h] [rbp+8h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v12[1] = 0LL;
  v13 = 0;
  v12[0] = 0LL;
  if ( !*(_DWORD *)(v4 + 188) )
  {
    v12[0] = v4;
    if ( *(_DWORD *)(v4 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v5);
    *(_DWORD *)(v4 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 32LL))(*(_QWORD *)(v4 + 16));
  }
  v15 = operator new(0x60uLL);
  memset_0(v15, 0, 0x60uLL);
  *((_DWORD *)v15 + 6) = 0;
  *((_QWORD *)v15 + 4) = 0LL;
  *((_QWORD *)v15 + 5) = 0LL;
  *((_QWORD *)v15 + 2) = &BamoImpl::BamoInputDelegationInputObjectProxyImpl::`vftable';
  *(_QWORD *)v15 = &InputDelegationInputObjectProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v15 + 1) = &InputDelegationInputObjectProxy::`vftable'{for `IInputDelegationInputObjectProxy'};
  *((_QWORD *)v15 + 6) = &InputDelegationInputObjectProxy::`vftable'{for `IDelegateInformationProvider'};
  *((_QWORD *)v15 + 7) = &InputDelegationInputObjectProxy::`vftable'{for `IInputSiteClientPrivate'};
  *((_QWORD *)v15 + 8) = 0LL;
  *((_QWORD *)v15 + 9) = 0LL;
  *((_QWORD *)v15 + 10) = 0LL;
  *((_DWORD *)v15 + 22) = 1;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(v12);
  v6 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v15 + 56LL))(v15);
  v7 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = this;
  (**(void (__fastcall ***)(BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *))this)(this);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_DWORD *)(v6 + 24) = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v8 + 40LL))(
         v8,
         *((unsigned int *)this + 9),
         a2,
         v6);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4887,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v11);
  return 0LL;
}
