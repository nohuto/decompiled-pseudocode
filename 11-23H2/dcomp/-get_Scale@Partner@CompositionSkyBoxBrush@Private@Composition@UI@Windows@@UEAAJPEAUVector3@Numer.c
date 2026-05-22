/*
 * XREFs of ?get_Scale@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z @ 0x180181950
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::get_Scale(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 6);
    *(_QWORD *)a2 = *(_QWORD *)(v6 + 240);
    *((_DWORD *)a2 + 2) = *(_DWORD *)(v6 + 248);
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
