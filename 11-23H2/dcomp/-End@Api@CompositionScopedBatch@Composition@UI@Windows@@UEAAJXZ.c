/*
 * XREFs of ?End@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ @ 0x180078AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x180078B18 (-End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionScopedBatch::Api::End(
        Windows::UI::Composition::CompositionScopedBatch::Api *this)
{
  Windows::UI::Composition::CompositionBatch *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi

  v1 = (Windows::UI::Composition::CompositionScopedBatch::Api *)((char *)this - 200);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 22);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    v3 = Windows::UI::Composition::CompositionBatch::End(v1);
    v4 = v3;
    if ( v3 < 0 )
      DoStackCaptureDirect(v3, 0x6Du);
    else
      v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
