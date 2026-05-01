/*
 * XREFs of BindCtx_CreateWithObjectParam_0 @ 0x18074E888
 * Callers:
 *     ?_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z @ 0x18074F57C (-_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     BindCtx_AddObjectParam @ 0x18060B3E8 (BindCtx_AddObjectParam.c)
 */

__int64 __fastcall BindCtx_CreateWithObjectParam_0(__int64 a1, __int64 a2, LPBC *a3)
{
  __int64 v4; // rdx
  int v5; // ebx
  CDummyUnknown *v6; // r8
  LPBC v7; // rcx
  LPBC ppbc; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  v5 = CreateBindCtx(0, &ppbc);
  if ( v5 >= 0 )
  {
    v5 = BindCtx_AddObjectParam((__int64)ppbc, v4, v6);
    if ( v5 >= 0 )
    {
      v7 = ppbc;
      *a3 = ppbc;
      ((void (__fastcall *)(LPBC))v7->lpVtbl->AddRef)(v7);
    }
    ((void (__fastcall *)(LPBC))ppbc->lpVtbl->Release)(ppbc);
  }
  return (unsigned int)v5;
}
