/*
 * XREFs of ?GetHeight@DeviceDepthBuffer@Engine@Spectre@@UEBAIXZ @ 0x1800533B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x1800567C8 (-GetHeight@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 */

unsigned int __fastcall Spectre::Engine::DeviceDepthBuffer::GetHeight(Spectre::Engine::DeviceDepthBuffer *this)
{
  Spectre::Engine::DeviceTexture *v1; // rcx
  unsigned int result; // eax

  v1 = (Spectre::Engine::DeviceTexture *)*((_QWORD *)this + 12);
  result = 0;
  if ( v1 )
    return Spectre::Engine::DeviceTexture::GetHeight(v1);
  return result;
}
