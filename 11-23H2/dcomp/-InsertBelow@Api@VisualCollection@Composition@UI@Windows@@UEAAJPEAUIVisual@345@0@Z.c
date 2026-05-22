/*
 * XREFs of ?InsertBelow@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z @ 0x1801965F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180072FD0 (-EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCollection::Api::InsertBelow(
        Windows::UI::Composition::VisualCollection::Api *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  Windows::UI::Composition::Visual **v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v7; // ebx
  int v8; // ecx
  unsigned int v9; // edx
  int valid; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  struct Windows::UI::Composition::Visual *v14; // r14
  int inserted; // eax
  __int64 v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v20; // [rsp+50h] [rbp+30h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v21; // [rsp+68h] [rbp+48h] BYREF

  v3 = (Windows::UI::Composition::Visual **)((char *)this - 136);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( ((_BYTE)v3[4] & 2) != 0 )
  {
    if ( !a2 )
    {
      v8 = -2147024809;
      v9 = 188;
      v7 = -2147024809;
LABEL_19:
      DoStackCaptureDirect(v8, v9);
      goto LABEL_20;
    }
    if ( !a3 )
    {
      v8 = -2147024809;
      v9 = 189;
      v7 = -2147024809;
      goto LABEL_19;
    }
    valid = Windows::UI::Composition::VisualCollection::EnsureValidState((Windows::UI::Composition::VisualCollection *)v3);
    v7 = valid;
    if ( valid < 0 )
    {
      v9 = 191;
      v8 = valid;
      goto LABEL_19;
    }
    v20 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v20,
      v11);
    v12 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v5,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
            &v20);
    v14 = v20;
    v7 = v12;
    if ( v12 < 0 )
    {
      DoStackCaptureDirect(v12, 0xC2u);
      goto LABEL_17;
    }
    v21 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v21,
      v13);
    inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                 (struct Microsoft::WRL2::ContextSession *)v5,
                 a3,
                 (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
                 &v21);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v17 = 197;
    }
    else
    {
      inserted = Windows::UI::Composition::Visual::InsertChild(v3[19], v14, 0, (Windows::UI::Composition::Visual **)v21);
      v7 = inserted;
      if ( inserted >= 0 )
      {
        v7 = 0;
LABEL_15:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
          (volatile signed __int32 **)&v21,
          v16);
LABEL_17:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
          (volatile signed __int32 **)&v20,
          v18);
        goto LABEL_20;
      }
      v17 = 199;
    }
    DoStackCaptureDirect(inserted, v17);
    goto LABEL_15;
  }
  v7 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_20:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
