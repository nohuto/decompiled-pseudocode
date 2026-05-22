/*
 * XREFs of ?put_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSurfaceBrush@456@@Z @ 0x180185870
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?GetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAPEAUICompositionSurface@234@XZ @ 0x18015971C (-GetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAPEAUICompositionSurface@234@XZ.c)
 *     ?SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCompositionSurfaceBrush@345@PEAVCompositionSwapChain@345@@Z @ 0x1801A1934 (-SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCo.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api::put_ReferenceSwapChain(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api *this,
        struct IUnknown *a2)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  struct Windows::UI::Composition::CompositionSurfaceBrush *v6; // rbp
  Microsoft::WRL2::NestableRuntimeClass *v7; // rdi
  int v8; // eax
  struct IUnknown *Surface; // rax
  int v10; // eax
  Windows::UI::Composition::CompositionSurfaceBrush *v12; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char *)this - 168;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    if ( *((_QWORD *)v2 + 19) )
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xFAu);
      goto LABEL_12;
    }
    v6 = 0LL;
    v7 = 0LL;
    if ( a2 )
    {
      v12 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
      v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             *((struct Microsoft::WRL2::ContextSession **)v2 + 3),
             a2,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
             &v12);
      v6 = v12;
      v5 = v8;
      if ( v8 < 0 )
      {
        DoStackCaptureDirect(v8, 0x106u);
      }
      else
      {
        Surface = (struct IUnknown *)Windows::UI::Composition::CompositionSurfaceBrush::GetSurface(v12);
        v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *((struct Microsoft::WRL2::ContextSession **)v2 + 3),
                Surface,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSwapChain::s_InterfaceType,
                &v13);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v7 = v13;
          if ( v13 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v13);
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
          goto LABEL_11;
        }
        DoStackCaptureDirect(v10, 0x10Cu);
        if ( v13 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v13);
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
      goto LABEL_12;
    }
LABEL_11:
    Windows::UI::Composition::Internal::CompositionSuperWetInkSource::SetReferenceSwapChain(
      (Windows::UI::Composition::Internal::CompositionSuperWetInkSource *)v2,
      v6,
      v7);
    v5 = 0;
    goto LABEL_12;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_12:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
