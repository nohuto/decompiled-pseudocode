/*
 * XREFs of ?AddVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@H0@Z @ 0x180198910
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCursorVisual::Api::AddVisual(
        Windows::UI::Composition::InteropCursorVisual::Api *this,
        struct IUnknown *a2,
        int a3,
        struct IUnknown *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  Windows::UI::Composition::Visual *v5; // r15
  unsigned int v10; // ebx
  int v11; // eax
  struct Windows::UI::Composition::Visual *v12; // rsi
  int inserted; // eax
  unsigned int v14; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v16[2]; // [rsp+20h] [rbp-10h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // [rsp+60h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  v5 = (Windows::UI::Composition::InteropCursorVisual::Api *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    if ( !a2 )
    {
      v10 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xE3u);
      goto LABEL_15;
    }
    v17 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
    v11 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v4,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropCursorVisual::s_InterfaceType,
            &v17);
    v12 = v17;
    v10 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0xE9u);
      goto LABEL_14;
    }
    v16[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v16);
    inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                 (struct Microsoft::WRL2::ContextSession *)v4,
                 a4,
                 (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropCursorVisual::s_InterfaceType,
                 v16);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v14 = 239;
    }
    else
    {
      inserted = Windows::UI::Composition::Visual::InsertChild(
                   v5,
                   v12,
                   a3 != 0,
                   (Windows::UI::Composition::Visual **)v16[0]);
      v10 = inserted;
      if ( inserted >= 0 )
      {
        v10 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v16);
LABEL_14:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
        goto LABEL_15;
      }
      v14 = 241;
    }
    DoStackCaptureDirect(inserted, v14);
    goto LABEL_9;
  }
  v10 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_15:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v10;
}
