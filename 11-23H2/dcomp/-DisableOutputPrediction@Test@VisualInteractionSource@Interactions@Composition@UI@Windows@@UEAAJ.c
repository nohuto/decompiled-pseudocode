/*
 * XREFs of ?DisableOutputPrediction@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJ_N@Z @ 0x18011D880
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z @ 0x180153694 (-DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Test::DisableOutputPrediction(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Test *this,
        unsigned __int8 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v4; // esi
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 20);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 152) & 2) != 0 )
  {
    Windows::UI::Composition::CompositionPointerEventRouter::DisableOutputPrediction(
      *((Windows::UI::Composition::CompositionPointerEventRouter **)this + 7),
      v4);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
