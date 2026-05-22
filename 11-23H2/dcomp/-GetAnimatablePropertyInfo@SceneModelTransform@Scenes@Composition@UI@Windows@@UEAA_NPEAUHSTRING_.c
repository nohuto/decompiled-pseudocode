/*
 * XREFs of ?GetAnimatablePropertyInfo@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180192AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 *     ?GetAnimatablePropertyInfo@ComponentTransform3D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180152FA0 (-GetAnimatablePropertyInfo@ComponentTransform3D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4.c)
 */

bool __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::GetAnimatablePropertyInfo(
        Windows::UI::Composition::Scenes::SceneModelTransform *this,
        HSTRING string,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  HSTRING v5; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  bool result; // al
  HSTRING stringa; // [rsp+30h] [rbp-18h] BYREF

  v5 = string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Translation") )
  {
    stringa = v5;
  }
  else
  {
    if ( WindowsCreateString(L"Offset", 6u, &stringa) < 0 )
      return 0;
    v5 = stringa;
  }
  if ( !Windows::UI::Composition::ComponentTransform3D::GetAnimatablePropertyInfo(
          v5,
          a3,
          (unsigned int *)a4 + 1,
          (unsigned int *)a4 + 2,
          a5) )
    return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, stringa, a3, a4, a5);
  result = 1;
  *(_DWORD *)a4 = *(_DWORD *)(*((_QWORD *)this + 19) + 128LL);
  return result;
}
