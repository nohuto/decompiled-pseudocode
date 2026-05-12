/*
 * XREFs of TcglibpGetCapabilities @ 0x1C007D1E8
 * Callers:
 *     TcglibDiscoverDevice @ 0x1C00797CC (TcglibDiscoverDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 *     TcglibEalAllocateIfRecvCommand @ 0x1C0054C10 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x1C0054E88 (TcglibEalAllocateIfSendCommand.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     TcglibEalFreeCommand @ 0x1C0055408 (TcglibEalFreeCommand.c)
 *     TcglibEalGetCommandPayload @ 0x1C00554D4 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x1C005551C (TcglibEalLogCommand.c)
 *     TcglibStackReset @ 0x1C007A710 (TcglibStackReset.c)
 *     TcglibpGetTableColumnData @ 0x1C007CA38 (TcglibpGetTableColumnData.c)
 *     TcglibpGetLockingInfoTable @ 0x1C007D548 (TcglibpGetLockingInfoTable.c)
 *     TcglibpParseLevel0Data @ 0x1C007D81C (TcglibpParseLevel0Data.c)
 *     TcglibpGetSecretProtection @ 0x1C007DECC (TcglibpGetSecretProtection.c)
 *     TcglibpValidateSidPin @ 0x1C007E060 (TcglibpValidateSidPin.c)
 *     TcglibpCloseSession @ 0x1C007ECFC (TcglibpCloseSession.c)
 *     TcglibpGetTPerProperties @ 0x1C007EE60 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSessionWithRetry @ 0x1C007F0A0 (TcglibpOpenSessionWithRetry.c)
 */

__int64 __fastcall TcglibpGetCapabilities(int **a1, __int64 a2)
{
  int *v2; // r15
  char v4; // r14
  int IfSendCommand; // ebx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  _BYTE v13[4]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-35h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-29h] BYREF
  __int64 v17; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v18[3]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v19; // [rsp+90h] [rbp+17h]

  v2 = *a1;
  v16 = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  v4 = 1;
  v17 = 0LL;
  v14 = 0;
  memset(v18, 0, sizeof(v18));
  IfSendCommand = TcglibEalAllocateIfSendCommand((__int64)v2, 1, 1, 2048, (__int64 *)&v15);
  if ( IfSendCommand >= 0 )
  {
    IfSendCommand = TcglibEalExecuteCommandSync((__int64)v2, v15, v7);
    TcglibEalFreeCommand(*a1, v15);
    if ( IfSendCommand >= 0 )
    {
      IfSendCommand = TcglibEalAllocateIfRecvCommand((__int64)v2, 1, 1, 2048, (__int64 *)&v16);
      if ( IfSendCommand >= 0 )
      {
        TcglibEalLogCommand(*a1, "GetCapabilities", 0, 0, 0LL, 0LL);
        v8 = v16;
        IfSendCommand = TcglibEalExecuteCommandSync((__int64)v2, v16, v9);
        if ( IfSendCommand >= 0 )
        {
          TcglibEalGetCommandPayload(*a1, v8, &v17, &v14);
          IfSendCommand = TcglibpParseLevel0Data(a1, v17, v14, a2);
        }
        TcglibEalFreeCommand(v2, v8);
        if ( IfSendCommand >= 0 )
        {
          IfSendCommand = TcglibpGetTPerProperties(a1, v18, a2 + 8);
          if ( IfSendCommand != -1073741434 )
          {
LABEL_13:
            if ( IfSendCommand < 0 )
              return (unsigned int)IfSendCommand;
            IfSendCommand = TcglibpOpenSessionWithRetry(a1, v18, 0x20500000001LL);
            if ( IfSendCommand < 0 )
              return (unsigned int)IfSendCommand;
            IfSendCommand = TcglibpGetTableColumnData((__int64)a1, (__int64)v18, 0x20500000002LL, 6u, a2 + 68, 4, 0LL);
            if ( IfSendCommand < 0 )
              goto LABEL_28;
            *(_BYTE *)(a2 + 64) = 1;
            v13[0] = 0;
            IfSendCommand = TcglibpGetTableColumnData(
                              (__int64)a1,
                              (__int64)v18,
                              0x900000006LL,
                              5u,
                              (__int64)v13,
                              1,
                              0LL);
            if ( IfSendCommand < 0 || v13[0] )
            {
              if ( *(_BYTE *)(a2 + 148) )
              {
                if ( !*(_BYTE *)(a2 + 149) && *(_BYTE *)(a2 + 150) )
                  v4 = 0;
              }
              else
              {
                v11 = TcglibpValidateSidPin(a1, v18);
                if ( v11 != -1073741790 && v11 != -1073741260 )
                {
LABEL_28:
                  TcglibpCloseSession(a1, v18);
                  if ( IfSendCommand >= 0 )
                  {
                    if ( *(_BYTE *)(a2 + 64) )
                    {
                      if ( *(_DWORD *)(a2 + 68) == 9 )
                      {
                        IfSendCommand = TcglibpOpenSessionWithRetry(a1, v18, 0x20500000002LL);
                        if ( IfSendCommand >= 0 )
                        {
                          IfSendCommand = TcglibpGetLockingInfoTable(a1, v18, a2);
                          if ( IfSendCommand >= 0 )
                            IfSendCommand = TcglibpGetSecretProtection(a1, v18, a2 + 80);
                          TcglibpCloseSession(a1, v18);
                        }
                      }
                    }
                  }
                  return (unsigned int)IfSendCommand;
                }
              }
            }
            *(_BYTE *)(a2 + 4) = v4;
            goto LABEL_28;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            WPP_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_0ef325dc9a723379ae6740d6b32d6064_Traceguids);
          v10 = TcglibStackReset((__int64)a1, (__int64)v18);
          IfSendCommand = v10;
          if ( v10 >= 0 )
          {
            IfSendCommand = TcglibpGetTPerProperties(a1, v18, a2 + 8);
            goto LABEL_13;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xCu,
              (__int64)&WPP_0ef325dc9a723379ae6740d6b32d6064_Traceguids,
              v10);
        }
      }
    }
  }
  return (unsigned int)IfSendCommand;
}
