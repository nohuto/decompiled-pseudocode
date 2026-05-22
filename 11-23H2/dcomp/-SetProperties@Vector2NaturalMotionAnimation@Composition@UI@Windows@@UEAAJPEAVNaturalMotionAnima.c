/*
 * XREFs of ?SetProperties@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x1801680E0
 * Callers:
 *     ?SetProperties@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129B60 (-SetProperties@BounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 *     ?SetProperties@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129CB0 (-SetProperties@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180188E10 (-SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector2NaturalMotionAnimation::SetProperties(
        Windows::UI::Composition::Vector2NaturalMotionAnimation *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int *v7; // rdi
  float v8; // xmm6_4
  float v9; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = Windows::UI::Composition::NaturalMotionAnimation::SetProperties(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (int *)((char *)a2 + 128);
    v8 = *((float *)this + 101);
    if ( *((_BYTE *)this + 408) )
    {
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        36,
        *((float *)this + 100));
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        37,
        v8);
    }
    v9 = *((float *)this + 104);
    if ( *((_BYTE *)this + 420) )
    {
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        40,
        *((float *)this + 103));
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        41,
        v9);
    }
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
      *v7,
      44,
      *((float *)this + 106));
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
      *v7,
      45,
      *((float *)this + 107));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvector2naturalanimation.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
