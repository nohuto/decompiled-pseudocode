/*
 * XREFs of ?get_IdleMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJPEAW4HolographicDisplayIdleMode@3456@@Z @ 0x18011AB70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplay::Api::get_IdleMode(
        Windows::UI::Composition::Internal::HolographicCompositionDisplay::Api *this,
        enum Windows::UI::Composition::Internal::HolographicDisplayIdleMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 4);
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
