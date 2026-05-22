/*
 * XREFs of ?SetIsClearEnabled@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAX_N@Z @ 0x1801805C4
 * Callers:
 *     ?put_IsClearEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJE@Z @ 0x180180B60 (-put_IsClearEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::SetIsClearEnabled(
        Windows::UI::Composition::Internal::CaptureRenderTarget *this,
        unsigned __int8 a2)
{
  if ( *((_BYTE *)this + 193) != a2 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      5,
      a2);
    *((_BYTE *)this + 193) = a2;
  }
}
