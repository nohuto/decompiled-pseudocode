/*
 * XREFs of ?Remove@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x1801951B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180195224 (-Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Api::Remove(
        Windows::UI::Composition::InitialValueExpressionCollection::Api *this,
        HSTRING a2)
{
  Windows::UI::Composition::InitialValueExpressionCollection *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::InitialValueExpressionCollection::Api *)((char *)this - 128);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::InitialValueExpressionCollection::Remove(v2, a2);
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
