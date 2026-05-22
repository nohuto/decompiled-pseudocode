/*
 * XREFs of ?put_NaturalMotion@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIVector2NaturalMotionAnimation@456@@Z @ 0x18013EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionAnimation@Composition@UI@Windows@@@Z @ 0x1800B7560 (--4-$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompo.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion::Api::put_NaturalMotion(
        Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaNaturalMotion::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v5; // edi
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease((Microsoft::WRL2::NestableRuntimeClass **)this + 2);
      v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             (struct Microsoft::WRL2::ContextSession *)v2,
             a2,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Vector2NaturalMotionAnimation::s_InterfaceType,
             &v11);
      v9 = v11;
      v5 = v8;
      *((_QWORD *)this + 2) = v11;
      if ( v8 >= 0 )
      {
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>::operator=(
          (Microsoft::WRL2::NestableRuntimeClass **)this - 1,
          v9);
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 88;
      v7 = v8;
    }
    else
    {
      v5 = -2147024809;
      v6 = 86;
      v7 = -2147024809;
    }
    DoStackCaptureDirect(v7, v6);
    goto LABEL_9;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
