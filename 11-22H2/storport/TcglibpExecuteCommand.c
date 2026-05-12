/*
 * XREFs of TcglibpExecuteCommand @ 0x1C007C91C
 * Callers:
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x1C007AA28 (TcglibTPerReset.c)
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 *     TcglibpCloseSession @ 0x1C007ECFC (TcglibpCloseSession.c)
 *     TcglibpTransaction @ 0x1C007F260 (TcglibpTransaction.c)
 * Callees:
 *     TcglibEalDelayExecution @ 0x1C0055100 (TcglibEalDelayExecution.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     TcglibEalGetCommandPayload @ 0x1C00554D4 (TcglibEalGetCommandPayload.c)
 *     TcglibEalReuseCommand @ 0x1C0055A48 (TcglibEalReuseCommand.c)
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 */

__int64 __fastcall TcglibpExecuteCommand(_DWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  int v7; // esi
  unsigned int v8; // r14d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  char v13[16]; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+58h] BYREF

  v14 = a3;
  v15 = 0;
  v7 = 10000;
  v8 = 1;
  while ( 1 )
  {
    v9 = TcglibEalExecuteCommandSync((__int64)a1, a2, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( !a4 || v9 != -2147483631 )
        return v10;
      goto LABEL_12;
    }
    if ( !a4 )
      return v10;
    *(_QWORD *)v13 = 0LL;
    TcglibEalGetCommandPayload(a1, a2, v13, &v15);
    if ( v15 < 0x14 )
      break;
    v11 = *(_QWORD *)v13;
    v14 = *(_DWORD *)(*(_QWORD *)v13 + 16LL);
    TcglibReverseBytes((char *)&v14, 4u);
    *(_DWORD *)v13 = *(_DWORD *)(v11 + 8);
    TcglibReverseBytes(v13, 4u);
    if ( v14 )
      return v10;
    if ( !*(_DWORD *)v13 )
      break;
    if ( *(_DWORD *)v13 > 1u )
      return (unsigned int)-2147483643;
    v10 = -2147483631;
    if ( --v7 )
    {
      TcglibEalReuseCommand(a1, a2);
      TcglibEalDelayExecution(v8);
      v8 = 5;
    }
    else
    {
LABEL_12:
      if ( !v7 )
        return v10;
    }
  }
  return (unsigned int)-1073741435;
}
