/*
 * XREFs of ?Initialize@RenderDevice@Engine@Spectre@@MEAAXAEBUDeviceDescription@23@AEBUOutputDescription@23@@Z @ 0x180026AC0
 * Callers:
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::RenderDevice::Initialize(
        Spectre::Engine::RenderDevice *this,
        const struct Spectre::Engine::DeviceDescription *a2,
        const struct Spectre::Engine::OutputDescription *a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm1
  _BYTE v8[8]; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-30h]
  _OWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF

  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::RenderDevice *)((char *)this + 24));
  (*(void (__fastcall **)(Spectre::Engine::RenderDevice *, const struct Spectre::Engine::DeviceDescription *, const struct Spectre::Engine::OutputDescription *))(*(_QWORD *)this + 272LL))(
    this,
    a2,
    a3);
  v6 = *(_QWORD *)this;
  v7 = *((_OWORD *)a3 + 1);
  v10[0] = *(_OWORD *)a3;
  v10[1] = v7;
  (*(void (__fastcall **)(Spectre::Engine::RenderDevice *, _BYTE *, _OWORD *))(v6 + 136))(this, v8, v10);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
