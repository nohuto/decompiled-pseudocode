/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01C6030
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01C6170 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C01C6230 (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01D3AE4 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(struct _KTHREAD **this, _DWORD *P, __int64 a3)
{
  _QWORD *v5; // rdi
  __int16 v6; // r14
  __int64 v7; // rsi
  PVOID *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  _QWORD *v15; // rbx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, P, a3);
  if ( P[6] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, P, a3);
  v5 = *(_QWORD **)P;
  v6 = *((_WORD *)P + 8);
  v7 = *((_QWORD *)P + 5);
  if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
    __fastfail(3u);
  *v8 = v5;
  v5[1] = v8;
  *((_QWORD *)P + 1) = P;
  *(_QWORD *)P = P;
  v9 = P[9];
  if ( (v9 & 0x80u) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, P, a3);
    v9 = P[9];
  }
  P[9] = v9 | 0x80;
  Win32FreePool((char *)P);
  if ( v7 )
  {
    v13 = *(_DWORD *)(v7 + 16);
    if ( v13 == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v7 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v7 + 168));
      v13 = *(_DWORD *)(v7 + 16);
    }
    v14 = v13 - 1;
    *(_DWORD *)(v7 + 16) = v14;
    if ( !v14 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v7);
  }
  if ( (_QWORD *)*v5 == v5 )
  {
    v15 = v5 - 32;
    if ( *((_WORD *)v5 - 112) != v6 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      if ( (_QWORD *)*v5 != v5 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    }
    if ( (_QWORD *)v15[30] != v15 + 30 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    if ( *((_DWORD *)v15 + 14) == 3 && !*((_DWORD *)v15 + 9) )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v5 - 32));
  }
}
