/*
 * XREFs of ?UpdateAllBuffers@ImageProcessingEffect@Engine@Spectre@@UEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x180098150
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInternalEffectBuffers@ImageProcessingEffect@Engine@Spectre@@AEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x1800981D8 (-UpdateInternalEffectBuffers@ImageProcessingEffect@Engine@Spectre@@AEAAXPEAVRenderDevice@23@IIW4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::ImageProcessingEffect::UpdateAllBuffers(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6)
{
  Spectre::Engine::ImageProcessingEffect::UpdateInternalEffectBuffers(a1, a2);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 32LL))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
