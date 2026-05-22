/*
 * XREFs of ?SetProperties@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180167730
 * Callers:
 *     ?SetProperties@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129AF0 (-SetProperties@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotion.c)
 *     ?SetProperties@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129C40 (-SetProperties@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotion.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180188E10 (-SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234.c)
 */

__int64 __fastcall Windows::UI::Composition::ScalarNaturalMotionAnimation::SetProperties(
        Windows::UI::Composition::ScalarNaturalMotionAnimation *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::NaturalMotionAnimation::SetProperties(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (int *)((char *)a2 + 128);
    if ( *((_BYTE *)this + 404) )
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        36,
        *((float *)this + 100));
    if ( *((_BYTE *)this + 412) )
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        40,
        *((float *)this + 102));
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
      *v7,
      44,
      *((float *)this + 104));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscalarnaturalanimation.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
