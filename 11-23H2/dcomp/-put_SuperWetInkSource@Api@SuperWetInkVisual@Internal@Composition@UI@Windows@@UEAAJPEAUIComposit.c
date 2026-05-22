/*
 * XREFs of ?put_SuperWetInkSource@Api@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSuperWetInkSource@3456@@Z @ 0x180184CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?SetSuperWetInkSource@SuperWetInkVisual@Internal@Composition@UI@Windows@@QEAAXPEAVCompositionSuperWetInkSource@2345@@Z @ 0x180184B74 (-SetSuperWetInkSource@SuperWetInkVisual@Internal@Composition@UI@Windows@@QEAAXPEAVCompositionSup.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SuperWetInkVisual::Api::put_SuperWetInkSource(
        Windows::UI::Composition::Internal::SuperWetInkVisual::Api *this,
        struct IUnknown *a2)
{
  struct Microsoft::WRL2::ContextSession **v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  struct Microsoft::WRL2::ContextRuntimeClass *v6; // rbp
  int v7; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct Microsoft::WRL2::ContextSession **)((char *)this - 312);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 36);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    v6 = 0LL;
    if ( a2 )
    {
      v9 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
      v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             v2[3],
             a2,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Internal::CompositionSuperWetInkSource::s_InterfaceType,
             &v9);
      v6 = v9;
      v5 = v7;
      if ( v7 < 0 )
      {
        DoStackCaptureDirect(v7, 0x58u);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
        goto LABEL_7;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
    }
    Windows::UI::Composition::Internal::SuperWetInkVisual::SetSuperWetInkSource(
      (Windows::UI::Composition::Internal::SuperWetInkVisual *)v2,
      v6);
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_7:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
