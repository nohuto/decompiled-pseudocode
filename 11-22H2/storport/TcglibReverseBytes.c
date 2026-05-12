/*
 * XREFs of TcglibReverseBytes @ 0x1C0079CB8
 * Callers:
 *     TcglibReverseUInt32 @ 0x1C0079D00 (TcglibReverseUInt32.c)
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     GenAssignNamespaceParams @ 0x1C007AB90 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x1C007ABF0 (GenDeassignNamespaceParams.c)
 *     ParseAssignNamespace @ 0x1C007AD40 (ParseAssignNamespace.c)
 *     ParseLockingObjectInfo @ 0x1C007B030 (ParseLockingObjectInfo.c)
 *     TcglibpGetLockingObjectInfo @ 0x1C007B650 (TcglibpGetLockingObjectInfo.c)
 *     TcglibpExecuteCommand @ 0x1C007C91C (TcglibpExecuteCommand.c)
 *     GenActivateParams @ 0x1C007CD40 (GenActivateParams.c)
 *     GenSetACEBooleanExpr @ 0x1C007CE10 (GenSetACEBooleanExpr.c)
 *     TcglibpGetLockingInfoTable @ 0x1C007D548 (TcglibpGetLockingInfoTable.c)
 *     TcglibpParseLevel0Data @ 0x1C007D81C (TcglibpParseLevel0Data.c)
 *     TcglibpGetSecretProtection @ 0x1C007DECC (TcglibpGetSecretProtection.c)
 *     GenAuthenticateParams @ 0x1C007E170 (GenAuthenticateParams.c)
 *     GenStartSessionParams @ 0x1C007E3E0 (GenStartSessionParams.c)
 *     InitTcgParser @ 0x1C007F468 (InitTcgParser.c)
 *     ParseTcgMethodData @ 0x1C007FA18 (ParseTcgMethodData.c)
 *     GenCallMethodBegin @ 0x1C0080564 (GenCallMethodBegin.c)
 *     GenTCGHeaders @ 0x1C0080C48 (GenTCGHeaders.c)
 * Callees:
 *     <none>
 */

char __fastcall TcglibReverseBytes(char *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char *v4; // r11
  char v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char result; // al

  v3 = 0;
  if ( a2 >> 1 )
  {
    v4 = a1;
    do
    {
      v5 = *v4;
      v6 = a2 - v3++;
      v7 = v6 - 1;
      v8 = (unsigned int)v7;
      result = a1[v7];
      *v4++ = result;
      a1[v8] = v5;
    }
    while ( v3 < a2 >> 1 );
  }
  return result;
}
