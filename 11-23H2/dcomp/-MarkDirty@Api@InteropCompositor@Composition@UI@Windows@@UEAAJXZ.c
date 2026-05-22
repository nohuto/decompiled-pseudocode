/*
 * XREFs of ?MarkDirty@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x18015F150
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::MarkDirty(
        Windows::UI::Composition::InteropCompositor::Api *this)
{
  Windows::UI::Composition::CompositorCommon *v1; // rbx
  __int64 v2; // rdx
  unsigned int v3; // edi
  char v4; // al

  v1 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1248);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1248));
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    v4 = *((_BYTE *)v1 + 452);
    v3 = 0;
    if ( (v4 & 1) == 0 )
    {
      *((_BYTE *)v1 + 452) = v4 | 1;
      if ( !*((_DWORD *)v1 + 112) )
        Windows::UI::Composition::CompositorCommon::EnableMessageGroup(v1, v2);
    }
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v1);
  return v3;
}
