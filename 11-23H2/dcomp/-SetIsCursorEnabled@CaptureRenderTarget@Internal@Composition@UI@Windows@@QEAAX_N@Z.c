/*
 * XREFs of ?SetIsCursorEnabled@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAX_N@Z @ 0x180180618
 * Callers:
 *     ?put_IsCursorEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJE@Z @ 0x180180BF0 (-put_IsCursorEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::SetIsCursorEnabled(
        Windows::UI::Composition::Internal::CaptureRenderTarget *this,
        unsigned __int8 a2)
{
  if ( *((_BYTE *)this + 192) != a2 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      4,
      a2);
    *((_BYTE *)this + 192) = a2;
  }
}
