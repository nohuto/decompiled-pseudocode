/*
 * XREFs of ?ResourceSetAnimationProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x180089008
 * Callers:
 *     ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z @ 0x18000EE84 (-SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ @ 0x180058C20 (-NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ.c)
 */

void __fastcall DirectComposition::CDevice::ResourceSetAnimationProperty(
        DirectComposition::CDevice *this,
        int a2,
        int a3,
        int a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    DirectComposition::CDevice::BeginKernelCommand(this, 0x10u, (void **)&v9, 0);
    v8 = v9;
    *v9 = 15;
    v8[1] = a2;
    v8[2] = a3;
    v8[3] = a4;
    DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
  }
}
