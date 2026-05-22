/*
 * XREFs of ?put_Brush@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z @ 0x1801840B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetBrush@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18000D584 (-SetBrush@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::Api::put_Brush(
        Windows::UI::Composition::CompositionProjectedShadowCaster::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::CompositionProjectedShadowCaster *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionProjectedShadowCaster::Api *)((char *)this - 136);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v11 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
      (volatile signed __int32 **)&v11,
      v5);
    v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::s_InterfaceType,
           &v11);
    v6 = v7;
    if ( v7 < 0 )
    {
      v9 = 304;
    }
    else
    {
      v7 = Windows::UI::Composition::CompositionProjectedShadowCaster::SetBrush(v2, (struct IUnknown *)v11);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v6 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(
          (volatile signed __int32 **)&v11,
          v8);
        goto LABEL_10;
      }
      v9 = 306;
    }
    DoStackCaptureDirect(v7, v9);
    goto LABEL_9;
  }
  v6 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
