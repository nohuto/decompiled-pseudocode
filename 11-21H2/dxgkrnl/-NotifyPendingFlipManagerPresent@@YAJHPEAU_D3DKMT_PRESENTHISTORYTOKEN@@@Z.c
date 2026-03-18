/*
 * XREFs of ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0077458
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB54 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0005B0C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0007288 (-IsTokenManagerReady@@YAHXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C00773F4 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall NotifyPendingFlipManagerPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // rbp
  int v5; // edi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax
  int v8; // eax
  struct DXGGLOBAL *v9; // rax
  struct DXGGLOBAL *v10; // rax
  PVOID v11; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v5 = 0;
  Global = DXGGLOBAL_GetGlobal();
  (*(void (**)(void))(*((_QWORD *)Global + 38073) + 440LL))();
  v7 = DXGGLOBAL_GetGlobal();
  v8 = (*(__int64 (**)(void))(*((_QWORD *)v7 + 38073) + 472LL))();
  if ( a1
    && !v8
    && (unsigned int)IsTokenManagerReady()
    && (v9 = DXGGLOBAL_GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)v9 + 38073) + 456LL))()) )
  {
    if ( (a2->Token.Gdi.ScrollRect.left & 4) != 0 )
      v5 = -1073741811;
  }
  else
  {
    v5 = -1071775730;
  }
  v10 = DXGGLOBAL_GetGlobal();
  (*(void (**)(void))(*((_QWORD *)v10 + 38073) + 488LL))();
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v5 = DxgkCompositionObject::ResolveHandle(FenceValue, 2u, 1, 5, &Object);
    if ( v5 >= 0 )
    {
      v11 = Object;
      v5 = FlipManagerTokenObject::MarkPending((FlipManagerTokenObject *)Object);
      if ( v5 < 0 )
      {
        if ( v11 )
          ObfDereferenceObject(v11);
      }
      else
      {
        a2->Token.Gdi.ScrollRect.left |= 4u;
        a2->Token.Flip.FenceValue = (UINT64)v11;
      }
    }
  }
  return (unsigned int)v5;
}
