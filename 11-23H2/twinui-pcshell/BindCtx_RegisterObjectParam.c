/*
 * XREFs of BindCtx_RegisterObjectParam @ 0x18079A8AC
 * Callers:
 *     BindCtx_RegisterFolderEnumMode @ 0x18079A834 (BindCtx_RegisterFolderEnumMode.c)
 * Callees:
 *     CreateBindCtx_0 @ 0x1801CC092 (CreateBindCtx_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIBindCtx@@@@YAXPEAPEAUIBindCtx@@@Z @ 0x180750EF0 (--$SafeRelease@UIBindCtx@@@@YAXPEAPEAUIBindCtx@@@Z.c)
 *     BindCtx_AddObjectParam_0 @ 0x18079A7AC (BindCtx_AddObjectParam_0.c)
 */

__int64 __fastcall BindCtx_RegisterObjectParam(IBindCtx *a1, __int64 a2, CDummyUnknown *a3, LPBC *a4)
{
  __int64 v6; // rdx
  int BindCtx_0; // ebx

  *a4 = a1;
  if ( a1 )
  {
    ((void (__fastcall *)(IBindCtx *))a1->lpVtbl->AddRef)(a1);
  }
  else
  {
    BindCtx_0 = CreateBindCtx_0(0, a4);
    if ( BindCtx_0 < 0 )
      return (unsigned int)BindCtx_0;
  }
  BindCtx_0 = BindCtx_AddObjectParam_0((__int64)*a4, v6, a3);
  if ( BindCtx_0 < 0 )
    SafeRelease<IBindCtx>((__int64 *)a4);
  return (unsigned int)BindCtx_0;
}
