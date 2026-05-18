/*
 * XREFs of ?SetEngine@SharedResource@Engine@Spectre@@AEAAXPEAV223@@Z @ 0x180029724
 * Callers:
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033170 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V-$shared_ptr@VRenderDevice@.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SharedResource::SetEngine(
        Spectre::Engine::SharedResource *this,
        struct Spectre::Engine::Engine *a2)
{
  *((_QWORD *)this + 9) = a2;
}
