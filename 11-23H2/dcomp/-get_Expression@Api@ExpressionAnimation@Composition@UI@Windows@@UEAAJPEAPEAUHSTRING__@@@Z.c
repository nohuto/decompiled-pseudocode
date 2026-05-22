/*
 * XREFs of ?get_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7C30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7BB4 (-GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimation::Api::get_Expression(
        Windows::UI::Composition::ExpressionAnimation::Api *this,
        HSTRING *a2)
{
  Windows::UI::Composition::ExpressionAnimation *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int Expression; // eax

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::ExpressionAnimation::Api *)((char *)this - 344);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 40);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Expression = Windows::UI::Composition::ExpressionAnimation::GetExpression(v2, a2);
    v5 = Expression;
    if ( Expression < 0 )
      DoStackCaptureDirect(Expression, 0x21Cu);
    else
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
