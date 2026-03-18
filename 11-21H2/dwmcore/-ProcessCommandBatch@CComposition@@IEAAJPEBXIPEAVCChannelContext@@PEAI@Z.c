/*
 * XREFs of ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800C085C
 * Callers:
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180060F90 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800BDAC0 (-ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 * Callees:
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180044998 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180046414 (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18007354C (-IsOOM@@YA_NJ@Z.c)
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801931C0 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x18026BBF0 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18026BE1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CComposition::ProcessCommandBatch(
        CComposition *this,
        unsigned int *a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int *a5)
{
  unsigned int *v5; // r12
  unsigned int *v9; // rax
  int NextItemSafe; // eax
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int v14; // r8d
  void *v15; // r15
  unsigned int v16; // r13d
  unsigned int *v17; // rsi
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // eax
  CAnimationLoggingManager *v22; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // ecx
  void *StackCaptureRootFailureAddress; // rax
  __int64 v28; // r9
  const void *v29; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v30; // [rsp+38h] [rbp-18h]
  unsigned int v31; // [rsp+40h] [rbp-10h]
  unsigned int v32; // [rsp+90h] [rbp+40h] BYREF
  void *v33; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+50h] BYREF

  v5 = a5;
  v34 = 0;
  v33 = 0LL;
  v32 = 0;
  *a5 = 0;
  ++*((_DWORD *)a4 + 22);
  v9 = (unsigned int *)*((_QWORD *)a4 + 4);
  *((_QWORD *)this + 79) = a2;
  *((_DWORD *)this + 160) = a3;
  a5 = v9;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(this, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, a3);
  v29 = a2;
  v31 = a3;
  v30 = a2;
  NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v29, &v34, &v33, &v32);
  v13 = NextItemSafe;
  if ( NextItemSafe < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, NextItemSafe, 0x22Eu);
    goto LABEL_27;
  }
  v14 = v34;
  v15 = v33;
  v16 = v32;
  v17 = v30;
  while ( v13 != 1 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800000) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMMAND_PROCESSED_ONBEHALF,
        *((unsigned int *)a4 + 5),
        v14);
    v18 = CComposition::ProcessMessage(this, v34, v15, v16, a4, a5);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x248u);
      goto LABEL_27;
    }
    v20 = (unsigned __int64)v29 + v31 - (_QWORD)v17;
    if ( !v20 )
    {
      v15 = 0LL;
      v16 = 0;
      v21 = 1;
      v13 = 1;
LABEL_22:
      v14 = v34;
      goto LABEL_15;
    }
    if ( v20 < 8 || (v19 = *v17, (unsigned int)v19 < 8) || (v19 & 3) != 0 || v19 > v20 )
    {
      v13 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, -2147467259, 0x252u);
      v21 = -2147467259;
      goto LABEL_22;
    }
    v15 = v17 + 1;
    v21 = 0;
    v14 = v17[1];
    v16 = v19 - 4;
    v17 = (unsigned int *)((char *)v17 + v19);
    v34 = v14;
    v13 = 0;
LABEL_15:
    ++*v5;
    if ( v21 < 0 )
      goto LABEL_27;
  }
  *(_BYTE *)(*((_QWORD *)this + 53) + 448LL) |= 2u;
  v22 = (CAnimationLoggingManager *)*((_QWORD *)a4 + 8);
  if ( v22 && (v24 = CAnimationLoggingManager::LogDebugPropertyUpdates(v22, *((_QWORD *)this + 62)), v13 = v24, v24 < 0) )
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x148u);
  else
    v13 = 0;
  if ( v13 < 0 )
  {
LABEL_27:
    if ( !IsOOM(v13) )
    {
      MilUnexpectedError(v26, L"batch processing error");
      StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v13);
      CComposition::FailFastOnMalformedPacket(this, (unsigned int)v13, StackCaptureRootFailureAddress, v28);
    }
  }
  return (unsigned int)v13;
}
