/*
 * XREFs of ?RemovePointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJXZ @ 0x18010B670
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ @ 0x18010B6D8 (-RemovePointerEventRouter@Visual@Composition@UI@Windows@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::RemovePointerEventRouter(
        Windows::UI::Composition::Visual::Partner *this)
{
  Windows::UI::Composition::Visual *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi

  v1 = (Windows::UI::Composition::Visual::Partner *)((char *)this - 216);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Visual::RemovePointerEventRouter(v1);
    v3 = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
