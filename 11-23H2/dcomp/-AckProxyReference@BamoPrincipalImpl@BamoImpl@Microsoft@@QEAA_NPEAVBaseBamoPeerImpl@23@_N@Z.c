/*
 * XREFs of ?AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA_NPEAVBaseBamoPeerImpl@23@_N@Z @ 0x18016B1F0
 * Callers:
 *     ?Thunk_AckProxyReference_37@?$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016E730 (-Thunk_AckProxyReference_37@-$IBamoPeer_dcompwinrtnestedg_AutoBamos_Receive@VBamoPeerImpl@dcompw.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x18016E1E8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 */

char __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AckProxyReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        char a3,
        const char *a4)
{
  __int64 v5; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rcx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 4);
  if ( !v5 )
    return 0;
  v6 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*((unsigned int *)a2 + 9);
  while ( *(_DWORD *)(*(_QWORD *)(v5 + 32) + 36LL) != (_DWORD)v6 )
  {
    v5 = *(_QWORD *)(v5 + 40);
    if ( !v5 )
      return 0;
  }
  v8 = *(_DWORD *)(v5 + 16);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      213LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      a4);
  v9 = v8 - 1;
  *(_DWORD *)(v5 + 16) = v9;
  if ( !a3 && !v9 && !*(_BYTE *)(v5 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v6, (struct Microsoft::BamoImpl::BamoStubImpl *)v5, 0);
  return 1;
}
