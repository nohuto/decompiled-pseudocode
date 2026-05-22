/*
 * XREFs of ?TryUpdateScaleWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXMAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013C108
 * Callers:
 *     ?TryUpdateScaleWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013C070 (-TryUpdateScaleWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Windows.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::TryUpdateScaleWithAdditionalVelocity(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        float a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        int *a4)
{
  __int64 NextRequestId; // rdi

  NextRequestId = (int)Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId(this);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    48,
    a2);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    49,
    *(float *)a3);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    50,
    *((float *)a3 + 1));
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    51,
    NextRequestId);
  *a4 = NextRequestId;
}
