/*
 * XREFs of ?SetFinalValueParameter@Visual@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x18010B970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?GetSparse_Opacity@Visual@Composition@UI@Windows@@AEBAMXZ @ 0x1800520B0 (-GetSparse_Opacity@Visual@Composition@UI@Windows@@AEBAMXZ.c)
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector2@Numerics@Foundation@4@XZ @ 0x180088FA0 (-GetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEBA-AUVector2@Numerics@Foundat.c)
 *     ?GetAnchorPoint@Visual@Composition@UI@Windows@@QEAAAEBUVector2@Numerics@Foundation@4@XZ @ 0x1800A19FC (-GetAnchorPoint@Visual@Composition@UI@Windows@@QEAAAEBUVector2@Numerics@Foundation@4@XZ.c)
 *     ?GetCenterPoint@Visual@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ @ 0x1800A1A30 (-GetCenterPoint@Visual@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ.c)
 *     ?GetOrientation@Visual@Composition@UI@Windows@@QEAAAEBUQuaternion@Numerics@Foundation@4@XZ @ 0x1800A1A64 (-GetOrientation@Visual@Composition@UI@Windows@@QEAAAEBUQuaternion@Numerics@Foundation@4@XZ.c)
 *     ?GetRotationAngle@Visual@Composition@UI@Windows@@QEAAMXZ @ 0x1800A1A98 (-GetRotationAngle@Visual@Composition@UI@Windows@@QEAAMXZ.c)
 *     ?GetRotationAngleInDegrees@Visual@Composition@UI@Windows@@QEAAMXZ @ 0x1800A1AC8 (-GetRotationAngleInDegrees@Visual@Composition@UI@Windows@@QEAAMXZ.c)
 *     ?GetRotationAxis@Visual@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ @ 0x1800A1B00 (-GetRotationAxis@Visual@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ.c)
 *     ?GetScale@Visual@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ @ 0x1800A1B34 (-GetScale@Visual@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ.c)
 *     ?GetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEBA?AUVector3@Numerics@Foundation@4@XZ @ 0x1800B5C20 (-GetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEBA-AUVector3@Numerics@Found.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 *     ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FA88 (-SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQua.c)
 *     ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z @ 0x18014FD04 (-SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetFinalValueParameter(
        Windows::UI::Composition::Visual *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const struct Windows::Foundation::Numerics::Vector2 *AnchorPoint; // rax
  int v10; // ebx
  __int64 v11; // rdx
  const struct Windows::Foundation::Numerics::Vector3 *CenterPoint; // rax
  float Sparse_Opacity; // xmm0_4
  const struct Windows::Foundation::Numerics::Quaternion *Orientation; // rax
  float RotationAngle; // xmm0_4
  float RotationAngleInDegrees; // xmm0_4
  const struct Windows::Foundation::Numerics::Vector3 *RotationAxis; // rax
  const struct Windows::Foundation::Numerics::Vector3 *Scale; // rax
  _QWORD v20[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"AnchorPoint") )
  {
    if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"CenterPoint") )
    {
      if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Offset") )
      {
        if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Opacity") )
        {
          if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Orientation") )
          {
            if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"RotationAngle") )
            {
              if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"RotationAngleInDegrees") )
              {
                if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"RotationAxis") )
                {
                  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Scale") )
                  {
                    if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Size") )
                    {
                      if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"RelativeOffsetAdjustment") )
                      {
                        if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"RelativeSizeAdjustment") )
                        {
                          v10 = Windows::UI::Composition::CompositionObject::SetFinalValueParameter(this, a2, a3, a4);
                          if ( v10 < 0 )
                          {
                            v11 = 1545LL;
                            goto LABEL_4;
                          }
                        }
                        else
                        {
                          Windows::UI::Composition::Visual::GetSparse_RelativeSizeAdjustment((__int64)this, v20);
                          v10 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(
                                  a4,
                                  a3,
                                  (const struct Windows::Foundation::Numerics::Vector2 *)v20);
                          if ( v10 < 0 )
                          {
                            v11 = 1541LL;
                            goto LABEL_4;
                          }
                        }
                      }
                      else
                      {
                        Windows::UI::Composition::Visual::GetSparse_RelativeOffsetAdjustment(
                          (__int64)this,
                          (__int64)v20);
                        v10 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
                                a4,
                                a3,
                                (const struct Windows::Foundation::Numerics::Vector3 *)v20);
                        if ( v10 < 0 )
                        {
                          v11 = 1537LL;
                          goto LABEL_4;
                        }
                      }
                    }
                    else
                    {
                      v10 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(
                              a4,
                              a3,
                              (Windows::UI::Composition::Visual *)((char *)this + 268));
                      if ( v10 < 0 )
                      {
                        v11 = 1533LL;
                        goto LABEL_4;
                      }
                    }
                  }
                  else
                  {
                    Scale = Windows::UI::Composition::Visual::GetScale(this);
                    v10 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(a4, a3, Scale);
                    if ( v10 < 0 )
                    {
                      v11 = 1529LL;
                      goto LABEL_4;
                    }
                  }
                }
                else
                {
                  RotationAxis = Windows::UI::Composition::Visual::GetRotationAxis(this);
                  v10 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(a4, a3, RotationAxis);
                  if ( v10 < 0 )
                  {
                    v11 = 1525LL;
                    goto LABEL_4;
                  }
                }
              }
              else
              {
                RotationAngleInDegrees = Windows::UI::Composition::Visual::GetRotationAngleInDegrees(this);
                v10 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, RotationAngleInDegrees);
                if ( v10 < 0 )
                {
                  v11 = 1521LL;
                  goto LABEL_4;
                }
              }
            }
            else
            {
              RotationAngle = Windows::UI::Composition::Visual::GetRotationAngle(this);
              v10 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, RotationAngle);
              if ( v10 < 0 )
              {
                v11 = 1517LL;
                goto LABEL_4;
              }
            }
          }
          else
          {
            Orientation = Windows::UI::Composition::Visual::GetOrientation(this);
            v10 = Windows::UI::Composition::CompositionAnimation::SetQuaternionParameter(a4, a3, Orientation);
            if ( v10 < 0 )
            {
              v11 = 1513LL;
              goto LABEL_4;
            }
          }
        }
        else
        {
          Sparse_Opacity = Windows::UI::Composition::Visual::GetSparse_Opacity(this);
          v10 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(a4, a3, Sparse_Opacity);
          if ( v10 < 0 )
          {
            v11 = 1509LL;
            goto LABEL_4;
          }
        }
      }
      else
      {
        v10 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
                a4,
                a3,
                (Windows::UI::Composition::Visual *)((char *)this + 248));
        if ( v10 < 0 )
        {
          v11 = 1505LL;
          goto LABEL_4;
        }
      }
    }
    else
    {
      CenterPoint = Windows::UI::Composition::Visual::GetCenterPoint(this);
      v10 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(a4, a3, CenterPoint);
      if ( v10 < 0 )
      {
        v11 = 1501LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    AnchorPoint = Windows::UI::Composition::Visual::GetAnchorPoint(this);
    v10 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(a4, a3, AnchorPoint);
    if ( v10 < 0 )
    {
      v11 = 1497LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  return 0LL;
}
