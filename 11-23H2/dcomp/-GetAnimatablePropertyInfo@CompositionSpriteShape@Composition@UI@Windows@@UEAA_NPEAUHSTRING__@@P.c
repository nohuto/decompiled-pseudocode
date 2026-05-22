/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionSpriteShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071300
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800062F0 (--4-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionShape@234@@Details@WRL2@Microsoft@@YAJPEAPEAVComponentTransform2D@Composition@UI@Windows@@$$QEAPEAVCompositionShape@456@@Z @ 0x180071ABC (--$MakeAndInitialize2@VComponentTransform2D@Composition@UI@Windows@@V1234@PEAVCompositionShape@2.c)
 *     ?GetAnimatablePropertyInfo@CompositionPropertySet@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180074630 (-GetAnimatablePropertyInfo@CompositionPropertySet@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Windows::UI::Composition::CompositionSpriteShape::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionSpriteShape *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  PCWSTR StringRawBuffer; // rdi
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v10; // rbx
  const wchar_t **v11; // rsi
  const wchar_t *v12; // rdx
  bool v13; // cl
  bool v14; // al
  int v15; // eax
  PCWSTR v16; // rdi
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v17; // rbx
  const wchar_t *v18; // rdx
  bool v19; // cl
  bool v20; // al
  int v21; // eax
  Windows::UI::Composition::CompositionPropertySet *v22; // rax
  __int64 v24; // rax
  int v25; // eax
  Microsoft::WRL2::NestableRuntimeClass *v26; // [rsp+30h] [rbp-38h] BYREF
  Windows::UI::Composition::CompositionSpriteShape *v27; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v10 = &Windows::UI::Composition::CompositionSpriteShape::k_rgAnimDef;
  do
  {
    v11 = (const wchar_t **)*v10;
    v12 = **(const wchar_t ***)v10;
    v13 = !StringRawBuffer || !*StringRawBuffer;
    v14 = !v12 || !*v12;
    if ( v13 )
    {
      v15 = v14 - 1;
    }
    else
    {
      if ( v14 )
        goto LABEL_11;
      v15 = _wcsicmp_l(StringRawBuffer, v12, 0LL);
      if ( (unsigned int)(v15 + 1) > 2 )
        goto LABEL_11;
    }
    if ( !v15 )
    {
      *(_DWORD *)a3 = *((_DWORD *)v11 + 10);
      *(_DWORD *)a4 = *((_DWORD *)this + 32);
      *((_DWORD *)a4 + 1) = *((_DWORD *)v11 + 2);
      *(_DWORD *)a5 = *((_DWORD *)v11 + 4);
      return 1;
    }
LABEL_11:
    ++v10;
  }
  while ( v10 != &Windows::UI::Composition::Visual::k_rgAnimDef );
  v16 = WindowsGetStringRawBuffer(a2, 0LL);
  v17 = &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef;
  while ( 2 )
  {
    v18 = **(const wchar_t ***)v17;
    v19 = !v16 || !*v16;
    v20 = !v18 || !*v18;
    if ( v19 )
    {
      v21 = v20 - 1;
    }
    else if ( v20 || (v21 = _wcsicmp_l(v16, v18, 0LL), (unsigned int)(v21 + 1) > 2) )
    {
LABEL_22:
      if ( ++v17 != &Windows::UI::Composition::CompositionSpriteShape::k_rgAnimDef )
        continue;
      v22 = (Windows::UI::Composition::CompositionPropertySet *)(*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionSpriteShape *, _QWORD))(*(_QWORD *)this + 112LL))(
                                                                  this,
                                                                  0LL);
      if ( v22 )
        return Windows::UI::Composition::CompositionPropertySet::GetAnimatablePropertyInfo(v22, a2, a3, a4, a5);
      return 0;
    }
    break;
  }
  if ( v21 )
    goto LABEL_22;
  *(_DWORD *)a3 = *((_DWORD *)*v17 + 10);
  *((_DWORD *)a4 + 1) = *((_DWORD *)*v17 + 2);
  *((_DWORD *)a4 + 2) = *((_DWORD *)*v17 + 3);
  *(_DWORD *)a5 = *((_DWORD *)*v17 + 4);
  v24 = *((_QWORD *)this + 19);
  if ( v24 )
    goto LABEL_27;
  v26 = 0LL;
  v27 = this;
  v25 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::CompositionShape *>(
          &v26,
          &v27);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v26);
    return 0;
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    0,
    *((_DWORD *)v26 + 32));
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(
    (Microsoft::WRL2::NestableRuntimeClass **)this + 19,
    &v26);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v26);
  v24 = *((_QWORD *)this + 19);
LABEL_27:
  *(_DWORD *)a4 = *(_DWORD *)(v24 + 128);
  return 1;
}
