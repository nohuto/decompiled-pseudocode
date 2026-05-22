/*
 * XREFs of ?TryUpdatePositionWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013BA58
 * Callers:
 *     ?TryUpdatePositionWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013B9D0 (-TryUpdatePositionWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Wind.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A (-GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ.c)
 */

void __fastcall Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePositionWithAdditionalVelocity(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::Foundation::Numerics::Vector3 *a2,
        int *a3)
{
  __int64 NextRequestId; // rdi

  NextRequestId = (int)Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId(this);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    45,
    *(float *)a2);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    46,
    *((float *)a2 + 1));
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    47,
    NextRequestId);
  *a3 = NextRequestId;
}
