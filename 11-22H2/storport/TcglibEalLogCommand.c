/*
 * XREFs of TcglibEalLogCommand @ 0x1C005551C
 * Callers:
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     TcglibpAssignNamespaceLocking @ 0x1C007B320 (TcglibpAssignNamespaceLocking.c)
 *     TcglibpDeassignNamespaceLocking @ 0x1C007B3C8 (TcglibpDeassignNamespaceLocking.c)
 *     TcglibpEraseBand @ 0x1C007B45C (TcglibpEraseBand.c)
 *     TcglibpGetBandMetadata @ 0x1C007B534 (TcglibpGetBandMetadata.c)
 *     TcglibpSetBandMetadata @ 0x1C007BE18 (TcglibpSetBandMetadata.c)
 *     TcglibpGetTableColumns @ 0x1C007CAA8 (TcglibpGetTableColumns.c)
 *     TcglibpSetTableColumns @ 0x1C007CC8C (TcglibpSetTableColumns.c)
 *     TcglibpActivateLockingSp @ 0x1C007CF04 (TcglibpActivateLockingSp.c)
 *     TcglibpRevertLockingSp @ 0x1C007D0A4 (TcglibpRevertLockingSp.c)
 *     TcglibpSetACEBooleanExpr @ 0x1C007D144 (TcglibpSetACEBooleanExpr.c)
 *     TcglibpGetCapabilities @ 0x1C007D1E8 (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x1C007D704 (TcglibpGetProtocolList.c)
 *     TcglibpGetSecretProtection @ 0x1C007DECC (TcglibpGetSecretProtection.c)
 *     TcglibpAuthenticateSession @ 0x1C007EC1C (TcglibpAuthenticateSession.c)
 *     TcglibpCloseSession @ 0x1C007ECFC (TcglibpCloseSession.c)
 *     TcglibpGetTPerProperties @ 0x1C007EE60 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x1C007EF74 (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x1C007F158 (TcglibpSetMaxPacketSizes.c)
 *     TcglibpTransaction @ 0x1C007F260 (TcglibpTransaction.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer @ 0x1C0054984 (McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall TcglibEalLogCommand(int *a1, const char *a2, char a3, char a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  const char *v7; // rdi
  int v11; // r11d
  int *v12; // rbx
  const wchar_t *v13; // rsi
  char v14; // r11
  const wchar_t *v15; // rcx
  const char *v16; // r8
  const char *v17; // rdx
  const char *v18; // rdi
  int v20; // [rsp+A0h] [rbp-68h]
  __int128 v21; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-40h] BYREF

  v6 = *a1;
  v7 = 0LL;
  v22 = 0LL;
  v20 = RaidNullAddress;
  v23 = 0LL;
  v21 = 0LL;
  if ( v6 == 1431193940 )
  {
    v11 = a1[24];
    v7 = (const char *)a1;
    v12 = (int *)*((_QWORD *)a1 + 3);
    v23 = *(_OWORD *)(a1 + 506);
    v20 = v11;
  }
  else
  {
    v12 = 0LL;
    if ( v6 == 1094997074 )
      v12 = a1;
  }
  v22 = *(_OWORD *)(v12 + 1250);
  v13 = (const wchar_t *)*((_QWORD *)v12 + 627);
  RaidDriverGetName(*((_QWORD *)v12 + 2), (__int64)&v21);
  if ( (byte_1C0092A03 & 0x20) != 0 )
  {
    v15 = (const wchar_t *)&unk_1C0081788;
    if ( v13 )
      v15 = v13;
    if ( v7 )
    {
      v16 = v7 + 186;
      v17 = v7 + 169;
      v18 = v7 + 160;
    }
    else
    {
      v18 = (const char *)&dword_1C0081784;
      v16 = (const char *)&dword_1C0081784;
      v17 = (const char *)&dword_1C0081784;
    }
    McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer(
      (__int64)v15,
      &EventTcgCommand,
      (__int64)v16,
      v12[14],
      v14,
      SBYTE1(v20),
      SBYTE2(v20),
      (__int64)&v23,
      (__int64)&v22,
      *((const wchar_t **)&v21 + 1),
      v18,
      v17,
      v16,
      v15,
      a2,
      a3,
      a4,
      a5,
      a6);
  }
  return 0LL;
}
