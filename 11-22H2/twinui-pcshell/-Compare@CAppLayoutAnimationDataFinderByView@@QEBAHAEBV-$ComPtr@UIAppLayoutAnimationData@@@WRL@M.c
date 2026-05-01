/*
 * XREFs of ?Compare@CAppLayoutAnimationDataFinderByView@@QEBAHAEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@0@Z @ 0x180791954
 * Callers:
 *     ?_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180793CC8 (-_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYP.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutAnimationDataFinderByView::Compare(struct IUnknown **a1, __int64 *a2, struct IUnknown *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebp
  int (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 *v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *a2;
  v10 = 0LL;
  v5 = -1;
  v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v9);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v7);
  if ( v6(v3, v7) >= 0 )
    v5 = SHIsSameObject(v10, *a1) == 0;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v10);
  return v5;
}
