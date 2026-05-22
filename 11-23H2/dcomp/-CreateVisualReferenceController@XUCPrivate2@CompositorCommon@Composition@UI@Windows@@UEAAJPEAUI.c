/*
 * XREFs of ?CreateVisualReferenceController@XUCPrivate2@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualReferenceController@Private@345@@Z @ 0x180127B90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x180127AD8 (-CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::XUCPrivate2::CreateVisualReferenceController(
        Windows::UI::Composition::CompositorCommon::XUCPrivate2 *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::Private::IVisualReferenceController **a3)
{
  struct Microsoft::WRL2::ContextSession *v3; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  struct Windows::UI::Composition::Visual *v9; // rdx
  int v10; // eax
  char *v11; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon::XUCPrivate2 *)((char *)this - 232);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 232));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v14 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v14,
      v6);
    v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v3,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
           &v13);
    v9 = v13;
    v7 = v8;
    v14 = v13;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x182Eu);
    }
    else
    {
      v13 = 0LL;
      v10 = Windows::UI::Composition::CompositorCommon::CreateVisualReferenceController(v3, v9, &v13);
      v7 = v10;
      if ( v10 < 0 )
      {
        DoStackCaptureDirect(v10, 0x1831u);
        if ( v13 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v13);
      }
      else
      {
        v11 = (char *)v13 + 152;
        *a3 = (struct Windows::UI::Composition::Private::IVisualReferenceController *)(((unsigned __int64)v13 + 152) & -(__int64)(v13 != 0LL));
        v7 = 0;
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v14,
      (__int64)v11);
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
