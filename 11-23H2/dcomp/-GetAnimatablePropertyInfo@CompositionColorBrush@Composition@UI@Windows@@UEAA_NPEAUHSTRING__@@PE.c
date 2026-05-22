/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionColorBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180070D40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 */

bool __fastcall Windows::UI::Composition::CompositionColorBrush::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionColorBrush *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v9; // rdi
  PCWSTR StringRawBuffer; // rbp
  const wchar_t **v11; // rbx
  const wchar_t *v12; // rdx
  char v13; // cl
  unsigned __int8 v14; // al
  int v15; // eax
  bool result; // al

  v9 = &Windows::UI::Composition::CompositionColorBrush::k_rgAnimDef;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  do
  {
    v11 = (const wchar_t **)*v9;
    v12 = **(const wchar_t ***)v9;
    if ( !StringRawBuffer || (v13 = 0, !*StringRawBuffer) )
      v13 = 1;
    if ( !v12 || (v14 = 0, !*v12) )
      v14 = 1;
    if ( v13 )
    {
      v15 = v14 - 1;
    }
    else
    {
      if ( v14 )
        goto LABEL_14;
      v15 = _wcsicmp_l(StringRawBuffer, v12, 0LL);
      if ( (unsigned int)(v15 + 1) > 2 )
        goto LABEL_14;
    }
    if ( !v15 )
    {
      result = 1;
      *(_DWORD *)a3 = *((_DWORD *)v11 + 10);
      *(_DWORD *)a4 = *((_DWORD *)this + 32);
      *((_DWORD *)a4 + 1) = *((_DWORD *)v11 + 2);
      *(_DWORD *)a5 = *((_DWORD *)v11 + 4);
      return result;
    }
LABEL_14:
    ++v9;
  }
  while ( v9 != &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef );
  return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
}
