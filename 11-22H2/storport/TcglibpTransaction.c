/*
 * XREFs of TcglibpTransaction @ 0x1C007F260
 * Callers:
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 * Callees:
 *     TcglibEalGetCommandPayload @ 0x1C00554D4 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibReverseUInt32 @ 0x1C0079D00 (TcglibReverseUInt32.c)
 *     TcglibpExecuteCommand @ 0x1C007C91C (TcglibpExecuteCommand.c)
 *     TcglibpReinitRequestResources @ 0x1C007CB5C (TcglibpReinitRequestResources.c)
 *     InitTcgParser @ 0x1C007F468 (InitTcgParser.c)
 *     ParseTcgTransactionStatus @ 0x1C007FDEC (ParseTcgTransactionStatus.c)
 *     GenTCGHeaders @ 0x1C0080C48 (GenTCGHeaders.c)
 */

__int64 __fastcall TcglibpTransaction(__int64 a1, __int64 a2, char a3, char a4)
{
  int *v4; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // r15
  int CommandPayload; // edi
  __int64 v10; // r11
  __int64 v11; // r14
  bool v12; // dl
  __int64 v13; // r8
  const char *v14; // rdx
  __int64 v15; // r8
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  char v19; // [rsp+88h] [rbp+20h]

  v19 = a4;
  v4 = *(int **)a1;
  v5 = *(_QWORD *)(a2 + 40);
  v7 = *(_QWORD *)(a2 + 48);
  v18 = 0LL;
  v17 = 0;
  CommandPayload = TcglibEalGetCommandPayload(v4, v5, &v18, &v17);
  if ( CommandPayload >= 0 )
  {
    v11 = v18;
    v12 = !a3 && v19 != 0;
    *(_BYTE *)(v18 + 56) = -(a3 != 0) - 4;
    *(_BYTE *)(v11 + 57) = v12;
    CommandPayload = GenTCGHeaders(v11, v17, v10, 2, *(_DWORD *)(v10 + 8), *(_DWORD *)(v10 + 4));
    if ( CommandPayload >= 0 )
    {
      TcglibReverseUInt32(*(_DWORD *)(v11 + 16));
      CommandPayload = TcglibpExecuteCommand(v4, v5, v13, 0);
      if ( CommandPayload >= 0 )
      {
        v14 = "StartTransaction";
        if ( !a3 )
          v14 = "EndTransaction";
        TcglibEalLogCommand(v4, v14, 0, 0, 0LL, 0LL);
        CommandPayload = TcglibpExecuteCommand(v4, v7, v15, 1);
        if ( CommandPayload >= 0 )
        {
          TcglibEalGetCommandPayload(v4, v7, &v18, &v17);
          if ( !(unsigned int)InitTcgParser(a1, v18, v17) )
            CommandPayload = ParseTcgTransactionStatus(a1);
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
  }
  TcglibpReinitRequestResources(v4, v5, v7);
  return (unsigned int)CommandPayload;
}
