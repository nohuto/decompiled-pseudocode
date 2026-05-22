/*
 * XREFs of ?GetAnimatablePropertyInfo@ManipulationTransform@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005BBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 *     ?GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ @ 0x18008244C (-GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ.c)
 */

bool __fastcall Windows::UI::Composition::ManipulationTransform::GetAnimatablePropertyInfo(
        Windows::UI::Composition::ManipulationTransform *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  int v10; // ebx
  bool result; // al
  int v12; // r11d

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v10 = 0;
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Translation") )
    goto LABEL_7;
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Scale") )
  {
    v10 = 2;
    goto LABEL_7;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"CenterPoint") )
  {
    v10 = 3;
    goto LABEL_7;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Pan") )
  {
    v10 = 1;
    goto LABEL_7;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Matrix") )
  {
    v10 = 4;
LABEL_7:
    *(_DWORD *)a4 = Windows::UI::Composition::ManipulationTransform::GetManipulationTransformHandle(this);
    result = 1;
    *((_DWORD *)a4 + 1) = v10;
    *(_DWORD *)a5 = v12;
    *(_DWORD *)a3 = 1;
    return result;
  }
  return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
}
