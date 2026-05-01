/*
 * XREFs of BindCtx_CreateWithObjectParam @ 0x18060B4A0
 * Callers:
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x18060FE60 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     BindCtx_AddObjectParam @ 0x18060B3E8 (BindCtx_AddObjectParam.c)
 */

__int64 __fastcall BindCtx_CreateWithObjectParam(__int64 a1, IBindCtx *a2, LPBC *a3)
{
  __int64 v4; // rdx
  int v5; // ebx
  CDummyUnknown *v6; // r8
  LPBC v7; // rcx
  LPBC ppbc; // [rsp+38h] [rbp+10h] BYREF

  ppbc = a2;
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
