/*
 * XREFs of ?_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z @ 0x18074F57C
 * Callers:
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074F380 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     BindCtx_CreateWithObjectParam_0 @ 0x18074E888 (BindCtx_CreateWithObjectParam_0.c)
 */

__int64 __fastcall CTaskbandPin::_GetShellItem(IBindCtx *this, const unsigned __int16 *a2, struct IShellItem **a3)
{
  int v5; // edi
  void **v6; // r9
  IBindCtx *v7; // rbx
  IBindCtx *pbc; // [rsp+30h] [rbp+8h] BYREF

  pbc = this;
  *a3 = 0LL;
  v5 = BindCtx_CreateWithObjectParam_0((__int64)this, (__int64)a2, &pbc);
  if ( v5 >= 0 )
  {
    v6 = (void **)a3;
    v7 = pbc;
    v5 = SHCreateItemFromParsingName(a2, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, v6);
    ((void (__fastcall *)(IBindCtx *))v7->lpVtbl->Release)(v7);
  }
  return (unsigned int)v5;
}
