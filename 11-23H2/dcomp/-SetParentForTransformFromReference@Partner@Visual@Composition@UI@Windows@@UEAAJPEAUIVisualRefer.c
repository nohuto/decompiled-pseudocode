/*
 * XREFs of ?SetParentForTransformFromReference@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisualReference@Internal@345@@Z @ 0x18010BE60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?SetParentForTransformFromReference@Visual@Composition@UI@Windows@@QEAAJPEAVVisualReference@Internal@234@@Z @ 0x18010BF30 (-SetParentForTransformFromReference@Visual@Composition@UI@Windows@@QEAAJPEAVVisualReference@Inte.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::SetParentForTransformFromReference(
        Windows::UI::Composition::Visual::Partner *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::Visual *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Visual::Partner *)((char *)this - 224);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 25);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Internal::VisualReference::s_InterfaceType,
           &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 3060;
    }
    else
    {
      v6 = Windows::UI::Composition::Visual::SetParentForTransformFromReference(v2, v9);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
        goto LABEL_10;
      }
      v7 = 3062;
    }
    DoStackCaptureDirect(v6, v7);
    goto LABEL_9;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
