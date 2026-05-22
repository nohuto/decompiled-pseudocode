/*
 * XREFs of ?SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z @ 0x180086560
 * Callers:
 *     ?Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180086530 (-Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_Effect@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAUICompositionEffectBrush@345@@Z @ 0x180093D60 (-put_Effect@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAUICompositionEffectBrush@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z @ 0x1800937F0 (-UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z.c)
 *     ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ @ 0x18009466C (-ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ?Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z @ 0x18014997C (-Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::LayerVisual::SetEffect(
        Windows::UI::Composition::LayerVisual *this,
        struct Windows::UI::Composition::CompositionEffectBrush *a2)
{
  int v5; // r9d
  Windows::UI::Composition::CompositionEffectBrush *v6; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  Windows::UI::Composition::CompositionEffectBrush *v8; // rcx
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *((struct Windows::UI::Composition::CompositionEffectBrush **)this + 44) )
    return 0LL;
  if ( !a2 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  if ( !Windows::UI::Composition::CompositionEffectBrush::ContainsBackdropInput(a2) )
  {
    v5 = *((_DWORD *)a2 + 32);
LABEL_6:
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      52,
      v5);
    v6 = (Windows::UI::Composition::CompositionEffectBrush *)*((_QWORD *)this + 44);
    if ( v6 )
      Windows::UI::Composition::CompositionEffectBrush::UpdateTreeEffectCounter(v6, -1);
    if ( *((struct Windows::UI::Composition::CompositionEffectBrush **)this + 44) != a2 )
    {
      if ( a2 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
      v7 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 44);
      *((_QWORD *)this + 44) = a2;
      if ( v7 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
    }
    v8 = (Windows::UI::Composition::CompositionEffectBrush *)*((_QWORD *)this + 44);
    if ( v8 )
      Windows::UI::Composition::CompositionEffectBrush::UpdateTreeEffectCounter(v8, 1);
    return 0LL;
  }
  v9 = Windows::UI::Composition::ApiErrorMessageTable::Lookup(8LL);
  RoOriginateErrorW(2147942487LL, 0LL, v9);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtlayervisual.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
