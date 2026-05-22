/*
 * XREFs of ?SetFinalValueParameter@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z @ 0x180192D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180109830 (-SetFinalValueParameter@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompo.c)
 *     ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FA88 (-SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQua.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::SetFinalValueParameter(
        Windows::UI::Composition::Scenes::SceneModelTransform *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::UI::Composition::CompositionAnimation *a4)
{
  const unsigned __int16 *StringRawBuffer; // rbp
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Translation") )
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
              v9 = Windows::UI::Composition::CompositionObject::SetFinalValueParameter(this, a2, a3, a4);
              if ( v9 < 0 )
              {
                v10 = 194LL;
                goto LABEL_4;
              }
            }
            else
            {
              v9 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
                     a4,
                     a3,
                     (const struct Windows::Foundation::Numerics::Vector3 *)(*((_QWORD *)this + 19) + 240LL));
              if ( v9 < 0 )
              {
                v10 = 190LL;
                goto LABEL_4;
              }
            }
          }
          else
          {
            v9 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
                   a4,
                   a3,
                   (const struct Windows::Foundation::Numerics::Vector3 *)(*((_QWORD *)this + 19) + 252LL));
            if ( v9 < 0 )
            {
              v10 = 186LL;
              goto LABEL_4;
            }
          }
        }
        else
        {
          v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(
                 a4,
                 a3,
                 *(float *)(*((_QWORD *)this + 19) + 272LL) * 57.295776);
          if ( v9 < 0 )
          {
            v10 = 182LL;
            goto LABEL_4;
          }
        }
      }
      else
      {
        v9 = Windows::UI::Composition::CompositionAnimation::SetScalarParameter(
               a4,
               a3,
               *(float *)(*((_QWORD *)this + 19) + 272LL));
        if ( v9 < 0 )
        {
          v10 = 178LL;
          goto LABEL_4;
        }
      }
    }
    else
    {
      v9 = Windows::UI::Composition::CompositionAnimation::SetQuaternionParameter(
             a4,
             a3,
             (const struct Windows::Foundation::Numerics::Quaternion *)(*((_QWORD *)this + 19) + 200LL));
      if ( v9 < 0 )
      {
        v10 = 174LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v9 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(
           a4,
           a3,
           (const struct Windows::Foundation::Numerics::Vector3 *)(*((_QWORD *)this + 19) + 228LL));
    if ( v9 < 0 )
    {
      v10 = 170LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemodeltransform.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
