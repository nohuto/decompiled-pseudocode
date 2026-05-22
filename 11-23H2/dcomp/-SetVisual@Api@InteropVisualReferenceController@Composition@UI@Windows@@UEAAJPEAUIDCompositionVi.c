/*
 * XREFs of ?SetVisual@Api@InteropVisualReferenceController@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x18019A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z @ 0x18016F4C0 (-SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisualReferenceController::Api::SetVisual(
        Windows::UI::Composition::InteropVisualReferenceController::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  Windows::UI::Composition::Private::VisualReferenceController *v3; // rsi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 19);
  v3 = (Windows::UI::Composition::InteropVisualReferenceController::Api *)((char *)this - 176);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 144) & 2) != 0 )
  {
    v12 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
      (volatile signed __int32 **)&v12,
      v6);
    v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v2,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
           &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 57;
    }
    else
    {
      v8 = Windows::UI::Composition::Private::VisualReferenceController::SetVisual(v3, v12);
      v7 = v8;
      if ( v8 >= 0 )
      {
        v7 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
          (volatile signed __int32 **)&v12,
          v9);
        goto LABEL_10;
      }
      v10 = 59;
    }
    DoStackCaptureDirect(v8, v10);
    goto LABEL_9;
  }
  v7 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v7;
}
