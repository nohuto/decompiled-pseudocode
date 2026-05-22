/*
 * XREFs of ?put_Completed@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x1801553D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?put_Completed@VisualCapture@Composition@UI@Windows@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@4@@Z @ 0x18015545C (-put_Completed@VisualCapture@Composition@UI@Windows@@QEAAJPEAU-$IAsyncOperationCompletedHandler@.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCapture::AsyncOperation::put_Completed(__int64 a1)
{
  Microsoft::WRL2::NestableRuntimeClass *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  int v4; // eax

  v1 = (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 136);
  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    v4 = Windows::UI::Composition::VisualCapture::put_Completed(v1);
    v3 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x13Du);
    else
      v3 = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
