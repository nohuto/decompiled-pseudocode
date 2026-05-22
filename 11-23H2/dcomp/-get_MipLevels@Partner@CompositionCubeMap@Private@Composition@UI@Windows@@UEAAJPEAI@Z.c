/*
 * XREFs of ?get_MipLevels@Partner@CompositionCubeMap@Private@Composition@UI@Windows@@UEAAJPEAI@Z @ 0x18017F420
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionCubeMap::Partner::get_MipLevels(
        Windows::UI::Composition::Private::CompositionCubeMap::Partner *this,
        unsigned int *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v3 = 0;
  *a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 112) & 2) != 0 )
  {
    *a2 = *((_DWORD *)this + 11);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
