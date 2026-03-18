/*
 * XREFs of ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x14000262C
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002460 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400028E4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x1400029A4 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x1400043A4 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x1400027CC (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x1400027F0 (--1CPortClient@@UEAA@XZ.c)
 *     ?LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z @ 0x140002FD0 (-LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400033CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, int a2)
{
  int v2; // ebx
  HANDLE ProcessHeap; // rax
  struct _PORT_MESSAGE *v4; // rax
  struct _PORT_MESSAGE *v5; // rdi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  HANDLE v9; // rax
  void *v11; // [rsp+28h] [rbp-58h]
  void *v12; // [rsp+28h] [rbp-58h]
  void **v13; // [rsp+40h] [rbp-40h] BYREF
  int v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  char v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int128 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  void *v20; // [rsp+90h] [rbp+10h]

  v2 = 0;
  if ( *(&hInstance + 1) )
  {
    v17 = 0;
    v19 = 0LL;
    v13 = &CPortClient::`vftable';
    LODWORD(v20) = 1073741872;
    v14 = 0;
    v16 = 0;
    v18 = 0LL;
    v15 = (__int64)*(&hInstance + 1);
    HIDWORD(v20) = a2;
    ProcessHeap = GetProcessHeap();
    v4 = (struct _PORT_MESSAGE *)HeapAlloc(ProcessHeap, 8u, 0x38uLL);
    v5 = v4;
    if ( v4 )
    {
      v4[1].u1.Length = 1073741872;
      v4->u1.Length = 3670032;
      LpcVerifyOutgoingPayloadSize(v4);
      v12 = 0LL;
      v5[1].ClientId.UniqueProcess = v20;
      v7 = NtAlpcSendWaitReceivePort(v15, 0x10000LL, v5, 0LL, 0LL);
      v8 = CPortClient::CheckStatus((CPortClient *)&v13, v7);
      if ( v8 < 0 )
      {
        v2 = v8 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(
          4u,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          9u,
          v8 | 0x10000000,
          0x1EDu,
          0LL);
      }
      v9 = GetProcessHeap();
      HeapFree(v9, 0, v5);
      v6 = v2;
      if ( v2 >= 0 )
        goto LABEL_8;
    }
    else
    {
      v2 = -2147024882;
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        -2147024882,
        0x1DCu,
        v11);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x166u, v12);
LABEL_8:
    CPortClient::~CPortClient((CPortClient *)&v13);
  }
  return (unsigned int)v2;
}
