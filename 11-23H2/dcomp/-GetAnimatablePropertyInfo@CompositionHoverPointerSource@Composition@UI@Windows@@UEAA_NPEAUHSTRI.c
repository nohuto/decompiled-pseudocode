/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionHoverPointerSource@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180011B70
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 */

bool __fastcall Windows::UI::Composition::CompositionHoverPointerSource::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionHoverPointerSource *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const unsigned __int16 *StringRawBuffer; // rax
  int v10; // eax
  bool result; // al

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( (unsigned int)CompareAnimationNames(StringRawBuffer, L"Point") )
    return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
  v10 = *((_DWORD *)this + 32);
  *((_DWORD *)a4 + 1) = 0;
  *(_DWORD *)a4 = v10;
  *(_DWORD *)a5 = 35;
  result = 1;
  *(_DWORD *)a3 = 1;
  return result;
}
