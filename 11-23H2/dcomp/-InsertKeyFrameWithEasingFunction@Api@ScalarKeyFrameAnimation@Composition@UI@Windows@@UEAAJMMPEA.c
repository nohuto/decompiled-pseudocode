/*
 * XREFs of ?InsertKeyFrameWithEasingFunction@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMMPEAUICompositionEasingFunction@345@@Z @ 0x18004BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ScalarKeyFrameAnimation::Api::InsertKeyFrameWithEasingFunction(
        Windows::UI::Composition::ScalarKeyFrameAnimation::Api *this,
        float a2,
        float a3,
        struct IUnknown *a4)
{
  Windows::UI::Composition::KeyFrameAnimation *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  int v7; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rbx
  unsigned int v9; // edi
  int inserted; // eax
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v20; // [rsp+80h] [rbp+8h] BYREF

  v4 = (Windows::UI::Composition::ScalarKeyFrameAnimation::Api *)((char *)this - 496);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 59);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v5,
           a4,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEasingFunction::s_InterfaceType,
           &v16);
    v8 = v16;
    v9 = v7;
    v20 = v16;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA550, 2u, v7, 0x66u, 0LL);
      goto LABEL_18;
    }
    if ( a2 < 0.0 || a2 > 1.0 )
    {
      Windows::UI::Composition::OriginateInvalidArgument(16LL, L"normalizedProgressKey");
      v13 = 1219LL;
    }
    else
    {
      if ( *((_DWORD *)v4 + 104) == 18 )
      {
        v17 = 0LL;
        *((float *)&v17 + 2) = a3;
        LODWORD(v17) = 1;
        v18 = 0LL;
        inserted = Windows::UI::Composition::KeyFrameAnimation::InsertKeyFrameHelper(
                     v4,
                     a2,
                     (struct KeyframeValueDefinition *)&v17,
                     v16);
        v9 = inserted;
        if ( inserted >= 0 )
        {
          v9 = 0;
          if ( v8 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 0xFFFFFFFF) == 1 )
            {
              LOBYTE(v11) = 1;
              (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v16 + 64LL))(
                v16,
                v11);
            }
          }
          goto LABEL_10;
        }
        v14 = (unsigned int)inserted;
        v15 = 804LL;
        goto LABEL_16;
      }
      Windows::UI::Composition::OriginateInvalidArgument(13LL, L"value");
      v13 = 1224LL;
    }
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)0x80070057LL);
    v14 = 2147942487LL;
    v15 = 797LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimation.cpp",
      (const char *)v14);
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA550, 2u, v9, 0x68u, 0LL);
LABEL_18:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v20);
LABEL_10:
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    return v9;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return 2147483667LL;
}
