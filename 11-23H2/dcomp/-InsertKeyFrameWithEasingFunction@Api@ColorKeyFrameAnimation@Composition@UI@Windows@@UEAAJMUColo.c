/*
 * XREFs of ?InsertKeyFrameWithEasingFunction@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUColor@45@PEAUICompositionEasingFunction@345@@Z @ 0x18004BAF0
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
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ColorKeyFrameAnimation::Api::InsertKeyFrameWithEasingFunction(
        __int64 a1,
        float a2,
        int a3,
        struct IUnknown *a4)
{
  __int64 v4; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // r14
  unsigned __int8 v7; // bl
  int v8; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // rdi
  unsigned int v10; // esi
  int inserted; // eax
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // edx
  int v18; // ecx
  int v19[2]; // [rsp+20h] [rbp-68h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v20; // [rsp+28h] [rbp-60h] BYREF
  __int128 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  __int128 v23; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a1 - 496;
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 496 + 24);
  v7 = a3;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v6,
           a4,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEasingFunction::s_InterfaceType,
           &v20);
    v9 = v20;
    v10 = v8;
    *(_QWORD *)v19 = v20;
    if ( v8 < 0 )
    {
      v17 = 141;
      v18 = v8;
      goto LABEL_18;
    }
    *((float *)&v21 + 3) = (float)v7 / 255.0;
    *(float *)&v21 = (float)BYTE1(a3) / 255.0;
    *((float *)&v21 + 1) = (float)BYTE2(a3) / 255.0;
    *((float *)&v21 + 2) = (float)HIBYTE(a3) / 255.0;
    if ( a2 < 0.0 || a2 > 1.0 )
    {
      Windows::UI::Composition::OriginateInvalidArgument(16LL, L"normalizedProgressKey");
      v14 = 1219LL;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 416) == 70 )
      {
        v22 = 1LL;
        v23 = v21;
        inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
                     (Windows::UI::Composition::KeyFrameAnimation *)v4,
                     a2,
                     (struct KeyframeValueDefinition *)&v22,
                     v20);
        v10 = inserted;
        if ( inserted >= 0 )
        {
          v10 = 0;
          if ( v9 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v12) = 1;
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v20 + 64LL))(
                v20,
                v12);
            }
          }
          goto LABEL_10;
        }
        v15 = (unsigned int)inserted;
        v16 = 942LL;
        goto LABEL_16;
      }
      Windows::UI::Composition::OriginateInvalidArgument(13LL, L"value");
      v14 = 1224LL;
    }
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)0x80070057LL);
    v15 = 2147942487LL;
    v16 = 935LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)v15);
    v17 = 146;
    v18 = v10;
LABEL_18:
    DoStackCaptureDirect(v18, v17);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(v19);
LABEL_10:
    Microsoft::WRL2::ContextSession::EndApiEntry(v6);
    return v10;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return 2147483667LL;
}
