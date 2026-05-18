/*
 * XREFs of ?IsValid@RenderOutput@Engine@Spectre@@UEBA_NXZ @ 0x18002C540
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceConnected@RenderOutput@Engine@Spectre@@IEBA_NXZ @ 0x18002C4D4 (-IsDeviceConnected@RenderOutput@Engine@Spectre@@IEBA_NXZ.c)
 */

bool __fastcall Spectre::Engine::RenderOutput::IsValid(Spectre::Engine::RenderOutput *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 160) )
    return Spectre::Engine::RenderOutput::IsDeviceConnected(this);
  return v1;
}
