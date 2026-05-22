/*
 * XREFs of ?put_NaturalMotion@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIScalarNaturalMotionAnimation@456@@Z @ 0x18013E530
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??4?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionAnimation@Composition@UI@Windows@@@Z @ 0x1800B7560 (--4-$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompo.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion::Api::put_NaturalMotion(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v5; // ebx
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 136) & 2) != 0 )
  {
    if ( a2 )
    {
      v10 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
      v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             (struct Microsoft::WRL2::ContextSession *)v2,
             a2,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::ScalarNaturalMotionAnimation::s_InterfaceType,
             &v10);
      v7 = v10;
      v5 = v6;
      if ( v6 < 0 )
      {
        DoStackCaptureDirect(v6, 0x62u);
      }
      else
      {
        if ( *((Microsoft::WRL2::NestableRuntimeClass **)this + 2) != v10 )
        {
          if ( v10 )
            Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v10);
          v8 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 2);
          *((_QWORD *)this + 2) = v7;
          if ( v8 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
        }
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>::operator=(
          (Microsoft::WRL2::NestableRuntimeClass **)this - 1,
          *((Microsoft::WRL2::NestableRuntimeClass **)this + 2));
        v5 = 0;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x5Fu);
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
