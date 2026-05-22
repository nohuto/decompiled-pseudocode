/*
 * XREFs of ?put_RequestedSize@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006B0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetRequestedSize@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006B130 (-SetRequestedSize@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat2@Numerics@Foundation@4@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::put_RequestedSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  const wchar_t *v7; // r8

  v2 = a1 - 128;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) == 0 )
  {
    v7 = L"The given object has already been closed / disposed and may no longer be used.";
    v5 = -2147483629;
LABEL_8:
    RoOriginateErrorW(v5, 0LL, v7);
    goto LABEL_5;
  }
  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    v7 = L"Each dimension for the specified size must be >= 0";
    v5 = -2147024809;
    goto LABEL_8;
  }
  Windows::UI::Composition::CompositionIsland::SetRequestedSize(v2, a2);
  v5 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
