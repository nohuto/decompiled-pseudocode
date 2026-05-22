/*
 * XREFs of ?GetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVCompositionBrush@234@@Z @ 0x18019BC5C
 * Callers:
 *     ?GetSourceParameter@Api@?$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionBrush@345@@Z @ 0x1801769A0 (-GetSourceParameter@Api@-$CompositionEffectBrushT@VCompositionEffectBrush@Composition@UI@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrush::GetSourceParameter(
        Windows::UI::Composition::CompositionEffectBrush *this,
        HSTRING a2,
        struct Windows::UI::Composition::CompositionBrush **a3)
{
  __int64 v3; // rax
  unsigned int v5; // edi
  __int64 v7; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  struct Windows::UI::Composition::CompositionBrush *v9; // rax
  __int64 v10; // rdx
  volatile signed __int32 *v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 21);
  v5 = 0;
  v12 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HSTRING, unsigned int *))(**(_QWORD **)(v3 + 152) + 144LL))(
         *(_QWORD *)(v3 + 152),
         a2,
         &v14) )
  {
    v8 = *(Microsoft::WRL2::NestableRuntimeClass **)(*((_QWORD *)this + 22) + 8LL * v14);
    v9 = 0LL;
    if ( v8 )
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v8);
      v15 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v15, v10);
      v9 = v8;
    }
    *a3 = v9;
  }
  else
  {
    Windows::UI::Composition::OriginateInvalidArgument(7, (__int64)L"name");
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
      (const char *)0x80070057LL);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v12, v7);
  return v5;
}
