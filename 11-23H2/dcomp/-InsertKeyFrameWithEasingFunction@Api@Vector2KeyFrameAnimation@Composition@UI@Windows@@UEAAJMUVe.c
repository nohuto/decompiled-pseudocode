/*
 * XREFs of ?InsertKeyFrameWithEasingFunction@Api@Vector2KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector2@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z @ 0x18004BC90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector2KeyFrameAnimation::Api::InsertKeyFrameWithEasingFunction(
        __int64 a1,
        float a2,
        __int64 a3,
        struct IUnknown *a4)
{
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  int v7; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rdi
  unsigned int v9; // ebx
  int inserted; // eax
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // edx
  int v17; // ecx
  struct Microsoft::WRL2::ContextRuntimeClass *v19; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Microsoft::WRL2::ContextRuntimeClass *v24; // [rsp+80h] [rbp+20h] BYREF

  v4 = a1 - 496;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v4 + 32) & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_10;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v5,
         a4,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEasingFunction::s_InterfaceType,
         &v19);
  v8 = v19;
  v9 = v7;
  v24 = v19;
  if ( v7 < 0 )
  {
    v16 = 94;
    v17 = v7;
    goto LABEL_18;
  }
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(16LL, L"normalizedProgressKey");
    v13 = 1219LL;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v4 + 416) != 35 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(13LL, L"value");
    v13 = 1224LL;
LABEL_15:
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)0x80070057LL);
    v14 = 2147942487LL;
    v15 = 830LL;
    goto LABEL_16;
  }
  v20[1] = 0;
  v22 = 0LL;
  v21 = a3;
  v20[0] = 1;
  inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
               (Windows::UI::Composition::KeyFrameAnimation *)v4,
               a2,
               (struct KeyframeValueDefinition *)v20,
               v19);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v14 = (unsigned int)inserted;
    v15 = 838LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)v14);
    v16 = 96;
    v17 = v9;
LABEL_18:
    DoStackCaptureDirect(v17, v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v24);
    goto LABEL_10;
  }
  v9 = 0;
  if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v11) = 1;
    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v19 + 64LL))(v19, v11);
  }
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
