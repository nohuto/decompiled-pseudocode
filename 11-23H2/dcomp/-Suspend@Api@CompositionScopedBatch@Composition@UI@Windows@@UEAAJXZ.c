/*
 * XREFs of ?Suspend@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJXZ @ 0x1800B8220
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B80E2 (-Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionScopedBatch::Api::Suspend(
        Windows::UI::Composition::CompositionScopedBatch::Api *this)
{
  Windows::UI::Composition::BatchController **v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  signed int v4; // eax

  v1 = (Windows::UI::Composition::BatchController **)((char *)this - 200);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 22);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( ((_BYTE)v1[4] & 2) != 0 )
  {
    v4 = Windows::UI::Composition::CompositionBatch::Suspend(v1);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FE868, 2u, v4, 0x83u, 0LL);
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
