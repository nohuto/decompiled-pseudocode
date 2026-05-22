/*
 * XREFs of ?SetFinalValueParameter@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x18013ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::SetFinalValueParameter(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  const unsigned __int16 *StringRawBuffer; // rbp
  int v9; // ebx
  __int64 v10; // rdx
  const char *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  const char *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  int v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Position") )
  {
    if ( (*((_BYTE *)this + 328) & 1) != 0 )
    {
      v9 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
             a4,
             a3,
             (Windows::UI::Composition::Interactions::InteractionTracker *)((char *)this + 256));
      if ( v9 < 0 )
      {
        v10 = 902LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
      return 0LL;
    }
    v12 = "Position only bindable during call to                     TryUpdatePositionWithAnimation.";
    v13 = 907LL;
LABEL_8:
    v9 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)0x80070057LL,
      (int)v12,
      v15);
    return (unsigned int)v9;
  }
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Scale") )
  {
    if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"MinPosition") )
    {
      if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"MaxPosition") )
      {
        if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"MinScale") )
        {
          if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"MaxScale") )
          {
            if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"PositionInertiaDecayRate") )
            {
              if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"ScaleInertiaDecayRate") )
              {
                v9 = Windows::UI::Composition::CompositionObject::SetFinalValueParameter(this, a2, a3, a4);
                if ( v9 < 0 )
                {
                  v10 = 954LL;
                  goto LABEL_5;
                }
              }
              else
              {
                v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, *((float *)this + 80));
                if ( v9 < 0 )
                {
                  v10 = 948LL;
                  goto LABEL_5;
                }
              }
            }
            else
            {
              v14 = *((_DWORD *)this + 78);
              v16 = *((_QWORD *)this + 38);
              v17 = v14;
              v9 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
                     a4,
                     a3,
                     (const struct Windows::Foundation::Numerics::Vector3 *)&v16);
              if ( v9 < 0 )
              {
                v10 = 942LL;
                goto LABEL_5;
              }
            }
          }
          else
          {
            v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, *((float *)this + 75));
            if ( v9 < 0 )
            {
              v10 = 936LL;
              goto LABEL_5;
            }
          }
        }
        else
        {
          v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, *((float *)this + 74));
          if ( v9 < 0 )
          {
            v10 = 932LL;
            goto LABEL_5;
          }
        }
      }
      else
      {
        v9 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
               a4,
               a3,
               (Windows::UI::Composition::Interactions::InteractionTracker *)((char *)this + 280));
        if ( v9 < 0 )
        {
          v10 = 928LL;
          goto LABEL_5;
        }
      }
    }
    else
    {
      v9 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
             a4,
             a3,
             (Windows::UI::Composition::Interactions::InteractionTracker *)((char *)this + 268));
      if ( v9 < 0 )
      {
        v10 = 924LL;
        goto LABEL_5;
      }
    }
    return 0LL;
  }
  if ( (*((_BYTE *)this + 328) & 1) == 0 )
  {
    v12 = "Scale only bindable during call to                     TryUpdatePositionWithAnimation..";
    v13 = 919LL;
    goto LABEL_8;
  }
  v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, *((float *)this + 73));
  if ( v9 < 0 )
  {
    v10 = 914LL;
    goto LABEL_5;
  }
  return 0LL;
}
