/*
 * XREFs of ?UpdateScrollValues@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAXMMM_N0@Z @ 0x18013C480
 * Callers:
 *     ?Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z @ 0x180139C5C (-Message_IdleBegin_Callback@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJH_N@Z.c)
 *     ?OnAnimatedPropertyChanged@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18013A090 (-OnAnimatedPropertyChanged@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJIIW4DCOM.c)
 * Callees:
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::UpdateScrollValues(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        float a2,
        float a3,
        float a4,
        bool a5,
        bool a6)
{
  if ( a5 )
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      4,
      a4);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      5,
      a2);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      6,
      a3);
  }
  if ( a6 )
  {
    *((float *)this + 73) = a4;
    *((float *)this + 64) = a2;
    *((float *)this + 65) = a3;
  }
}
