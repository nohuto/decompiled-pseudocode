/*
 * XREFs of ?CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingSurface@234@PEAPEAUIDXGISurface@@@Z @ 0x180100D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ??4?$RefPtr@VContextSession@WRL2@Microsoft@@@WRL2@Microsoft@@QEAAAEAV012@PEAVContextSession@12@@Z @ 0x180100B70 (--4-$RefPtr@VContextSession@WRL2@Microsoft@@@WRL2@Microsoft@@QEAAAEAV012@PEAVContextSession@12@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDiagnosticsInterop::CopySurface(
        Windows::UI::Composition::CompositionDiagnosticsInterop *this,
        struct IUnknown *a2,
        struct IDXGISurface **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v6; // edi
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  struct Microsoft::WRL2::NestableRuntimeClass *v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  struct Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+48h] [rbp+10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v6 = -2147467261;
    v7 = 206;
    v8 = -2147467261;
LABEL_16:
    DoStackCaptureDirect(v8, v7);
    goto LABEL_17;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v16);
  v9 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType,
         &v16);
  v10 = v16;
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = 211;
    v8 = v9;
    goto LABEL_16;
  }
  Microsoft::WRL2::RefPtr<Microsoft::WRL2::ContextSession>::operator=(
    &v17,
    *((Microsoft::WRL2::NestableRuntimeClass **)v16 + 3));
  v3 = (struct _RTL_CRITICAL_SECTION *)v17;
  if ( !v17 || (*((_BYTE *)v17 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_13;
  }
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v17);
  v11 = *((_QWORD *)v10 + 23);
  if ( v11 )
  {
    v14 = DirectComposition::CCompositionSurface::CopySurface(
            (DirectComposition::CCompositionSurface *)(v11 + 8),
            0LL,
            a3);
    v6 = v14;
    if ( v14 >= 0 )
    {
      v6 = 0;
      goto LABEL_13;
    }
    v12 = 230;
    v13 = v14;
  }
  else
  {
    v6 = -2147467259;
    v12 = 228;
    v13 = -2147467259;
  }
  DoStackCaptureDirect(v13, v12);
LABEL_13:
  if ( !v3 )
    goto LABEL_19;
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
LABEL_17:
  if ( v3 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v3);
LABEL_19:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v16);
  return v6;
}
