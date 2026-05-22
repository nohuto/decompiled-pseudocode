/*
 * XREFs of ?SetFinalValueParameter@CompositionClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180155890
 * Callers:
 *     ?SetFinalValueParameter@InsetClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801770E0 (-SetFinalValueParameter@InsetClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAn.c)
 *     ?SetFinalValueParameter@RectangleClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18017B720 (-SetFinalValueParameter@RectangleClip@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z @ 0x18000C820 (-CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z.c)
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 *     ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z @ 0x18014FD04 (-SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?GetAnchorPoint@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ @ 0x18015564C (-GetAnchorPoint@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ.c)
 *     ?GetCenterPoint@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ @ 0x180155670 (-GetCenterPoint@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ.c)
 *     ?GetOffset@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ @ 0x180155694 (-GetOffset@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ.c)
 *     ?GetRotationAngle@CompositionClip@Composition@UI@Windows@@QEBAMXZ @ 0x1801556B8 (-GetRotationAngle@CompositionClip@Composition@UI@Windows@@QEBAMXZ.c)
 *     ?GetRotationAngleInDegrees@CompositionClip@Composition@UI@Windows@@QEBAMXZ @ 0x1801556DC (-GetRotationAngleInDegrees@CompositionClip@Composition@UI@Windows@@QEBAMXZ.c)
 *     ?GetScale@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ @ 0x180155708 (-GetScale@CompositionClip@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@4@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::SetFinalValueParameter(
        Windows::UI::Composition::CompositionClip *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  const struct Windows::Foundation::Numerics::Vector2 *AnchorPoint; // rax
  int v9; // ebx
  __int64 v10; // rdx
  const struct Windows::Foundation::Numerics::Vector2 *CenterPoint; // rax
  const struct Windows::Foundation::Numerics::Vector2 *Offset; // rax
  float RotationAngle; // xmm0_4
  float RotationAngleInDegrees; // xmm0_4
  const struct Windows::Foundation::Numerics::Vector2 *Scale; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)CompareAnimationNames(a2, L"AnchorPoint") )
  {
    if ( (unsigned int)CompareAnimationNames(a2, L"CenterPoint") )
    {
      if ( (unsigned int)CompareAnimationNames(a2, L"Offset") )
      {
        if ( (unsigned int)CompareAnimationNames(a2, L"RotationAngle") )
        {
          if ( (unsigned int)CompareAnimationNames(a2, L"RotationAngleInDegrees") )
          {
            if ( (unsigned int)CompareAnimationNames(a2, L"Scale") )
            {
              v9 = Windows::UI::Composition::CompositionObject::SetFinalValueParameter(this, a2, a3, a4);
              if ( v9 < 0 )
              {
                v10 = 248LL;
                goto LABEL_4;
              }
            }
            else
            {
              Scale = Windows::UI::Composition::CompositionClip::GetScale(this);
              v9 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(a4, a3, Scale);
              if ( v9 < 0 )
              {
                v10 = 244LL;
                goto LABEL_4;
              }
            }
          }
          else
          {
            RotationAngleInDegrees = Windows::UI::Composition::CompositionClip::GetRotationAngleInDegrees(this);
            v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, RotationAngleInDegrees);
            if ( v9 < 0 )
            {
              v10 = 240LL;
              goto LABEL_4;
            }
          }
        }
        else
        {
          RotationAngle = Windows::UI::Composition::CompositionClip::GetRotationAngle(this);
          v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, RotationAngle);
          if ( v9 < 0 )
          {
            v10 = 236LL;
            goto LABEL_4;
          }
        }
      }
      else
      {
        Offset = Windows::UI::Composition::CompositionClip::GetOffset(this);
        v9 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(a4, a3, Offset);
        if ( v9 < 0 )
        {
          v10 = 232LL;
          goto LABEL_4;
        }
      }
    }
    else
    {
      CenterPoint = Windows::UI::Composition::CompositionClip::GetCenterPoint(this);
      v9 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(a4, a3, CenterPoint);
      if ( v9 < 0 )
      {
        v10 = 228LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    AnchorPoint = Windows::UI::Composition::CompositionClip::GetAnchorPoint(this);
    v9 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(a4, a3, AnchorPoint);
    if ( v9 < 0 )
    {
      v10 = 224LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionclip.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
