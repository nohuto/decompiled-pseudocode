/*
 * XREFs of ?SetProperties@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180168690
 * Callers:
 *     ?SetProperties@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129BD0 (-SetProperties@BounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 *     ?SetProperties@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180129D20 (-SetProperties@SpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234@@Z @ 0x180188E10 (-SetProperties@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVNaturalMotionAnimator@234.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::SetProperties(
        Windows::UI::Composition::Vector3NaturalMotionAnimation *this,
        struct Windows::UI::Composition::NaturalMotionAnimator *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int *v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+20h] [rbp-18h]
  float v10; // [rsp+28h] [rbp-10h]
  float v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = Windows::UI::Composition::NaturalMotionAnimation::SetProperties(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (int *)((char *)a2 + 128);
    v8 = *((_QWORD *)this + 50);
    v10 = *((float *)this + 102);
    if ( *((_BYTE *)this + 412) )
    {
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        36,
        *(float *)&v8);
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        37,
        *((float *)&v8 + 1));
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        38,
        v10);
    }
    v9 = *((_QWORD *)this + 52);
    v11 = *((float *)this + 106);
    if ( *((_BYTE *)this + 428) )
    {
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        40,
        *(float *)&v9);
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        41,
        *((float *)&v9 + 1));
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
        *v7,
        42,
        v11);
    }
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
      *v7,
      44,
      *((float *)this + 108));
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
      *v7,
      45,
      *((float *)this + 109));
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)a2 + 3) + 456LL),
      *v7,
      46,
      *((float *)this + 110));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvector3naturalanimation.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
