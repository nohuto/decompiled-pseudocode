/*
 * XREFs of ?GenerateInstance@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180188B00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??4?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x1800442F4 (--4-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComposit.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?HasInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEBA_NXZ @ 0x180085CD0 (-HasInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18014F1A8 (-ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z @ 0x18014FBA0 (-SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVComp.c)
 *     ??$MakeAndInitialize2@VNaturalMotionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVNaturalMotionAnimation@234@V?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@AEAPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Details@WRL2@Microsoft@@YAJPEAPEAVNaturalMotionAnimator@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4DCOMPOSITION_EXPRESSION_TYPE@@$$QEAPEAVNaturalMotionAnimation@456@$$QEAV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@AEAPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x1801889E8 (--$MakeAndInitialize2@VNaturalMotionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 */

__int64 __fastcall Windows::UI::Composition::NaturalMotionAnimation::GenerateInstance(
        Windows::UI::Composition::CompositionAnimation *this,
        struct Windows::UI::Composition::CompositionObject *a2,
        volatile signed __int32 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        Microsoft::WRL2::NestableRuntimeClass **a7)
{
  char v11; // si
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  HSTRING_HEADER *v22; // rax
  Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  Windows::UI::Composition::CompositionAnimation *v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v28; // [rsp+50h] [rbp-30h] BYREF

  v24 = 0LL;
  v25 = a6;
  v11 = 0;
  if ( Windows::UI::Composition::CompositionAnimation::HasInitialValueExpressions(this) )
  {
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v28,
            (const WCHAR **)&Windows::UI::Composition::CompositionAnimation::c_thisParameterName,
            v12);
    v14 = Windows::UI::Composition::CompositionAnimation::SetReferenceParameter(
            this,
            (HSTRING)v13[1].Reserved.Reserved1,
            a2,
            1);
    v15 = v14;
    if ( v14 < 0 )
    {
      v20 = 70;
LABEL_9:
      DoStackCaptureDirect(v14, v20);
      goto LABEL_10;
    }
    v11 = 1;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::operator=(
      (Microsoft::WRL2::NestableRuntimeClass **)this + 34,
      a3);
    *((_QWORD *)this + 36) = a5;
    *((_QWORD *)this + 35) = a4;
  }
  v16 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionAnimation *, HSTRING_HEADER *))(*(_QWORD *)this + 304LL))(
          this,
          &v28);
  v27 = *((_QWORD *)this + 3);
  v26 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v24);
  v14 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::NaturalMotionAnimator,Windows::UI::Composition::NaturalMotionAnimator,Windows::UI::Composition::Compositor *,enum DCOMPOSITION_EXPRESSION_TYPE &,Windows::UI::Composition::NaturalMotionAnimation *,gsl::span<Windows::UI::Composition::AnimationHelper::AnimatedProperty const * const,-1>,std::unordered_map<std::wstring,Windows::UI::Composition::ParameterOverrideEntry> * &>(
          &v24,
          &v27,
          (int *)this + 94,
          (__int64 *)&v26,
          v16,
          &v25);
  v15 = v14;
  if ( v14 < 0 )
  {
    v20 = 88;
    goto LABEL_9;
  }
  v18 = v24;
  v24 = 0LL;
  *a7 = v18;
  v19 = *((_DWORD *)this + 75);
  if ( v19 )
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)v18 + 3) + 456LL),
      *((_DWORD *)v18 + 32),
      4,
      v19);
LABEL_10:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
    (volatile signed __int32 **)this + 34,
    v17);
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  if ( v11 )
  {
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v28,
            (const WCHAR **)&Windows::UI::Composition::CompositionAnimation::c_thisParameterName,
            v21);
    Windows::UI::Composition::CompositionAnimation::ClearParameter(this, (HSTRING)v22[1].Reserved.Reserved1);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v24);
  return v15;
}
