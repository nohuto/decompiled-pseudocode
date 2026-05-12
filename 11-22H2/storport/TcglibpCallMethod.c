/*
 * XREFs of TcglibpCallMethod @ 0x1C007C734
 * Callers:
 *     TcglibpAssignNamespaceLocking @ 0x1C007B320 (TcglibpAssignNamespaceLocking.c)
 *     TcglibpDeassignNamespaceLocking @ 0x1C007B3C8 (TcglibpDeassignNamespaceLocking.c)
 *     TcglibpEraseBand @ 0x1C007B45C (TcglibpEraseBand.c)
 *     TcglibpGetBandMetadata @ 0x1C007B534 (TcglibpGetBandMetadata.c)
 *     TcglibpGetLockingObjectInfo @ 0x1C007B650 (TcglibpGetLockingObjectInfo.c)
 *     TcglibpSetBandMetadata @ 0x1C007BE18 (TcglibpSetBandMetadata.c)
 *     TcglibpGetTableColumns @ 0x1C007CAA8 (TcglibpGetTableColumns.c)
 *     TcglibpSetTableColumns @ 0x1C007CC8C (TcglibpSetTableColumns.c)
 *     TcglibpActivateLockingSp @ 0x1C007CF04 (TcglibpActivateLockingSp.c)
 *     TcglibpRevertLockingSp @ 0x1C007D0A4 (TcglibpRevertLockingSp.c)
 *     TcglibpSetACEBooleanExpr @ 0x1C007D144 (TcglibpSetACEBooleanExpr.c)
 *     TcglibpGetSecretProtection @ 0x1C007DECC (TcglibpGetSecretProtection.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 *     TcglibpGetTPerProperties @ 0x1C007EE60 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x1C007EF74 (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x1C007F158 (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     TcglibEalGetCommandPayload @ 0x1C00554D4 (TcglibEalGetCommandPayload.c)
 *     TcglibReverseUInt32 @ 0x1C0079D00 (TcglibReverseUInt32.c)
 *     TcglibpExecuteCommand @ 0x1C007C91C (TcglibpExecuteCommand.c)
 *     TcglibpReinitRequestResources @ 0x1C007CB5C (TcglibpReinitRequestResources.c)
 *     InitTcgParser @ 0x1C007F468 (InitTcgParser.c)
 *     ParseTcgMethodData @ 0x1C007FA18 (ParseTcgMethodData.c)
 *     ParseTcgReceivedPayload @ 0x1C007FD54 (ParseTcgReceivedPayload.c)
 *     GenCallMethodBegin @ 0x1C0080564 (GenCallMethodBegin.c)
 *     GenCallMethodEnd @ 0x1C008060C (GenCallMethodEnd.c)
 *     GenTCGHeaders @ 0x1C0080C48 (GenTCGHeaders.c)
 */

__int64 __fastcall TcglibpCallMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, __int64 *, __int64),
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 (__fastcall *a9)(__int64, __int64, __int64, __int64),
        __int64 a10)
{
  __int64 v10; // rax
  _DWORD *v12; // r15
  __int64 v13; // r12
  __int64 v16; // r13
  __int64 v17; // r11
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-10h]
  int v29; // [rsp+44h] [rbp-Ch]
  unsigned int v30; // [rsp+90h] [rbp+40h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v10 = *(_QWORD *)(a2 + 40);
  v12 = *(_DWORD **)a1;
  v13 = *(_QWORD *)(a2 + 48);
  v26 = 0LL;
  v30 = 0;
  v31 = v10;
  TcglibEalGetCommandPayload(v12, v10, &v26, &v30);
  v16 = v26;
  v29 = 0;
  v27 = v26 + 56;
  v28 = v30 - 56;
  v18 = GenCallMethodBegin(&v27, a3, v17);
  if ( v18 < 0 )
    goto LABEL_16;
  if ( a5 )
  {
    v18 = a5(a1, a2, &v27, a6);
    if ( v18 < 0 )
      goto LABEL_16;
  }
  v18 = GenCallMethodEnd(&v27);
  if ( v18 < 0 )
    goto LABEL_16;
  v19 = 0;
  v20 = 0;
  if ( v32 != 255 )
  {
    v19 = *(_DWORD *)(a2 + 8);
    v20 = *(_DWORD *)(a2 + 4);
  }
  v18 = GenTCGHeaders(v16, v30, a2, v29, v19, v20);
  if ( v18 < 0 )
  {
LABEL_16:
    v21 = v31;
  }
  else
  {
    TcglibReverseUInt32(*(_DWORD *)(v16 + 16));
    v21 = v31;
    v18 = TcglibpExecuteCommand(v12, v31, v22, 0LL);
    if ( v18 >= 0 )
    {
      LOBYTE(v24) = 1;
      v18 = TcglibpExecuteCommand(v12, v13, v23, v24);
      if ( v18 >= 0 )
      {
        TcglibEalGetCommandPayload(v12, v13, &v26, &v30);
        if ( !(unsigned int)InitTcgParser(a1, v26, v30) )
        {
          v31 = 0LL;
          v18 = ParseTcgReceivedPayload(a1);
          if ( v18 >= 0 )
          {
            v18 = ParseTcgMethodData(a1, a7, a8, &v31);
            if ( v18 >= 0 )
            {
              if ( a9 )
                v18 = a9(a1, a2, v31, a10);
            }
          }
        }
        _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
      }
    }
  }
  TcglibpReinitRequestResources(v12, v21, v13);
  return (unsigned int)v18;
}
