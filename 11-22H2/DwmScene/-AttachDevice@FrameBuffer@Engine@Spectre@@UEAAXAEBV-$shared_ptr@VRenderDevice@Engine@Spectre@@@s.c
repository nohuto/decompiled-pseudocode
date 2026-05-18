/*
 * XREFs of ?AttachDevice@FrameBuffer@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800281C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x180028690 (-CreateDeviceFrameBufferHelper@FrameBuffer@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?IsDeviceReady@SharedResource@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x180029600 (-IsDeviceReady@SharedResource@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 */

void __fastcall Spectre::Engine::FrameBuffer::AttachDevice(Spectre::Engine::FrameBuffer *this, __int64 *a2)
{
  struct Spectre::Engine::RenderDevice *v2; // rdi
  unsigned int ID; // eax

  v2 = (struct Spectre::Engine::RenderDevice *)*a2;
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  if ( !(unsigned __int8)Spectre::Engine::SharedResource::IsDeviceReady(this, ID) )
    Spectre::Engine::FrameBuffer::CreateDeviceFrameBufferHelper(this, v2);
}
