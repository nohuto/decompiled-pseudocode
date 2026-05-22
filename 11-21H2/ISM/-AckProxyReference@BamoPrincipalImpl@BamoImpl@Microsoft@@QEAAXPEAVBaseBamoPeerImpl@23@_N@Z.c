/*
 * XREFs of ?AckProxyReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@_N@Z @ 0x1800981E0
 * Callers:
 *     ?Thunk_AckProxyReference_14@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18009B5C0 (-Thunk_AckProxyReference_14@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManage.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::AckProxyReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        char a3)
{
  __int64 *v3; // rbx
  int v5; // edx
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (__int64 *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    v5 = *((_DWORD *)a2 + 9);
    do
    {
      if ( *(_DWORD *)(v3[5] + 36) == v5 )
        break;
      v3 = (__int64 *)v3[6];
    }
    while ( v3 );
  }
  if ( !*((_DWORD *)v3 + 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      186LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      (const char *)a2);
  _InterlockedDecrement((volatile signed __int32 *)v3 + 4);
  if ( !a3 && *((int *)v3 + 4) <= 0 )
  {
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)a2 + 80LL))(
      a2,
      *((unsigned int *)this + 6));
    v6 = *v3;
    *((_BYTE *)v3 + 32) = 0;
    (*(void (__fastcall **)(__int64 *))(v6 + 56))(v3);
  }
}
