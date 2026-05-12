/*
 * XREFs of TcglibpCloseSession @ 0x1C007ECFC
 * Callers:
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibEalGetCommandPayload @ 0x1C00554D4 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibReverseUInt32 @ 0x1C0079D00 (TcglibReverseUInt32.c)
 *     TcglibpExecuteCommand @ 0x1C007C91C (TcglibpExecuteCommand.c)
 *     TcglibpReleaseRequestResources @ 0x1C007CBD4 (TcglibpReleaseRequestResources.c)
 *     InitTcgParser @ 0x1C007F468 (InitTcgParser.c)
 *     ParseTcgEndSession @ 0x1C007F9AC (ParseTcgEndSession.c)
 *     GenTCGHeaders @ 0x1C0080C48 (GenTCGHeaders.c)
 */

__int64 __fastcall TcglibpCloseSession(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  int *v5; // r14
  int v7; // edi
  __int64 v8; // r13
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 result; // rax
  unsigned int v14; // [rsp+80h] [rbp+48h] BYREF
  __int64 v15; // [rsp+88h] [rbp+50h] BYREF
  __int64 v16; // [rsp+90h] [rbp+58h] BYREF
  __int64 v17; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 48);
  v5 = *(int **)a1;
  v15 = 0LL;
  v7 = 0;
  v14 = 0;
  v17 = v2;
  v16 = v3;
  if ( v2 && v3 )
  {
    TcglibEalGetCommandPayload(v5, v2, &v15, &v14);
    v8 = v15;
    v9 = v14;
    v10 = v15;
    *(_BYTE *)(v15 + 56) = -6;
    v7 = GenTCGHeaders(v10, v9, a2, 1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4));
    if ( v7 >= 0 )
    {
      TcglibReverseUInt32(*(_DWORD *)(v8 + 16));
      v7 = TcglibpExecuteCommand(v5, v2, v11, 0);
      if ( v7 >= 0 )
      {
        TcglibEalLogCommand(v5, "CloseSession", 0, 0, 0LL, 0LL);
        v7 = TcglibpExecuteCommand(v5, v3, v12, 1);
        if ( v7 >= 0 )
        {
          TcglibEalGetCommandPayload(v5, v3, &v15, &v14);
          if ( !(unsigned int)InitTcgParser(a1, v15, v14) )
            v7 = ParseTcgEndSession(a1);
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
    TcglibpReleaseRequestResources(v5, &v17, &v16);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
  }
  *(_QWORD *)(a2 + 4) = 0LL;
  result = (unsigned int)v7;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 24) = 0;
  return result;
}
