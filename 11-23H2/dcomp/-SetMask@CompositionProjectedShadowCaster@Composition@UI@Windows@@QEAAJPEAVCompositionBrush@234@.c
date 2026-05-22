/*
 * XREFs of ?SetMask@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18000D52C
 * Callers:
 *     ?Destroy@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAXXZ @ 0x18000D4E0 (-Destroy@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180184190 (-put_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBrush@Composition@UI@Windows@@@Z @ 0x18002B180 (--4-$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::SetMask(
        Windows::UI::Composition::CompositionProjectedShadowCaster *this,
        struct IUnknown *a2)
{
  char *v4; // rbp
  Microsoft::WRL2::NestableRuntimeClass *v6; // rdi
  int v7; // eax
  unsigned int lpVtbl; // r9d
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 200) )
  {
    v4 = (char *)this + 176;
    if ( a2 == *((struct IUnknown **)this + 22) )
      return 0LL;
    v6 = 0LL;
    if ( !a2 )
      goto LABEL_12;
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           *((struct Microsoft::WRL2::ContextSession **)this + 3),
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBackdropBrushT<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
           &v11);
    v6 = v11;
    if ( v7 >= 0 )
    {
      Windows::UI::Composition::OriginateInvalidArgument(0LL, L"value");
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowcaster.cpp",
        (const char *)0x80070057LL);
      if ( v6 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
      return 2147942487LL;
    }
    if ( a2 )
      lpVtbl = (unsigned int)a2[16].lpVtbl;
    else
LABEL_12:
      lpVtbl = 0;
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1u,
      lpVtbl);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::operator=(v4, a2);
    if ( v6 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0xA9,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowcaster.cpp",
    (const char *)0x80070057LL,
    (int)"This type of caster cannot write to the mask property.",
    v9);
  return 2147942487LL;
}
