/*
 * XREFs of ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x180072870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180662D90 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1806653A4 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnMessage(CShellSnapComponent *this, __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8

  v4 = a3 - 101;
  if ( !v4 )
  {
    CShellSnapComponent::ToggleSnapFlyout((CShellSnapComponent *)((char *)this - 152));
    return 0LL;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v9 = (__int64 *)((char *)this - 8);
    v10 = *v9;
    v11 = 2424841LL;
    goto LABEL_11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = (__int64 *)((char *)this - 8);
    v10 = *v9;
    v11 = 2555913LL;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = (__int64 *)((char *)this - 8);
    v10 = *v9;
    v11 = 2490377LL;
    goto LABEL_11;
  }
  if ( v7 == 1 )
  {
    v9 = (__int64 *)((char *)this - 8);
    v10 = *v9;
    v11 = 2621449LL;
LABEL_11:
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v10 + 32))(v9, 0LL, v11);
    CShellSnapComponent::RegisterRawInput((CShellSnapComponent *)((char *)this - 152));
  }
  return 0LL;
}
