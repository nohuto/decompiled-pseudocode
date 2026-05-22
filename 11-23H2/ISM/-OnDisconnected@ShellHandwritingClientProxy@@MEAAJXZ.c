/*
 * XREFs of ?OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ @ 0x180062460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800623A4 (-InternalRelease@-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellHandwritingClientProxy::OnDisconnected(ShellHandwritingClientProxy *this)
{
  BamoInputSystemPrincipal **v1; // rbx
  __int64 v3; // rcx

  v1 = (BamoInputSystemPrincipal **)((char *)this + 48);
  v3 = *(_QWORD *)(*((_QWORD *)this + 6) + 56LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64, ShellHandwritingClientProxy *))(*(_QWORD *)v3 + 32LL))(v3, this);
  Microsoft::WRL::ComPtr<ShellHandwritingHostServer>::InternalRelease(v1);
  return 0LL;
}
