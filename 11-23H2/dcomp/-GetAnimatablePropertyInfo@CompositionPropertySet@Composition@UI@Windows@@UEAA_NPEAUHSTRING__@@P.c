/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionPropertySet@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180074630
 * Callers:
 *     ?GetAnimatablePropertyInfo@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071300 (-GetAnimatablePropertyInfo@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@P.c)
 *     ?GetAnimatablePropertyInfo@CompositionShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071550 (-GetAnimatablePropertyInfo@CompositionShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4An.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

bool __fastcall Windows::UI::Composition::CompositionPropertySet::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionPropertySet *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  __int64 v5; // rdi
  HSTRING v10; // rcx
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v12; // rdx
  bool v13; // cl
  bool v14; // al
  int v15; // eax
  bool result; // al
  _QWORD *v17; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)a5 = 0;
  if ( !*((_DWORD *)this + 50) )
    return 0;
  while ( 1 )
  {
    v10 = *(HSTRING *)(8 * v5 + *((_QWORD *)this + 22));
    if ( v10 )
      StringRawBuffer = WindowsGetStringRawBuffer(v10, 0LL);
    else
      StringRawBuffer = 0LL;
    v12 = 0LL;
    if ( a2 )
      v12 = WindowsGetStringRawBuffer(a2, 0LL);
    v13 = !StringRawBuffer || !*StringRawBuffer;
    v14 = !v12 || !*v12;
    if ( v13 )
    {
      v15 = v14 - 1;
    }
    else
    {
      if ( v14 )
        goto LABEL_20;
      v15 = _wcsicmp_l(StringRawBuffer, v12, 0LL);
      if ( (unsigned int)(v15 + 1) > 2 )
        goto LABEL_20;
    }
    if ( !v15 )
      break;
LABEL_20:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *((_DWORD *)this + 50) )
      return 0;
  }
  *(_DWORD *)a4 = *((_DWORD *)this + 32);
  *((_DWORD *)a4 + 1) = v5;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           (char *)this + 208,
                           (unsigned int)v5) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  result = 1;
  *(_DWORD *)a5 = *(_DWORD *)(8 * v5 + *v17);
  *(_DWORD *)a3 = 3;
  return result;
}
