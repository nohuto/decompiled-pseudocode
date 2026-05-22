/*
 * XREFs of ?SetPropertiesForPresentCount@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJIEIPEAE@Z @ 0x180185330
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api::SetPropertiesForPresentCount(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v10; // edi

  v5 = (Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::Api *)((char *)this - 168);
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)v5 + 32) & 2) != 0 )
  {
    v10 = 0;
    if ( a4 )
    {
      Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::SetPropertiesForPresentCount(
        v5,
        a2,
        a3 != 0,
        a4,
        a5);
    }
    else
    {
      v10 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x13Du);
    }
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v10;
}
