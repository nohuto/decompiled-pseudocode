/*
 * XREFs of ?SetOwnerNoRef@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisualOwnerPrivate@Private@345@E@Z @ 0x18010BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z @ 0x180086B60 (-SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::SetOwnerNoRef(
        Windows::UI::Composition::Visual::Partner *this,
        struct Windows::UI::Composition::Private::IVisualOwnerPrivate *a2,
        char a3)
{
  Windows::UI::Composition::Visual *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi

  v3 = (Windows::UI::Composition::Visual::Partner *)((char *)this - 232);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v7 = 0;
    Windows::UI::Composition::Visual::SetOwnerNoRef(v3, a2, a3 != 0);
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
