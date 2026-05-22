/*
 * XREFs of ?SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVALUE@@@Z @ 0x18014F66C
 * Callers:
 *     ?SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositionObject@234@PEAVCompositionAnimation@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C538 (-SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositio.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180148FA0 (-SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAV.c)
 *     ?SetColorParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z @ 0x18014F5A0 (-SetColorParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@4.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetColorParameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        const __m128i *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  ParameterEntry *v8; // rbx
  __m128i v9; // xmm6
  __int64 v10; // rdx
  ParameterEntry *v12; // [rsp+30h] [rbp-28h] BYREF
  bool v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0;
  v6 = Windows::UI::Composition::CompositionAnimation::ValidateKey(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x1FEu);
  }
  else
  {
    Windows::UI::Composition::CompositionAnimation::GetElementForKey(this, a2, 1, &v12, &v13);
    v8 = v12;
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(this, v12, v13);
    v9 = _mm_loadu_si128(a3);
    ParameterEntry::ClearMatrixValue(v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
      (volatile signed __int32 **)v8 + 2,
      v10);
    *((_DWORD *)v8 + 2) = 70;
    *(__m128i *)((char *)v8 + 40) = v9;
    return 0;
  }
  return v7;
}
