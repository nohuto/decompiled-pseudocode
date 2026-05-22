/*
 * XREFs of ?SetMask@DropShadow@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x180182FE8
 * Callers:
 *     ?Destroy@DropShadow@Composition@UI@Windows@@UEAAXXZ @ 0x180182D90 (-Destroy@DropShadow@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x180183490 (-put_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBrush@Composition@UI@Windows@@@Z @ 0x18002B180 (--4-$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::DropShadow::SetMask(
        Windows::UI::Composition::DropShadow *this,
        struct IUnknown *a2)
{
  volatile signed __int32 **v2; // rbp
  Microsoft::WRL2::NestableRuntimeClass *v5; // rdi
  int v6; // eax
  int lpVtbl; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 **)((char *)this + 200);
  if ( a2 == *((struct IUnknown **)this + 25) )
    return 0LL;
  v5 = 0LL;
  if ( !a2 )
    goto LABEL_9;
  v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         *((struct Microsoft::WRL2::ContextSession **)this + 3),
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBackdropBrushT<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
         &v10);
  v5 = v10;
  if ( v6 < 0 )
  {
    if ( a2 )
    {
      lpVtbl = (int)a2[16].lpVtbl;
      goto LABEL_10;
    }
LABEL_9:
    lpVtbl = 0;
LABEL_10:
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      2,
      lpVtbl);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::operator=(
      v2,
      (Microsoft::WRL2::NestableRuntimeClass *)a2);
    if ( v5 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
    return 0LL;
  }
  Windows::UI::Composition::OriginateInvalidArgument(0, (__int64)L"value");
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA0,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdropshadow.cpp",
    (const char *)0x80070057LL);
  if ( v5 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  return 2147942487LL;
}
