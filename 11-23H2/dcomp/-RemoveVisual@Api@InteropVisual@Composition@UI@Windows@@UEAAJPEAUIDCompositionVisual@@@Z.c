/*
 * XREFs of ?RemoveVisual@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180014750
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::Api::RemoveVisual(
        Windows::UI::Composition::InteropVisual::Api *this,
        struct IUnknown *a2)
{
  Microsoft::WRL2::ContextSession *v2; // rdi
  Windows::UI::Composition::Visual *v3; // rbp
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // edx
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 34);
  v3 = (Windows::UI::Composition::InteropVisual::Api *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 264) & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 24) )
  {
    v7 = -2147024891;
    v10 = 287;
LABEL_15:
    DoStackCaptureDirect(v7, v10);
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v7 = -2147024809;
    v10 = 289;
    goto LABEL_15;
  }
  v11 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v11);
  v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v2,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 295;
    goto LABEL_10;
  }
  v6 = Windows::UI::Composition::Visual::RemoveChild(v3, v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 297;
LABEL_10:
    DoStackCaptureDirect(v6, v9);
    goto LABEL_7;
  }
  v7 = 0;
LABEL_7:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v11);
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v7;
}
