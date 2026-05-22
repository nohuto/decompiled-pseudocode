/*
 * XREFs of ?SetSDRBoost@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXM@Z @ 0x18018066C
 * Callers:
 *     ?put_SDRBoost@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJM@Z @ 0x180180C80 (-put_SDRBoost@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::SetSDRBoost(
        Windows::UI::Composition::Internal::CaptureRenderTarget *this,
        float a2)
{
  if ( *((float *)this + 49) != a2 )
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      7,
      a2);
    *((float *)this + 49) = a2;
  }
}
