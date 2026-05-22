/*
 * XREFs of ??$MakeAndInitialize@VSharedD3DDevice@Internal@Composition@UI@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800A0FF4
 * Callers:
 *     ?ActivateInstance@?$SimpleAgileActivationFactory@VSharedD3DDevice@Internal@Composition@UI@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800A1390 (-ActivateInstance@-$SimpleAgileActivationFactory@VSharedD3DDevice@Internal@Composition@UI@Window.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0SharedD3DDevice@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A1168 (--0SharedD3DDevice@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VDeviceClient@Internal@Composition@UI@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A4400 (--$MakeAndInitialize@VDeviceClient@Internal@Composition@UI@Windows@@UIUnknown@@$$V@Details@WRL@M.c)
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Internal::SharedD3DDevice,IInspectable,>(
        _QWORD *a1)
{
  Windows::UI::Composition::Internal::SharedD3DDevice *v2; // rax
  int v3; // ebx
  __int64 v4; // rax
  __int64 *v5; // rdi
  Windows::UI::Composition::Internal::SharedD3DDevice *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (Windows::UI::Composition::Internal::SharedD3DDevice *)DefaultHeap::Alloc(0x58uLL);
  v7 = v2;
  if ( v2 )
  {
    v4 = Windows::UI::Composition::Internal::SharedD3DDevice::SharedD3DDevice(v2);
    v7 = 0LL;
    v5 = (__int64 *)v4;
    Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance();
    wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset(v5 + 10);
    v3 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Internal::DeviceClient,IUnknown,>(v5 + 10);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
             v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
      (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
    }
    else if ( v5 )
    {
      (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v7);
  return (unsigned int)v3;
}
