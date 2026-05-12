/*
 * XREFs of TcglibpAllocateRequestResources @ 0x1C007C67C
 * Callers:
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x1C007AA28 (TcglibTPerReset.c)
 *     TcglibpGetTPerProperties @ 0x1C007EE60 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x1C007EF74 (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x1C007F158 (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalAllocateIfRecvCommand @ 0x1C0054C10 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x1C0054E88 (TcglibEalAllocateIfSendCommand.c)
 *     TcglibEalFreeCommand @ 0x1C0055408 (TcglibEalFreeCommand.c)
 */

__int64 __fastcall TcglibpAllocateRequestResources(_DWORD *a1, char a2, __int16 a3, int a4, __int64 *a5, __int64 *a6)
{
  int IfSendCommand; // esi

  *a5 = 0LL;
  *a6 = 0LL;
  IfSendCommand = TcglibEalAllocateIfSendCommand((__int64)a1, a2, a3, a4, a5);
  if ( IfSendCommand < 0
    || (IfSendCommand = TcglibEalAllocateIfRecvCommand((__int64)a1, a2, a3, a4, a6), IfSendCommand < 0) )
  {
    if ( *a5 )
    {
      TcglibEalFreeCommand(a1, *a5);
      *a5 = 0LL;
    }
    if ( *a6 )
    {
      TcglibEalFreeCommand(a1, *a6);
      *a6 = 0LL;
    }
  }
  return (unsigned int)IfSendCommand;
}
