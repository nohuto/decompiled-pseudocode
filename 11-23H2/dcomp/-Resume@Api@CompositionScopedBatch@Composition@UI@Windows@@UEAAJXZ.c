/*
 * XREFs of ?Resume@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ @ 0x1800B81A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B804E (-Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionScopedBatch::Api::Resume(
        Windows::UI::Composition::CompositionScopedBatch::Api *this)
{
  Windows::UI::Composition::BatchController **v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  int v4; // eax

  v1 = (Windows::UI::Composition::BatchController **)((char *)this - 200);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 22);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( ((_BYTE)v1[4] & 2) != 0 )
  {
    v4 = Windows::UI::Composition::CompositionBatch::Resume(v1);
    v3 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x95u);
    else
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
