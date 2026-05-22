/*
 * XREFs of ?CreateVisualReferenceController@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@PEAPEAUIDCompositionVisualReferenceControllerPartner@@@Z @ 0x18015E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInteropVisual@234@PEAPEAVInteropVisualReferenceController@234@@Z @ 0x18015D0F0 (-CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInter.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateVisualReferenceController(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IUnknown *a2,
        struct IDCompositionVisualReferenceControllerPartner **a3)
{
  struct Microsoft::WRL2::ContextSession *v3; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // r14
  int v10; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // rax
  __int64 v12; // rdx
  struct Microsoft::WRL2::ContextRuntimeClass *v14; // [rsp+40h] [rbp+20h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v15; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v15 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
      (volatile signed __int32 **)&v15,
      v6);
    v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v3,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::InteropVisual::s_InterfaceType,
           &v14);
    v9 = v14;
    v7 = v8;
    v15 = v14;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x621u);
    }
    else
    {
      v14 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
      v10 = Windows::UI::Composition::InteropCompositor::CreateInteropVisualReferenceController(v3, v9, &v14);
      v7 = v10;
      if ( v10 < 0 )
      {
        DoStackCaptureDirect(v10, 0x624u);
      }
      else
      {
        v11 = v14;
        v14 = 0LL;
        *a3 = (struct IDCompositionVisualReferenceControllerPartner *)(((unsigned __int64)v11 + 176) & -(__int64)(v11 != 0LL));
        v7 = 0;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
      (volatile signed __int32 **)&v15,
      v12);
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v7;
}
