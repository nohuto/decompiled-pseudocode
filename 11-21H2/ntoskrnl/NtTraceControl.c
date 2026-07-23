/*
 * XREFs of NtTraceControl @ 0x1407954F0
 * Callers:
 *     sub_140807EA4 @ 0x140807EA4 (sub_140807EA4.c)
 *     sub_140818A90 @ 0x140818A90 (sub_140818A90.c)
 *     sub_1408603A8 @ 0x1408603A8 (sub_1408603A8.c)
 * Callees:
 *     sub_140251BD0 @ 0x140251BD0 (sub_140251BD0.c)
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     sub_1402E10CC @ 0x1402E10CC (sub_1402E10CC.c)
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14045F8A6 @ 0x14045F8A6 (sub_14045F8A6.c)
 *     sub_14062C578 @ 0x14062C578 (sub_14062C578.c)
 *     sub_14062CC44 @ 0x14062CC44 (sub_14062CC44.c)
 *     sub_140630D00 @ 0x140630D00 (sub_140630D00.c)
 *     sub_140635440 @ 0x140635440 (sub_140635440.c)
 *     sub_1406356A0 @ 0x1406356A0 (sub_1406356A0.c)
 *     sub_14065F10C @ 0x14065F10C (sub_14065F10C.c)
 *     sub_1406B9918 @ 0x1406B9918 (sub_1406B9918.c)
 *     sub_1406E6A28 @ 0x1406E6A28 (sub_1406E6A28.c)
 *     sub_1406E80C4 @ 0x1406E80C4 (sub_1406E80C4.c)
 *     sub_1406EC208 @ 0x1406EC208 (sub_1406EC208.c)
 *     sub_1406EC524 @ 0x1406EC524 (sub_1406EC524.c)
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EDF6C @ 0x1406EDF6C (sub_1406EDF6C.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_1406EEF3C @ 0x1406EEF3C (sub_1406EEF3C.c)
 *     sub_1406EF10C @ 0x1406EF10C (sub_1406EF10C.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_1406F2000 @ 0x1406F2000 (sub_1406F2000.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_14078EF08 @ 0x14078EF08 (sub_14078EF08.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140791804 @ 0x140791804 (sub_140791804.c)
 *     sub_1407949D4 @ 0x1407949D4 (sub_1407949D4.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_140797650 @ 0x140797650 (sub_140797650.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_140865050 @ 0x140865050 (sub_140865050.c)
 *     sub_140883086 @ 0x140883086 (sub_140883086.c)
 *     sub_140883164 @ 0x140883164 (sub_140883164.c)
 *     sub_1409E48B8 @ 0x1409E48B8 (sub_1409E48B8.c)
 *     sub_1409E4B48 @ 0x1409E4B48 (sub_1409E4B48.c)
 *     sub_1409E4C24 @ 0x1409E4C24 (sub_1409E4C24.c)
 *     sub_1409E4D1C @ 0x1409E4D1C (sub_1409E4D1C.c)
 *     sub_1409E4DAC @ 0x1409E4DAC (sub_1409E4DAC.c)
 *     sub_1409E4E94 @ 0x1409E4E94 (sub_1409E4E94.c)
 *     sub_1409EBB58 @ 0x1409EBB58 (sub_1409EBB58.c)
 *     sub_1409EBD54 @ 0x1409EBD54 (sub_1409EBD54.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 *     sub_1409EC088 @ 0x1409EC088 (sub_1409EC088.c)
 *     sub_1409F5378 @ 0x1409F5378 (sub_1409F5378.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  ETWTRACECONTROLCODE v7; // esi
  unsigned int *v8; // r12
  int *v9; // rdi
  volatile void *v10; // r9
  __int64 v11; // r15
  NTSTATUS v12; // ebx
  char v13; // r8
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  ULONG v17; // r14d
  ULONG v18; // esi
  __int64 v19; // rdx
  int *Pool2; // rax
  __int64 v21; // r9
  PVOID v23; // rcx
  unsigned __int64 v24; // rsi
  void *v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rsi
  PULONG v32; // rcx
  __int64 v33; // rdx
  ETWTRACECONTROLCODE v35; // [rsp+30h] [rbp-68h]
  ULONG v36; // [rsp+34h] [rbp-64h] BYREF
  ULONG v37; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v38; // [rsp+3Ch] [rbp-5Ch]
  int v39; // [rsp+40h] [rbp-58h]
  void *Src; // [rsp+48h] [rbp-50h]
  void *v41; // [rsp+50h] [rbp-48h]
  void *v42; // [rsp+58h] [rbp-40h]

  v7 = FunctionCode;
  v35 = FunctionCode;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  v36 = 0;
  v11 = sub_14045F8A6();
  v12 = 0;
  v39 = 0;
  LOBYTE(v38) = 0;
  if ( v13 )
  {
    v38 = (unsigned int)v7 >> 31;
    v14 = v7 & 0x7FFFFFFF;
    if ( v7 >= 0 )
      v14 = v7;
    v7 = v14;
    v35 = v14;
    v15 = 0x7FFFFFFF0000LL;
    if ( InputBuffer )
    {
      if ( InputBufferLength
        && ((unsigned __int64)InputBuffer + InputBufferLength > 0x7FFFFFFF0000LL
         || (char *)InputBuffer + InputBufferLength < InputBuffer) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      InputBufferLength = 0;
    }
    if ( v10 )
      ProbeForWrite(v10, OutputBufferLength, 1u);
    else
      OutputBufferLength = 0;
    if ( !ReturnLength )
    {
      v12 = -1073741811;
      v39 = -1073741811;
      goto LABEL_161;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v15 = (__int64)ReturnLength;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v12 = v39;
  }
  if ( (unsigned int)v7 <= EtwAddNotificationEvent && (v16 = 134238208, _bittest(&v16, v7)) )
  {
    v17 = OutputBufferLength;
    v18 = InputBufferLength;
  }
  else
  {
    v18 = InputBufferLength;
    v17 = OutputBufferLength;
    if ( InputBufferLength || OutputBufferLength )
    {
      v19 = OutputBufferLength;
      if ( InputBufferLength > OutputBufferLength )
        v19 = InputBufferLength;
      Pool2 = (int *)ExAllocatePool2(257LL, v19, 1350005829LL);
      v9 = Pool2;
      Src = Pool2;
      if ( !Pool2 )
      {
        v12 = -1073741801;
        goto LABEL_161;
      }
      if ( InputBuffer )
        memmove(Pool2, InputBuffer, InputBufferLength);
    }
  }
  switch ( v35 )
  {
    case EtwStartLoggerCode:
    case EtwStopLoggerCode:
    case EtwQueryLoggerCode:
    case EtwUpdateLoggerCode:
    case EtwFlushLoggerCode:
    case EtwIncrementLoggerFile:
    case EtwRealtimeTransition:
      v12 = sub_1406EF10C((__int64)v9, v18, v17, (unsigned int)(v35 - 1));
      if ( v12 >= 0 )
      {
        if ( (unsigned int)v21 <= 6 )
          __asm { jmp     rdx }
        v36 = 176;
      }
      goto LABEL_147;
    case EtwRealtimeConnectCode:
      if ( v18 != 96 || v17 != 96 )
        goto LABEL_61;
      v12 = sub_1406EC524(v9);
      v36 = 96;
      goto LABEL_147;
    case EtwActivityIdCreate:
      if ( v17 != 16 )
        goto LABEL_61;
      v12 = 0;
      sub_1402E10CC(OutputBuffer);
      v24 = (unsigned int)v35;
      goto LABEL_148;
    case EtwWdiScenarioCode:
      if ( v18 != 48 || v17 )
        goto LABEL_61;
      v12 = sub_1406E6A28((unsigned int *)v9);
      goto LABEL_147;
    case EtwRealtimeDisconnectCode:
      if ( v18 != 8 || v17 )
        goto LABEL_61;
      v41 = (void *)sub_140251BD0(*(_DWORD *)InputBuffer);
      v12 = sub_1406EC208(v41);
      goto LABEL_147;
    case EtwRegisterGuidsCode:
      if ( v18 != 160 || v17 - 160 > 0xFF60 )
        goto LABEL_61;
      v12 = sub_140796040(v11, (_DWORD)v9, v17, (unsigned __int8)v38, (__int64)&v36);
      goto LABEL_147;
    case EtwReceiveNotification:
      if ( v18 || v17 - 72 > 0xFFB8 )
        goto LABEL_61;
      v12 = sub_14078EF08(v9, v17, v38, &v36);
      goto LABEL_147;
    case EtwSendDataBlock:
      if ( v18 < 0x48 || v17 != 72 || v9[1] != v18 )
        goto LABEL_61;
      if ( *v9 == 3 )
      {
        if ( v18 < 0x78 )
          goto LABEL_61;
        v12 = sub_14079028C(v11, (__int64)v9, 1);
        v36 = 72;
      }
      else
      {
        v12 = sub_1406EF64C(v11, (__int64)v9, 1);
        v36 = 72;
      }
      goto LABEL_147;
    case EtwSendReplyDataBlock:
      if ( v18 < 0x48 || v9[1] != v18 )
        goto LABEL_61;
      v9[9] = PsGetCurrentThreadProcessId();
      v12 = sub_1406F2000((__int64)v9);
      goto LABEL_147;
    case EtwReceiveReplyDataBlock:
      if ( v18 != 8 )
        goto LABEL_61;
      v37 = 0;
      v12 = sub_1406B9918((unsigned int *)v9, v17, &v37);
      v36 = v37;
      goto LABEL_147;
    case EtwWdiSemUpdate:
      if ( v18 || v17 )
        goto LABEL_61;
      v12 = sub_14062C578();
      goto LABEL_147;
    case EtwEnumTraceGuidList:
      v12 = sub_1409E4C24(v11, v9, v17 >> 4, &v36);
      v36 *= 16;
      goto LABEL_147;
    case EtwGetTraceGuidInfo:
      if ( v18 != 16 )
        goto LABEL_61;
      v36 = v17;
      v12 = sub_14065F10C(v11, v9, v9, &v36);
      goto LABEL_147;
    case EtwEnumerateTraceGuids:
      v12 = sub_1407949D4(v11, (__int64)v9, v17 / 0x24, &v36);
      v36 *= 36;
      goto LABEL_147;
    case EtwRegisterSecurityProv:
      if ( v18 || v17 )
        goto LABEL_61;
      v12 = sub_140865050(v11);
      goto LABEL_147;
    case EtwReferenceTimeCode:
      if ( v18 != 4 || v17 != 16 )
        goto LABEL_61;
      v12 = sub_1409E4E94(v11, (unsigned int)*v9, v9);
      v36 = 16;
      goto LABEL_147;
    case EtwTrackBinaryCode:
      if ( v18 != 8 )
        goto LABEL_61;
      v12 = sub_1406E80C4(v11, (void **)v9);
      goto LABEL_147;
    case EtwAddNotificationEvent:
      if ( v18 != 4 )
        goto LABEL_61;
      v25 = (void *)*(unsigned int *)InputBuffer;
      v42 = v25;
      if ( !v25 )
        goto LABEL_61;
      v12 = sub_140791804(v25, v38);
      goto LABEL_147;
    case EtwUpdateDisallowList:
      if ( v18 < 8 )
        goto LABEL_61;
      v26 = v9[1];
      if ( 16LL * v26 + 8 != v18 )
        goto LABEL_61;
      if ( v26 )
        v8 = (unsigned int *)(v9 + 2);
      v12 = sub_1409E48B8(v11, (unsigned int)*v9, v26, v8);
      goto LABEL_147;
    case EtwSetProviderTraitsCode:
      if ( v18 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_61;
      v12 = sub_140797650((_DWORD)v9, v17, (unsigned int)&v36);
      goto LABEL_147;
    case EtwUseDescriptorTypeCode:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      v12 = sub_1409E4D1C(v9);
      goto LABEL_147;
    case EtwEnumTraceGroupList:
      v12 = sub_140883086(v11, 2, (_DWORD)v9, v17 >> 4, (__int64)&v36);
      v36 *= 16;
      goto LABEL_147;
    case EtwGetTraceGroupInfo:
      if ( v18 != 16 )
        goto LABEL_61;
      v36 = v17;
      v12 = sub_140883164(v11, v9, v9, &v36);
      goto LABEL_147;
    case EtwGetDisallowList:
      if ( v18 != 8 )
        goto LABEL_61;
      v36 = v17;
      v12 = sub_1409E4B48(v11, v9, v9, &v36);
      goto LABEL_147;
    case EtwSetCompressionSettings:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      v12 = sub_1406356A0((unsigned int *)v9);
      goto LABEL_147;
    case EtwGetCompressionSettings:
      if ( v18 != 8 || v17 != 16 )
        goto LABEL_61;
      v36 = 16;
      v12 = sub_140635440((unsigned __int16 *)v9, (unsigned int *)v9);
      goto LABEL_147;
    case EtwUpdatePeriodicCaptureState:
      if ( v18 < 0xC )
        goto LABEL_61;
      v27 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v27 <= 0x10 )
      {
        v28 = (unsigned int)v9[1];
        if ( (unsigned int)(v28 - 1) <= 3 )
        {
          v12 = -1073741811;
          goto LABEL_147;
        }
        if ( (_WORD)v27 )
        {
          if ( !(_DWORD)v28 )
          {
            v12 = -1073741811;
            goto LABEL_147;
          }
        }
        else if ( (_DWORD)v28 )
        {
          goto LABEL_61;
        }
        if ( 16 * v27 + 12 == v18 )
        {
          if ( (_WORD)v27 )
            v8 = (unsigned int *)(v9 + 3);
          v12 = sub_1409EC088((unsigned int)*v9, v28, v27, v8);
          goto LABEL_147;
        }
LABEL_61:
        v12 = -1073741811;
        goto LABEL_147;
      }
      v12 = -1073741811;
LABEL_147:
      v23 = OutputBuffer;
      v24 = (unsigned int)v35;
LABEL_148:
      if ( v12 < 0 )
      {
        v32 = ReturnLength;
      }
      else
      {
        if ( v36 )
        {
          if ( v36 <= v17 )
          {
            memmove(v23, v9, v36);
            v32 = ReturnLength;
            *ReturnLength = v36;
            goto LABEL_155;
          }
          v12 = -1073741789;
          v39 = -1073741789;
        }
        v32 = ReturnLength;
        *ReturnLength = v36;
      }
LABEL_155:
      if ( v12 == -1073741789 && ((unsigned int)(v24 - 15) <= 1 || (unsigned int)(v24 - 21) <= 1)
        || (unsigned int)v24 <= 0x28 && (v33 = 0x1D700880000LL, _bittest64(&v33, v24)) )
      {
        *v32 = v36;
      }
LABEL_161:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return v12;
    case EtwGetPrivateSessionTraceHandle:
      if ( v18 < 8 || (v18 & 7) != 0 || v17 < 2 )
        goto LABEL_61;
      LOWORD(v37) = 0;
      v12 = sub_1409EBB58(v9, v18 >> 3, &v37);
      if ( !v12 )
      {
        v36 = 2;
        *(_WORD *)v9 = v37;
      }
      goto LABEL_147;
    case EtwRegisterPrivateSession:
      if ( v18 < 2 || v17 < 8 )
        goto LABEL_61;
      v12 = sub_1409EBDD0(v11, *(unsigned __int16 *)v9, v9 + 1, v9);
      if ( !v12 )
        v36 = 8;
      goto LABEL_147;
    case EtwQuerySessionDemuxObject:
      if ( v18 < 8 || v17 < 2 )
        goto LABEL_61;
      v12 = sub_1409EBD54(*(_QWORD *)v9, v9);
      if ( !v12 )
        v36 = 2;
      goto LABEL_147;
    case EtwSetProviderBinaryTracking:
      if ( v18 < 8 )
        goto LABEL_61;
      v12 = sub_1409F5378(v11, (unsigned int)*v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_147;
    case EtwMaxLoggers:
      v24 = (unsigned int)v35;
      v23 = OutputBuffer;
      if ( v17 < 4 )
        goto LABEL_135;
      *v9 = *(_DWORD *)(v11 + 16);
      v36 = 4;
      v12 = 0;
      goto LABEL_148;
    case EtwMaxPmcCounter:
      v24 = (unsigned int)v35;
      v23 = OutputBuffer;
      if ( v17 < 4 )
      {
LABEL_135:
        v12 = -1073741811;
      }
      else
      {
        *v9 = *(_DWORD *)((char *)&NlsMbCodePageTag + 5);
        v36 = 4;
        v12 = 0;
      }
      goto LABEL_148;
    case EtwQueryUsedProcessorCount:
      if ( v18 != 8 || v17 < 4 )
        goto LABEL_61;
      v29 = *(unsigned __int16 *)v9;
      if ( (_DWORD)v29 == 0xFFFF )
        v29 = *(unsigned __int8 *)(v11 + 4232);
      v30 = sub_140797594(v11, v29, 0LL);
      v31 = v30;
      if ( v30 )
      {
        v36 = 4;
        *v9 = sub_1402E1C80(v30);
        sub_1407981E8(v31, 0LL);
      }
      else
      {
        v12 = -1073741811;
      }
      goto LABEL_147;
    case EtwGetPmcOwnership:
      v36 = v17;
      v12 = sub_14062CC44(v9, &v36);
      goto LABEL_147;
    default:
      v12 = -1073741808;
      goto LABEL_147;
  }
}
