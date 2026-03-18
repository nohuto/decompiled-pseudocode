/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C5AE0
 * Callers:
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C5A90 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     SendMessageTo @ 0x1C0091DE0 (SendMessageTo.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BE664 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01BE95C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01BE990 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C01C35AC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C01D3E80 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D41FC (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *a1,
        const struct CPointerInputFrame *a2,
        int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rdx
  CTouchProcessor *v16; // rcx
  __int64 v17; // r8
  char *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r12d
  const struct TELEMETRY_POINTER_FRAME_TIMES *v23; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  char *v25; // rbx
  CTouchProcessor *v26; // rcx
  char v27; // di
  char v28; // si
  unsigned int v29; // r15d
  __int64 v30; // r12
  struct CInputPointerNode *NodeById; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdi
  __int128 v41; // [rsp+40h] [rbp-39h]
  __int128 v42; // [rsp+50h] [rbp-29h]
  char *P; // [rsp+F8h] [rbp+7Fh]

  v9 = CTouchProcessor::CountMTNodesReadyForRouting(a1, a2);
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked((struct _KTHREAD **)a1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v13 = 240LL * (v9 - 1);
  if ( v13 > 0xFFFFFFFF || (v14 = v13 + 408, (unsigned int)v13 >= 0xFFFFFE68) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL, v10, v12);
    v14 = 0;
  }
  P = (char *)Win32AllocPoolZInit(v14, 1835624789);
  v18 = P;
  if ( !P )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  *(_DWORD *)P = a3;
  v22 = CTouchProcessor::CalcManipulationInputInfoSize(v16, v9);
  if ( v14 <= v22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
  v23 = (const struct CPointerInputFrame *)((char *)a2 + 72);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)((char *)v23 + (isChildPartition() ? 0x48 : 0) + 32) = PerformanceCounter;
  v25 = P + 8;
  CTouchProcessor::BuildManipulationInputInfo(v26, (struct tagMANIPULATION_INPUT_INFO *)(P + 8), v22, a2);
  InputTraceLogging::TelemetryDebug::Pointer::SendFrameToUserMode(v23);
  InputTraceLogging::Pointer::SendFrameToUserMode(a2, v9, (const struct tagMANIPULATION_INPUT_INFO *)(P + 8));
  SendMessageTo(8LL);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v41 = *(_OWORD *)(P + 168);
  v42 = *(_OWORD *)(P + 184);
  if ( !*((_DWORD *)P + 39) )
    goto LABEL_23;
  do
  {
    v30 = 240LL * v29;
    NodeById = CTouchProcessor::FindNodeById(a1, *(_WORD *)&v25[v30 + 164], 0, 0);
    if ( NodeById )
    {
      _InterlockedAdd((volatile signed __int32 *)NodeById + 9, 1u);
      if ( *((int *)NodeById + 9) <= 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
    }
    v35 = *(_DWORD *)&v25[v30 + 172];
    if ( (v35 & 2) != 0 )
      v28 = 1;
    if ( (v35 & 4) != 0 )
      v27 = 1;
    ++v29;
  }
  while ( v29 < *((_DWORD *)P + 39) );
  v18 = P;
  if ( !v27 )
  {
LABEL_23:
    if ( (_DWORD)v41 != 3 || !v28 )
    {
      v36 = HMValidateHandleNoSecure(v42, 19);
      if ( v36 && (v40 = *(_QWORD *)(v36 + 472)) != 0 )
      {
        SendMessageTo(20LL);
        *(_DWORD *)(v40 + 960) = 0;
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
      }
    }
  }
  Win32FreePool(v18);
}
