/*
 * XREFs of TcglibpReleaseRequestResources @ 0x1C007CBD4
 * Callers:
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x1C007AA28 (TcglibTPerReset.c)
 *     TcglibpCloseSession @ 0x1C007ECFC (TcglibpCloseSession.c)
 *     TcglibpGetTPerProperties @ 0x1C007EE60 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x1C007EF74 (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x1C007F158 (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalFreeCommand @ 0x1C0055408 (TcglibEalFreeCommand.c)
 */

__int64 __fastcall TcglibpReleaseRequestResources(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *a2;
  if ( v5 )
  {
    result = TcglibEalFreeCommand(a1, v5);
    *a2 = 0LL;
  }
  if ( *a3 )
  {
    result = TcglibEalFreeCommand(a1, *a3);
    *a3 = 0LL;
  }
  return result;
}
