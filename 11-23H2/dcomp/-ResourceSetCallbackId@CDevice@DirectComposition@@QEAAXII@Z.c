/*
 * XREFs of ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80
 * Callers:
 *     ?CreateMaskBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionMaskBrush@345@@Z @ 0x180047C70 (-CreateMaskBrush@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionMaskBrush@.c)
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800484E0 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 *     ?ReleaseResouceHandle@ProxyObject@Composition@UI@Windows@@IEAAXXZ @ 0x1800A34CC (-ReleaseResouceHandle@ProxyObject@Composition@UI@Windows@@IEAAXXZ.c)
 *     ?ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x1800F3DFC (-ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ?RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z @ 0x1800F4178 (-RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDevice::ResourceSetCallbackId(DirectComposition::CDevice *this, int a2, int a3)
{
  _DWORD *v6; // rax
  void (__fastcall ***v7)(_QWORD); // rcx
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    DirectComposition::CDevice::BeginKernelCommand(this, 0xCu, &v8, 0);
    v6 = v8;
    *(_DWORD *)v8 = 7;
    v6[1] = a2;
    v6[2] = a3;
    v7 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
    if ( v7 )
      (**v7)(v7);
  }
}
