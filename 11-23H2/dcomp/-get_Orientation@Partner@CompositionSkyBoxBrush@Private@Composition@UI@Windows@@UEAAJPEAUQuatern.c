/*
 * XREFs of ?get_Orientation@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJPEAUQuaternion@Numerics@Foundation@6@@Z @ 0x180181700
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::get_Orientation(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner *this,
        struct Windows::Foundation::Numerics::Quaternion *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi

  *(_OWORD *)a2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(*((_QWORD *)this + 6) + 200LL);
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
