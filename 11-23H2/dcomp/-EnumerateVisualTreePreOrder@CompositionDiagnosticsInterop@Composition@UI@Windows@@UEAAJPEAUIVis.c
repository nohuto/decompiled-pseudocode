/*
 * XREFs of ?EnumerateVisualTreePreOrder@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVisual@234@0PEAUIVisualTreeEnumerationDiagnostics@234@@Z @ 0x180100ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??4?$RefPtr@VContextSession@WRL2@Microsoft@@@WRL2@Microsoft@@QEAAAEAV012@PEAVContextSession@12@@Z @ 0x180100B70 (--4-$RefPtr@VContextSession@WRL2@Microsoft@@@WRL2@Microsoft@@QEAAAEAV012@PEAVContextSession@12@@.c)
 *     Windows::UI::Composition::EnumerateVisualTreePreOrderImpl @ 0x180101040 (Windows--UI--Composition--EnumerateVisualTreePreOrderImpl.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDiagnosticsInterop::EnumerateVisualTreePreOrder(
        Windows::UI::Composition::CompositionDiagnosticsInterop *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct Windows::UI::Composition::IVisualTreeEnumerationDiagnostics *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  struct Microsoft::WRL2::NestableRuntimeClass *v10; // r14
  unsigned int v11; // edi
  struct Microsoft::WRL2::NestableRuntimeClass *v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edx
  __int64 v16; // rdx
  struct Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+28h] [rbp-8h] BYREF
  struct Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 && a4 )
  {
    v18 = 0LL;
    v20 = 0LL;
    v7 = 0LL;
    v19 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
      (volatile signed __int32 **)&v18,
      (__int64)a2);
    v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
           &v18);
    v10 = v18;
    v11 = v8;
    if ( v8 < 0 )
    {
      v15 = 285;
    }
    else
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
        (volatile signed __int32 **)&v20,
        v9);
      v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
             a3,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Visual::s_InterfaceType,
             &v20);
      v12 = v20;
      v11 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL2::RefPtr<Microsoft::WRL2::ContextSession>::operator=(
          &v19,
          *((Microsoft::WRL2::NestableRuntimeClass **)v10 + 3));
        v7 = (struct _RTL_CRITICAL_SECTION *)v19;
        if ( v19 && (*((_BYTE *)v19 + 32) & 2) != 0 )
        {
          Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v19);
          v13 = Windows::UI::Composition::EnumerateVisualTreePreOrderImpl(v10, v12, a4);
          v11 = v13;
          if ( v13 < 0 )
            DoStackCaptureDirect(v13, 0x12Bu);
          else
            v11 = 0;
        }
        else
        {
          v11 = -2147483629;
          RoOriginateErrorW(
            2147483667LL,
            0LL,
            L"The given object has already been closed / disposed and may no longer be used.");
        }
        if ( !v7 )
          goto LABEL_18;
        Microsoft::WRL2::ContextSession::EndApiEntry(v7);
LABEL_16:
        if ( v7 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v7);
LABEL_18:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
          (volatile signed __int32 **)&v20,
          v14);
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
          (volatile signed __int32 **)&v18,
          v16);
        return v11;
      }
      v15 = 286;
    }
    DoStackCaptureDirect(v8, v15);
    goto LABEL_16;
  }
  return 2147942487LL;
}
