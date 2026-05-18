/*
 * XREFs of ?GetWidth@DeviceFrameBuffer@Engine@Spectre@@UEBAIXZ @ 0x1800289F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056898 (-GetWidth@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 */

unsigned int __fastcall Spectre::Engine::DeviceFrameBuffer::GetWidth(Spectre::Engine::DeviceFrameBuffer *this)
{
  Spectre::Engine::DeviceTexture *v1; // rcx
  unsigned int result; // eax

  v1 = (Spectre::Engine::DeviceTexture *)*((_QWORD *)this + 12);
  result = 0;
  if ( v1 )
    return Spectre::Engine::DeviceTexture::GetWidth(v1);
  return result;
}
