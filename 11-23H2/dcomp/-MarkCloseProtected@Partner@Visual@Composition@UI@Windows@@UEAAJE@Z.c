/*
 * XREFs of ?MarkCloseProtected@Partner@Visual@Composition@UI@Windows@@UEAAJE@Z @ 0x18010B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::MarkCloseProtected(
        Windows::UI::Composition::Visual::Partner *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // r8d
  unsigned int v6; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  v5 = *((_DWORD *)this - 50);
  if ( (v5 & 2) != 0 )
  {
    *((_DWORD *)this - 50) = v5 & 0xFFFFFFBF | (a2 != 0 ? 0x40 : 0);
    v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
