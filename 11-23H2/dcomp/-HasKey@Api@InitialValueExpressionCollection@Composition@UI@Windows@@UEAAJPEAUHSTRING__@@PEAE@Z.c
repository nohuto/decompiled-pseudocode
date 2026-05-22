/*
 * XREFs of ?HasKey@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180194C60
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x180194CF4 (-HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Api::HasKey(
        Windows::UI::Composition::InitialValueExpressionCollection::Api *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  Windows::UI::Composition::InitialValueExpressionCollection *v3; // rsi
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx

  v3 = (Windows::UI::Composition::InitialValueExpressionCollection::Api *)((char *)this - 128);
  v4 = 0;
  *a3 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    *a3 = Windows::UI::Composition::InitialValueExpressionCollection::HasKey(v3, a2);
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v4;
}
