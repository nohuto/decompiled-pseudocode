/*
 * XREFs of ?AddVisual@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@H0@Z @ 0x180060A10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::Api::AddVisual(
        Windows::UI::Composition::InteropVisual::Api *this,
        struct IUnknown *a2,
        int a3,
        struct IUnknown *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  Windows::UI::Composition::Visual *v5; // r15
  int v10; // eax
  struct Windows::UI::Composition::Visual *v11; // rsi
  unsigned int v12; // ebx
  int inserted; // eax
  unsigned int v15; // edx
  unsigned int v16; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v17[2]; // [rsp+20h] [rbp-10h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v18; // [rsp+60h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  v5 = (Windows::UI::Composition::InteropVisual::Api *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 264) & 2) == 0 )
  {
    v12 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 24) )
  {
    v12 = -2147024891;
    v15 = 258;
LABEL_14:
    DoStackCaptureDirect(v12, v15);
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v12 = -2147024809;
    v15 = 260;
    goto LABEL_14;
  }
  v18 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v18);
  v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          (struct Microsoft::WRL2::ContextSession *)v4,
          a2,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
          &v18);
  v11 = v18;
  v12 = v10;
  if ( v10 < 0 )
  {
    DoStackCaptureDirect(v10, 0x10Au);
    goto LABEL_9;
  }
  v17[0] = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(v17);
  inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
               (struct Microsoft::WRL2::ContextSession *)v4,
               a4,
               (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
               v17);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v16 = 272;
    goto LABEL_17;
  }
  inserted = Windows::UI::Composition::Visual::InsertChild(v5, v11, a3 != 0, v17[0]);
  v12 = inserted;
  if ( inserted < 0 )
  {
    v16 = 274;
LABEL_17:
    DoStackCaptureDirect(inserted, v16);
    goto LABEL_8;
  }
  v12 = 0;
LABEL_8:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(v17);
LABEL_9:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v18);
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v12;
}
