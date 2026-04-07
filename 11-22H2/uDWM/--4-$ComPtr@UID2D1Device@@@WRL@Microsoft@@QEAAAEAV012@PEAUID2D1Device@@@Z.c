/*
 * XREFs of ??4?$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z @ 0x18009EE8C
 * Callers:
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A0BF4 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1648 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<ID2D1Device>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
