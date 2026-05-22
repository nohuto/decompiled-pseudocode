/*
 * XREFs of ?GetAnimatablePropertyInfo@InteractionTracker@Interactions@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180138C70
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 */

bool __fastcall Windows::UI::Composition::Interactions::InteractionTracker::GetAnimatablePropertyInfo(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const unsigned __int16 *StringRawBuffer; // rsi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Position") )
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 1;
    *(_DWORD *)a5 = 52;
LABEL_8:
    v11 = 2 * (*((_BYTE *)this + 328) & 1) + 1;
LABEL_51:
    *(_DWORD *)a3 = v11;
    return 1;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"PositionVelocityInPixelsPerSecond") )
  {
    v10 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 58;
LABEL_5:
    *(_DWORD *)a4 = v10;
    *(_DWORD *)a5 = 52;
LABEL_50:
    v11 = 1;
    goto LABEL_51;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"Scale") )
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 2;
    *(_DWORD *)a5 = 18;
    goto LABEL_8;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"ScaleVelocityInPercentPerSecond") )
  {
    v12 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 59;
LABEL_11:
    *(_DWORD *)a4 = v12;
    *(_DWORD *)a5 = 18;
    goto LABEL_50;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"MinPosition") )
  {
    v13 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 23;
LABEL_22:
    *(_DWORD *)a4 = v13;
    *(_DWORD *)a5 = 52;
LABEL_26:
    v11 = 3;
    goto LABEL_51;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"MaxPosition") )
  {
    v13 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 26;
    goto LABEL_22;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"MinScale") )
  {
    v14 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 29;
LABEL_25:
    *(_DWORD *)a4 = v14;
    *(_DWORD *)a5 = 18;
    goto LABEL_26;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"MaxScale") )
  {
    v14 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 30;
    goto LABEL_25;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"PositionInertiaDecayRate") )
  {
    v13 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 61;
    goto LABEL_22;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"ScaleInertiaDecayRate") )
  {
    v14 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 64;
    goto LABEL_25;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"InertiaCenterpointX") )
  {
    v15 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 67;
LABEL_31:
    *(_DWORD *)a4 = v15;
    *(_DWORD *)a5 = 18;
    v11 = *((_BYTE *)this + 328) & 2 | 1;
    goto LABEL_51;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"InertiaCenterpointY") )
  {
    v15 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 68;
    goto LABEL_31;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"InertiaModifier_SetX") )
  {
    v16 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 52;
LABEL_38:
    *(_DWORD *)a4 = v16;
    *(_DWORD *)a5 = 18;
LABEL_41:
    v11 = (*((_BYTE *)this + 328) & 4 | 2u) >> 1;
    goto LABEL_51;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"InertiaModifier_SetY") )
  {
    v16 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 53;
    goto LABEL_38;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"InertiaModifier_SetScale") )
  {
    v16 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 54;
    goto LABEL_38;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"InertiaModifier_SetXY") )
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 55;
    *(_DWORD *)a5 = 35;
    goto LABEL_41;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"NaturalRestingPosition") )
  {
    v10 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 56;
    goto LABEL_5;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"NaturalRestingScale") )
  {
    v12 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 57;
    goto LABEL_11;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"IsPositionRoundingSuggested") )
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 60;
    *(_DWORD *)a5 = 17;
    goto LABEL_50;
  }
  if ( !(unsigned int)CompareAnimationNames(StringRawBuffer, L"IsInertiaFromImpulse") )
  {
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
    *((_DWORD *)a4 + 1) = 69;
    *(_DWORD *)a5 = 17;
    goto LABEL_50;
  }
  return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
}
