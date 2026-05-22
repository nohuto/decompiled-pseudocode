/*
 * XREFs of ?FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Windows@@YA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAI3PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005D894
 * Callers:
 *     ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071D5C (-GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4.c)
 *     ?GetAnimatablePropertyInfo@ComponentTransform3D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180152FA0 (-GetAnimatablePropertyInfo@ComponentTransform3D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4.c)
 *     ?GetAnimatablePropertyInfo@NaturalMotionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180188CC0 (-GetAnimatablePropertyInfo@NaturalMotionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@P.c)
 * Callees:
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 */

char __fastcall Windows::UI::Composition::AnimationHelper::FindAnimatablePropertyInfo(
        HSTRING a1,
        _QWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  PCWSTR StringRawBuffer; // rax
  char v10; // si
  const unsigned __int16 ***v11; // rdi
  const unsigned __int16 *v12; // rbp
  const unsigned __int16 ***v13; // rbx

  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v10 = 0;
  v11 = (const unsigned __int16 ***)a2[1];
  v12 = StringRawBuffer;
  v13 = &v11[*a2];
  while ( v11 != v13 )
  {
    if ( !(unsigned int)CompareAnimationNames(v12, **v11) )
    {
      v10 = 1;
      *a3 = *((_DWORD *)*v11 + 10);
      *a4 = *((_DWORD *)*v11 + 2);
      *a5 = *((_DWORD *)*v11 + 3);
      *a6 = *((_DWORD *)*v11 + 4);
      return v10;
    }
    ++v11;
  }
  return v10;
}
