/*
 * XREFs of ?get_DepthMode@Partner@Visual@Composition@UI@Windows@@UEAAJPEAW4CompositionDepthMode@Private@345@@Z @ 0x18010CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::get_DepthMode(
        Windows::UI::Composition::Visual::Partner *this,
        enum Windows::UI::Composition::Private::CompositionDepthMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi

  *(_DWORD *)a2 = 2;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 200) & 2) != 0 )
  {
    *(_DWORD *)a2 = (int)(*((_DWORD *)this + 7) << 20) >> 29;
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
