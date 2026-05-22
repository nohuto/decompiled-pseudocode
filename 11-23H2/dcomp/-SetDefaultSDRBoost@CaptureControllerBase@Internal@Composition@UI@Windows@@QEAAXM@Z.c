/*
 * XREFs of ?SetDefaultSDRBoost@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXM@Z @ 0x18018A460
 * Callers:
 *     ?put_DefaultSDRBoost@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z @ 0x18017FDA0 (-put_DefaultSDRBoost@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetDefaultSDRBoost(
        Windows::UI::Composition::Internal::CaptureControllerBase *this,
        float a2)
{
  if ( *((float *)this + 46) != a2 )
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      7,
      a2);
    *((float *)this + 46) = a2;
  }
}
