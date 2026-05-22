/*
 * XREFs of ?SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180188E10
 * Callers:
 *     ?SetProperties@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180167730 (-SetProperties@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimat.c)
 *     ?SetProperties@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x1801680E0 (-SetProperties@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnima.c)
 *     ?SetProperties@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180168690 (-SetProperties@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnima.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::NaturalMotionAnimation::SetProperties(
        Windows::UI::Composition::NaturalMotionAnimation *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  int *v2; // rbx
  char *v4; // rdi
  float v5; // xmm3_4

  v2 = (int *)((char *)a2 + 128);
  v4 = (char *)a2 + 24;
  v5 = (float)(int)*((_QWORD *)this + 48) / 10000000.0;
  if ( v5 > 0.0 )
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)v4 + 456LL),
      *v2,
      16,
      v5);
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)v4 + 456LL),
    *v2,
    29,
    *((int *)this + 95));
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)v4 + 456LL),
    *v2,
    19,
    *((int *)this + 98));
  return 0LL;
}
