/*
 * XREFs of ??$MakeAndInitialize@VEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@V123456@PEAUHSTRING__@@AEAPEBUEdgyDetectedParams@@@Details@WRL@Microsoft@@YAJPEAPEAVEdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@$$QEAPEAUHSTRING__@@AEAPEBUEdgyDetectedParams@@@Z @ 0x180130B88
 * Callers:
 *     ?NotifyEdgyDetected_Callback@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801313D0 (-NotifyEdgyDetected_Callback@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180130D18 (--0EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs,HSTRING__ *,EdgyDetectedParams const * &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = DefaultHeap::Alloc(0x88uLL);
  v12 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *)memset_0(v6, 0, 0x88uLL);
  if ( v8 )
    v9 = Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::EdgyDetectedEventArgs(v8);
  else
    v9 = 0LL;
  v12 = 0LL;
  v10 = *(_QWORD *)v9;
  v13 = v9;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v10 + 56))(v9, *a2, *a3);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v13);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *a1 = v9;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v13);
  return 0LL;
}
