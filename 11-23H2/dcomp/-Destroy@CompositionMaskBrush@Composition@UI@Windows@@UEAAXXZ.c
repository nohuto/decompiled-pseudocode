/*
 * XREFs of ?Destroy@CompositionMaskBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002B060
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBrush@Composition@UI@Windows@@@Z @ 0x18002B180 (--4-$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionMaskBrush::Destroy(
        Windows::UI::Composition::CompositionMaskBrush *this)
{
  int v1; // esi
  DirectComposition::CDevice *v3; // rbx
  _DWORD *v4; // rax
  void (__fastcall ***v5)(_QWORD); // rcx
  void *v6; // rax
  int v7; // esi
  DirectComposition::CDevice *v8; // rbx
  _DWORD *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rcx
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 32);
  if ( v1 )
  {
    v3 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v3, 0x10u, &v11, 0);
    v4 = v11;
    *(_DWORD *)v11 = 13;
    v4[1] = v1;
    v4[2] = 0;
    v4[3] = 0;
    v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v3 + 10);
    if ( v5 )
      (**v5)(v5);
  }
  v6 = (void *)*((_QWORD *)this + 22);
  if ( v6 )
  {
    *((_QWORD *)this + 22) = 0LL;
    v11 = v6;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v11);
  }
  v7 = *((_DWORD *)this + 32);
  if ( v7 )
  {
    v8 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v8, 0x10u, &v11, 0);
    v9 = v11;
    *(_DWORD *)v11 = 13;
    v9[1] = v7;
    v9[2] = 1;
    v9[3] = 0;
    v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 10);
    if ( v10 )
      (**v10)(v10);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::operator=((char *)this + 168, 0LL);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
