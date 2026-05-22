/*
 * XREFs of ?Clear@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180194990
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Clear@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAXXZ @ 0x1801949F4 (-Clear@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Api::Clear(
        Windows::UI::Composition::InitialValueExpressionCollection::Api *this)
{
  Windows::UI::Composition::InitialValueExpressionCollection *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi

  v1 = (Windows::UI::Composition::InitialValueExpressionCollection::Api *)((char *)this - 128);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::InitialValueExpressionCollection::Clear(v1);
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
