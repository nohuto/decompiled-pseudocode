/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionManipulation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180161380
 * Callers:
 *     ?GetAnimatablePropertyInfo@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18011D900 (-GetAnimatablePropertyInfo@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA_NPE.c)
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 */

bool __fastcall Windows::UI::Composition::CompositionManipulation::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionManipulation *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  int v10; // ebx
  int v11; // eax

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v10 = 0;
  *(_DWORD *)a3 = ((unsigned int)CompareAnimationNames(StringRawBuffer, L"Injections") == 0) + 1;
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Scale") )
  {
    v10 = 2;
LABEL_17:
    v11 = 18;
    goto LABEL_21;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"DeltaScale") )
  {
    v10 = 3;
    goto LABEL_17;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"CenterPoint") )
  {
    v10 = 4;
LABEL_14:
    v11 = 52;
    goto LABEL_21;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Position") )
    goto LABEL_14;
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"DeltaPosition") )
  {
    v10 = 1;
    goto LABEL_14;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Matrix") )
  {
    v10 = 5;
    v11 = 265;
LABEL_21:
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = v10;
    *(_DWORD *)a5 = v11;
    LOBYTE(v11) = 1;
    return v11;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"PositionVelocity") )
  {
    v10 = 6;
    goto LABEL_14;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"ScaleVelocity") )
  {
    v10 = 7;
    goto LABEL_17;
  }
  v11 = CompareAnimationNames(StringRawBuffer, L"Injections");
  if ( v11 )
  {
    LOBYTE(v11) = Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
    return v11;
  }
  if ( (*((_BYTE *)this + 156) & 1) != 0 )
  {
    v10 = 9;
    v11 = 17;
    goto LABEL_21;
  }
  return v11;
}
