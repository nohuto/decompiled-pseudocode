/*
 * XREFs of ?SetProperties@Spring@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z @ 0x180169390
 * Callers:
 *     ?SetProperties@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129C40 (-SetProperties@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotion.c)
 *     ?SetProperties@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129CB0 (-SetProperties@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 *     ?SetProperties@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129D20 (-SetProperties@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 * Callees:
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

void __fastcall Windows::UI::Composition::Spring::SetProperties(
        Windows::UI::Composition::Spring *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
    *((_DWORD *)a2 + 32),
    48,
    *(float *)this);
  DirectComposition::CDevice::ResourceSetFloatProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
    *((_DWORD *)a2 + 32),
    49,
    (float)((float)(int)*((_QWORD *)this + 1) / 10000.0) / 1000.0);
}
