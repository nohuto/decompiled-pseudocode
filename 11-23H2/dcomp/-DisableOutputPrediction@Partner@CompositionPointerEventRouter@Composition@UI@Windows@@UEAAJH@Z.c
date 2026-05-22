/*
 * XREFs of ?DisableOutputPrediction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x180153710
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z @ 0x180153694 (-DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::DisableOutputPrediction(
        Windows::UI::Composition::CompositionPointerEventRouter::Partner *this,
        int a2)
{
  Windows::UI::Composition::CompositionPointerEventRouter *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = (Windows::UI::Composition::CompositionPointerEventRouter::Partner *)((char *)this - 136);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::CompositionPointerEventRouter::DisableOutputPrediction(v2, a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x3AEu);
    else
      v5 = 0;
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
