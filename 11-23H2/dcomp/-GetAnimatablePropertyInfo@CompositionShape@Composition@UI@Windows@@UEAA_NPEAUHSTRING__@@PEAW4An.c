/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionShape@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071550
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

bool __fastcall Windows::UI::Composition::CompositionShape::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionShape *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  PCWSTR StringRawBuffer; // rdi
  const struct Windows::UI::Composition::AnimationHelper::AnimatedProperty *const near *const *v10; // rbx
  const wchar_t *v11; // rdx
  bool v12; // cl
  bool v13; // al
  int v14; // eax
  Windows::UI::Composition::CompositionPropertySet *v15; // rax
  __int64 v17; // rax
  int v18; // eax
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+30h] [rbp-28h] BYREF
  Windows::UI::Composition::CompositionShape *v20; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v10 = &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef;
  while ( 1 )
  {
    v11 = **(const wchar_t ***)v10;
    v12 = !StringRawBuffer || !*StringRawBuffer;
    v13 = !v11 || !*v11;
    if ( v12 )
    {
      v14 = v13 - 1;
    }
    else
    {
      if ( v13 )
        goto LABEL_11;
      v14 = _wcsicmp_l(StringRawBuffer, v11, 0LL);
      if ( (unsigned int)(v14 + 1) > 2 )
        goto LABEL_11;
    }
    if ( !v14 )
      break;
LABEL_11:
    if ( ++v10 == &Windows::UI::Composition::CompositionSpriteShape::k_rgAnimDef )
    {
      v15 = (Windows::UI::Composition::CompositionPropertySet *)(*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionShape *, _QWORD))(*(_QWORD *)this + 112LL))(
                                                                  this,
                                                                  0LL);
      if ( v15 )
        return Windows::UI::Composition::CompositionPropertySet::GetAnimatablePropertyInfo(v15, a2, a3, a4, a5);
      return 0;
    }
  }
  *(_DWORD *)a3 = *((_DWORD *)*v10 + 10);
  *((_DWORD *)a4 + 1) = *((_DWORD *)*v10 + 2);
  *((_DWORD *)a4 + 2) = *((_DWORD *)*v10 + 3);
  *(_DWORD *)a5 = *((_DWORD *)*v10 + 4);
  v17 = *((_QWORD *)this + 19);
  if ( v17 )
    goto LABEL_16;
  v19 = 0LL;
  v20 = this;
  v18 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::ComponentTransform2D,Windows::UI::Composition::CompositionShape *>(
          &v19,
          &v20);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
      (const char *)(unsigned int)v18);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
    return 0;
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    0,
    *((_DWORD *)v19 + 32));
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>::operator=(
    (Microsoft::WRL2::NestableRuntimeClass **)this + 19,
    &v19);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
  v17 = *((_QWORD *)this + 19);
LABEL_16:
  *(_DWORD *)a4 = *(_DWORD *)(v17 + 128);
  return 1;
}
