/*
 * XREFs of ?AddTipPoints@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJIIPEAE@Z @ 0x180184DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api::AddTipPoints(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *v4; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v9; // edi

  v4 = (Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api *)((char *)this - 168);
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v9 = 0;
    if ( a2 && a3 && a3 >= a2 && !(a3 % a2) )
    {
      Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::AddTipPoints(v4, a2, a3 / a2, a4);
    }
    else
    {
      v9 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x126u);
    }
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v9;
}
