/*
 * XREFs of ?Insert@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194D80
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194E48 (-Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Api::Insert(
        Windows::UI::Composition::InitialValueExpressionCollection::Api *this,
        HSTRING a2,
        HSTRING a3,
        unsigned __int8 *a4)
{
  Windows::UI::Composition::InitialValueExpressionCollection *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v9; // edi
  signed int v10; // eax

  v4 = (Windows::UI::Composition::InitialValueExpressionCollection::Api *)((char *)this - 128);
  *a4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v10 = Windows::UI::Composition::InitialValueExpressionCollection::Insert(v4, a2, a3, a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA550, 2u, v10, 0x1B7u, 0LL);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
