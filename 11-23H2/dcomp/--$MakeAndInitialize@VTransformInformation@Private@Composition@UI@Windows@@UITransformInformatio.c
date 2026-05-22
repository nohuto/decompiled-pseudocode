/*
 * XREFs of ??$MakeAndInitialize@VTransformInformation@Private@Composition@UI@Windows@@UITransformInformation@2345@PEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUITransformInformation@Private@Composition@UI@Windows@@$$QEAPEAUHWND__@@@Z @ 0x180104A04
 * Callers:
 *     ?ActivateInstance@TransformInformationFactory@Private@Composition@UI@Windows@@UEAAJ_JPEAPEAUITransformInformation@2345@@Z @ 0x180105BA0 (-ActivateInstance@TransformInformationFactory@Private@Composition@UI@Windows@@UEAAJ_JPEAPEAUITra.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0TransformInformation@Private@Composition@UI@Windows@@QEAA@XZ @ 0x1801059C8 (--0TransformInformation@Private@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Private::TransformInformation,Windows::UI::Composition::Private::ITransformInformation,HWND__ *>(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v4; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x48uLL);
  v9 = v4;
  if ( v4 )
  {
    v6 = Windows::UI::Composition::Private::TransformInformation::TransformInformation((Windows::UI::Composition::Private::TransformInformation *)v4);
    v9 = 0LL;
    v7 = v6;
    v10 = v6;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, *a2);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v7)(
             v7,
             &GUID_b3cb95a7_dbc2_4a6a_a397_30bf02c6b15d,
             a1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)v5;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v10);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v9);
  return (unsigned int)v5;
}
