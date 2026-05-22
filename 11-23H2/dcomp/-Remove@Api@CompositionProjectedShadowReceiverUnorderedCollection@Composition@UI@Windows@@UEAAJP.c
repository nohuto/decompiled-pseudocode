/*
 * XREFs of ?Remove@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x1801A1820
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006F60 (-EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?RemoveReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z @ 0x180183910 (-RemoveReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjected.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api::Remove(
        Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::CompositionProjectedShadow **v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  int valid; // eax
  int v9; // eax
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionProjectedShadow **)((char *)this - 136);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    if ( !a2 )
    {
      v5 = -2147024809;
      v6 = 115;
      v7 = -2147024809;
LABEL_14:
      DoStackCaptureDirect(v7, v6);
      goto LABEL_15;
    }
    valid = Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::EnsureValidState((Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection *)v2);
    v5 = valid;
    if ( valid < 0 )
    {
      v6 = 117;
      v7 = valid;
      goto LABEL_14;
    }
    v12 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionProjectedShadowReceiver::s_InterfaceType,
           &v12);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 120;
    }
    else
    {
      v9 = Windows::UI::Composition::CompositionProjectedShadow::RemoveReceiver(v2[19], v12);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v5 = 0;
LABEL_12:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
        goto LABEL_15;
      }
      v10 = 122;
    }
    DoStackCaptureDirect(v9, v10);
    goto LABEL_12;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_15:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
