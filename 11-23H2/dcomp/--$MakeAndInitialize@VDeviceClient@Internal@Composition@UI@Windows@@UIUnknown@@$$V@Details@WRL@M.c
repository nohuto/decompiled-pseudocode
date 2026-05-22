/*
 * XREFs of ??$MakeAndInitialize@VDeviceClient@Internal@Composition@UI@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A4400
 * Callers:
 *     ??$MakeAndInitialize@VSharedD3DDevice@Internal@Composition@UI@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800A0FF4 (--$MakeAndInitialize@VSharedD3DDevice@Internal@Composition@UI@Windows@@UIInspectable@@$$V@Detail.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0DeviceClient@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A4DF8 (--0DeviceClient@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Internal::DeviceClient,IUnknown,>(
        _QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // edi
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = DefaultHeap::Alloc(0x38uLL);
  v7 = v2;
  if ( v2 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))Windows::UI::Composition::Internal::DeviceClient::DeviceClient((Windows::UI::Composition::Internal::DeviceClient *)v2);
    v7 = 0LL;
    v5 = v4;
    v3 = (**v4)(v4, &GUID_00000000_0000_0000_c000_000000000046, a1);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v5)[2])(v5);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v7);
  return v3;
}
