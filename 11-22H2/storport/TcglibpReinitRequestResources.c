/*
 * XREFs of TcglibpReinitRequestResources @ 0x1C007CB5C
 * Callers:
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 *     TcglibpOpenSession @ 0x1C007EF74 (TcglibpOpenSession.c)
 *     TcglibpTransaction @ 0x1C007F260 (TcglibpTransaction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     TcglibEalReuseCommand @ 0x1C0055A48 (TcglibEalReuseCommand.c)
 */

__int64 __fastcall TcglibpReinitRequestResources(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 && a3 )
  {
    result = TcglibEalReuseCommand(a1, a2);
    if ( (int)result >= 0 )
      return TcglibEalReuseCommand(a1, a3);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_34662084ba6c3478538713a1c2df56b8_Traceguids);
    return 3221225485LL;
  }
  return result;
}
