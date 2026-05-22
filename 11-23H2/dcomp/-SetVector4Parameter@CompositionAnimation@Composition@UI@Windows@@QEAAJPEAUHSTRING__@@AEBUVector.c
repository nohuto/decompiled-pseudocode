/*
 * XREFs of ?SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector4@Numerics@Foundation@4@@Z @ 0x18014FE58
 * Callers:
 *     ?SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositionObject@234@PEAVCompositionAnimation@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C538 (-SetFinalValueParameter@AnimationHelper@Composition@UI@Windows@@YAJPEAUHSTRING__@@PEAVCompositio.c)
 *     ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801471CC (-SetFinalValueParameterHelper@ProxyObject@Composition@UI@Windows@@IEAA_NPEAUHSTRING__@@0PEAVComp.c)
 *     ?SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180148FA0 (-SetFinalValueParameter@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAV.c)
 *     ?SetVector4Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector4@Numerics@Foundation@5@@Z @ 0x18014FDC0 (-SetVector4Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVecto.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetVector4Parameter(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        const struct Windows::Foundation::Numerics::Vector4 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  ParameterEntry *v8; // rbx
  __int64 v9; // rdx
  ParameterEntry *v11; // [rsp+30h] [rbp-18h] BYREF
  bool v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0;
  v6 = Windows::UI::Composition::CompositionAnimation::ValidateKey(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x1D8u);
  }
  else
  {
    Windows::UI::Composition::CompositionAnimation::GetElementForKey(this, a2, 1, &v11, &v12);
    v8 = v11;
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(this, v11, v12);
    ParameterEntry::ClearMatrixValue(v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
      (volatile signed __int32 **)v8 + 2,
      v9);
    *((_DWORD *)v8 + 2) = 69;
    *(_OWORD *)((char *)v8 + 40) = *(_OWORD *)a3;
    return 0;
  }
  return v7;
}
