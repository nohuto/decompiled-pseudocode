/*
 * XREFs of ?put_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18005E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18005ECE8 (-SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimation::Api::put_Expression(
        Windows::UI::Composition::ExpressionAnimation::Api *this,
        HSTRING a2)
{
  Windows::UI::Composition::ExpressionAnimation *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  signed int v5; // eax
  unsigned int v6; // edi

  v2 = (Windows::UI::Composition::ExpressionAnimation::Api *)((char *)this - 344);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 40);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    if ( a2 )
    {
      v5 = Windows::UI::Composition::ExpressionAnimation::SetExpression(v2, a2);
      v6 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA550, 2u, v5, 0x234u, 0LL);
      else
        v6 = 0;
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA550, 2u, 0x80070057, 0x233u, 0LL);
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
