/*
 * XREFs of ?SetProperties@Bounce@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z @ 0x180167C44
 * Callers:
 *     ?SetProperties@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129AF0 (-SetProperties@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotion.c)
 *     ?SetProperties@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129B60 (-SetProperties@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 *     ?SetProperties@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129BD0 (-SetProperties@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 * Callees:
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

void __fastcall Windows::UI::Composition::Bounce::SetProperties(
        Windows::UI::Composition::Bounce *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
    *((_DWORD *)a2 + 32),
    50,
    *(float *)this);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
    *((_DWORD *)a2 + 32),
    51,
    *((float *)this + 1));
}
