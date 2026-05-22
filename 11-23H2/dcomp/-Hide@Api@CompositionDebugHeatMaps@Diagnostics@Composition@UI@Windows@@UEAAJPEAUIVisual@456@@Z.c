/*
 * XREFs of ?Hide@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18018AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ValidateAndHide@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAUIVisual@345@AEAV?$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18018B168 (-ValidateAndHide@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAUIVisual@3.c)
 */

__int64 __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::Api::Hide(
        Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::Api *this,
        struct Windows::UI::Composition::IVisual *a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 40;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v8 = 0LL;
    v6 = Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::ValidateAndHide(v2, a2, &v8);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x5Du);
    else
      v5 = 0;
    if ( v8 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
