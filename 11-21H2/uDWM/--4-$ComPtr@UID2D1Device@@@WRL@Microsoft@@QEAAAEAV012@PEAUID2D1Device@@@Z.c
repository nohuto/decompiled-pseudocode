/*
 * XREFs of ??4?$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z @ 0x18004C69C
 * Callers:
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004BF1C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055888 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<ID2D1Device>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    v6 = v4;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  return a1;
}
