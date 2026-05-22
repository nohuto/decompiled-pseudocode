/*
 * XREFs of ?get_Size@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAUSize@Foundation@5@@Z @ 0x180196360
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::get_Size(
        Windows::UI::Composition::CompositionVirtualDrawingSurface::Api *this,
        struct Windows::Foundation::Size *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  *(_QWORD *)a2 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 23);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 176) & 2) != 0 )
  {
    *(float *)a2 = (float)*((int *)this - 8);
    *((float *)a2 + 1) = (float)*((int *)this - 7);
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
