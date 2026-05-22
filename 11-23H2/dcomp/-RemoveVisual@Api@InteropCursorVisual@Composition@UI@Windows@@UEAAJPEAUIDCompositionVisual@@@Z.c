/*
 * XREFs of ?RemoveVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180198D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCursorVisual::Api::RemoveVisual(
        Windows::UI::Composition::InteropCursorVisual::Api *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  Windows::UI::Composition::Visual *v3; // rbp
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  v3 = (Windows::UI::Composition::InteropCursorVisual::Api *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    if ( !a2 )
    {
      v6 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0xFCu);
      goto LABEL_12;
    }
    v10 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v2,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropCursorVisual::s_InterfaceType,
           &v10);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 258;
    }
    else
    {
      v7 = Windows::UI::Composition::Visual::RemoveChild(v3, v10);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v6 = 0;
LABEL_11:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
        goto LABEL_12;
      }
      v8 = 260;
    }
    DoStackCaptureDirect(v7, v8);
    goto LABEL_11;
  }
  v6 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_12:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
