/*
 * XREFs of RtlUnwindEx @ 0x180020160
 * Callers:
 *     RtlUnwind @ 0x1800547E0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x18008EFF0 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A2D90 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlpSanitizeContext @ 0x180020610 (RtlpSanitizeContext.c)
 *     RtlpCopyContext @ 0x180020748 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180020E20 (RtlVirtualUnwind.c)
 *     RtlpxVirtualUnwind @ 0x180021010 (RtlpxVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x180054D00 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 *     RtlpGetStackLimits @ 0x180075CBC (RtlpGetStackLimits.c)
 *     RtlLocateExtendedFeature2 @ 0x1800765C0 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1800A1C20 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1800A3250 (RtlCaptureContext2.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A38D0 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A3D80 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800A3F20 (RtlpExecuteHandlerForUnwind.c)
 *     RtlpSaveX87State @ 0x1800AEC4C (RtlpSaveX87State.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v6; // r13
  struct _CONTEXT *p_ContextLength; // r15
  ULONG v10; // edi
  ULONG64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  PM128A v16; // rbx
  struct _CONTEXT *v17; // rdi
  unsigned int v18; // r14d
  NTSTATUS v19; // eax
  PM128A v20; // rcx
  int Rsi; // r13d
  PM128A v22; // rax
  DWORD ContextFlags; // ebx
  int v24; // edx
  int v25; // edx
  struct _M128A *v26; // rax
  ULONG v27; // et0
  struct _M128A *v28; // rax
  ULONG64 v29; // r13
  unsigned __int128 v30; // kr00_16
  struct _M128A *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  void *v34; // rsp
  void *v35; // rsp
  ULONG ContextLength; // [rsp+60h] [rbp+0h] BYREF
  struct _KNONVOLATILE_CONTEXT_POINTERS HandlerData; // [rsp+68h] [rbp+8h] BYREF

  v6 = HistoryTable;
  p_ContextLength = ContextRecord;
  HandlerData.FloatingContext[12] = (PM128A)TargetIp;
  HandlerData.FloatingContext[7] = (PM128A)HistoryTable;
  HandlerData.FloatingContext[11] = (PM128A)ReturnValue;
  if ( !(unsigned __int8)RtlpGetStackLimits(&HandlerData.Xmm9, &HandlerData.Xmm10) )
LABEL_65:
    RtlRaiseStatus(-1073741784);
  RtlpSanitizeContext(ContextRecord);
  v10 = 1048587;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    v10 = 1048651;
    if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040
      && RtlLocateExtendedFeature2(&ContextRecord[1], 11LL, 2147353560LL) )
    {
      v11 = 2048LL;
    }
    else
    {
      v11 = 2048LL;
      RtlGetExtendedContextLength2(0x10004Bu, &ContextLength, 0x800uLL);
      v32 = ContextLength + 15LL;
      if ( v32 <= ContextLength )
        v32 = 0xFFFFFFFFFFFFFF0LL;
      v33 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
      v34 = alloca(v33);
      v35 = alloca(v33);
      p_ContextLength = (struct _CONTEXT *)&ContextLength;
      RtlInitializeExtendedContext2(
        (PCONTEXT)&ContextLength,
        0x10004Bu,
        (PCONTEXT_EX *)&HandlerData.FloatingContext[1],
        0x800uLL);
    }
  }
  else
  {
    v11 = 0LL;
  }
  RtlGetExtendedContextLength2(v10, &ContextLength, v11);
  v12 = ContextLength + 15LL;
  if ( v12 <= ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  HandlerData.FloatingContext[8] = (PM128A)&ContextLength;
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v10, (PCONTEXT_EX *)&HandlerData.FloatingContext[1], v11);
  v16 = (PM128A)&ContextLength;
  HandlerData.FloatingContext[2] = (PM128A)&ContextLength;
  v17 = p_ContextLength;
  RtlCaptureContext2(p_ContextLength);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    LODWORD(HandlerData.R11) = -1073741785;
    ExceptionRecord = (PEXCEPTION_RECORD)&HandlerData.R11;
    HandlerData.IntegerContext[12] = 0LL;
    HandlerData.IntegerContext[13] = (PDWORD64)p_ContextLength->Rip;
    LODWORD(HandlerData.R14) = 0;
  }
  HandlerData.FloatingContext[0] = 0LL;
  v18 = TargetFrame != 0LL ? 2 : 6;
  while ( 1 )
  {
    HandlerData.FloatingContext[1] = (PM128A)v17->Rip;
    HandlerData.FloatingContext[3] = (PM128A)RtlLookupFunctionEntry(
                                               (ULONG64)HandlerData.FloatingContext[1],
                                               (PULONG64)&HandlerData.FloatingContext[4],
                                               v6);
    RtlpCopyContext(v16, v17);
    RtlpSanitizeContext(v16);
    memset(&HandlerData.Rdi, 0, 24);
    v19 = RtlpxVirtualUnwind(
            2,
            HandlerData.Xmm4,
            HandlerData.Xmm1,
            HandlerData.Xmm3,
            (__int64)v16,
            0LL,
            (__int64)&HandlerData.FloatingContext[6],
            (__int64)&HandlerData,
            (__int64)&HandlerData.FloatingContext[5],
            (__int64)&HandlerData.IntegerContext[7],
            0);
    if ( v19 < 0 )
      RtlRaiseStatus(v19);
    v20 = HandlerData.FloatingContext[0];
    if ( ((__int64)HandlerData.FloatingContext[0] & 7) != 0
      || HandlerData.FloatingContext[0] < HandlerData.FloatingContext[9]
      || HandlerData.FloatingContext[0] >= HandlerData.FloatingContext[10]
      || TargetFrame && TargetFrame < HandlerData.FloatingContext[0] )
    {
      goto LABEL_65;
    }
    if ( HandlerData.FloatingContext[5] )
    {
      Rsi = 0;
      HandlerData.IntegerContext[1] = &HandlerData.FloatingContext[12]->Low;
      do
      {
        if ( TargetFrame == v20 )
          v18 |= 0x20u;
        v22 = HandlerData.FloatingContext[11];
        ExceptionRecord->ExceptionFlags = v18;
        v17->Rax = (DWORD64)v22;
        HandlerData.FloatingContext[13] = HandlerData.FloatingContext[1];
        HandlerData.FloatingContext[14] = HandlerData.FloatingContext[4];
        HandlerData.FloatingContext[15] = HandlerData.FloatingContext[3];
        *(_OWORD *)&HandlerData.Rbx = *(_OWORD *)&HandlerData.Xmm5;
        HandlerData.IntegerContext[5] = &HandlerData.FloatingContext[7]->Low;
        HandlerData.IntegerContext[0] = &HandlerData.FloatingContext[0]->Low;
        HandlerData.IntegerContext[2] = &v17->P1Home;
        LODWORD(HandlerData.Rsi) = Rsi;
        ContextFlags = v17->ContextFlags;
        v24 = RtlpExecuteHandlerForUnwind(ExceptionRecord, HandlerData.FloatingContext[0], v17, &HandlerData.Xmm13);
        if ( (ContextFlags & 0x100040) != 0x100040 && (v17->ContextFlags & 0x100040) == 0x100040 )
          v17->ContextFlags &= ~0x40u;
        v18 &= 0xFFFFFF9F;
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 != 2 )
            RtlRaiseStatus(-1073741786);
          v30 = *(_OWORD *)&HandlerData.Xmm13;
          HandlerData.FloatingContext[4] = (PM128A)(v30 >> 64);
          v29 = v30;
          HandlerData.FloatingContext[3] = HandlerData.FloatingContext[15];
          HandlerData.FloatingContext[1] = HandlerData.FloatingContext[13];
          RtlpCopyContext(p_ContextLength, HandlerData.IntegerContext[2]);
          HandlerData.FloatingContext[2] = HandlerData.FloatingContext[8];
          v17 = p_ContextLength;
          v16 = HandlerData.FloatingContext[8];
          RtlpCopyContext(HandlerData.FloatingContext[8], p_ContextLength);
          v31 = (struct _M128A *)RtlVirtualUnwind(
                                   2u,
                                   (ULONG64)HandlerData.FloatingContext[4],
                                   v29,
                                   (PRUNTIME_FUNCTION)HandlerData.FloatingContext[3],
                                   (PCONTEXT)v16,
                                   (PVOID *)&HandlerData.FloatingContext[6],
                                   (PULONG64)&HandlerData,
                                   0LL);
          HandlerData.FloatingContext[5] = v31;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v31 != (struct _M128A *)HandlerData.IntegerContext[3]
              || (v20 = HandlerData.FloatingContext[0],
                  HandlerData.FloatingContext[0] != (PM128A)HandlerData.IntegerContext[0])
              || HandlerData.FloatingContext[6] != (PM128A)HandlerData.IntegerContext[4] )
            {
              __fastfail(0x27u);
            }
          }
          else
          {
            v20 = (PM128A)HandlerData.IntegerContext[0];
            *(_OWORD *)&HandlerData.Xmm5 = *(_OWORD *)&HandlerData.Rbx;
            HandlerData.FloatingContext[0] = (PM128A)HandlerData.IntegerContext[0];
          }
          v18 |= 0x40u;
          Rsi = (int)HandlerData.Rsi;
          HandlerData.FloatingContext[7] = (PM128A)HandlerData.IntegerContext[5];
        }
        else
        {
          if ( HandlerData.FloatingContext[0] == TargetFrame )
          {
            v16 = HandlerData.FloatingContext[2];
          }
          else
          {
            v26 = (struct _M128A *)v17;
            v17 = (struct _CONTEXT *)HandlerData.FloatingContext[2];
            v16 = v26;
            HandlerData.FloatingContext[2] = v26;
          }
          v27 = _mm_getcsr();
          ContextLength = v27;
          v17->MxCsr = v27;
          v17->FltSave.MxCsr = v27;
          if ( v17->FltSave.ControlWord != 639 || (v17->FltSave.StatusWord & 0xB880) != 0 || v17->FltSave.TagWord )
            RtlpSaveX87State(v17);
          v20 = HandlerData.FloatingContext[0];
        }
      }
      while ( (v18 & 0x40) != 0 );
      v6 = (struct _UNWIND_HISTORY_TABLE *)HandlerData.FloatingContext[7];
    }
    else if ( HandlerData.FloatingContext[0] != TargetFrame )
    {
      v28 = (struct _M128A *)v17;
      v17 = (struct _CONTEXT *)v16;
      v16 = v28;
      HandlerData.FloatingContext[2] = v28;
    }
    if ( ((unsigned __int8)v20 & 7) != 0
      || v20 < HandlerData.FloatingContext[9]
      || v20 >= HandlerData.FloatingContext[10] )
    {
      break;
    }
    if ( v20 == TargetFrame )
      goto LABEL_37;
  }
  if ( v20 == TargetFrame )
  {
LABEL_37:
    v17->Rax = (DWORD64)HandlerData.FloatingContext[11];
    if ( ExceptionRecord->ExceptionCode != -2147483607 )
    {
      v17->Rip = (DWORD64)HandlerData.FloatingContext[12];
      if ( ExceptionRecord->ExceptionCode != -2147483610 )
        ExceptionRecord->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v17->Rip);
    RtlGuardRestoreContext(v17, ExceptionRecord);
  }
  else
  {
    if ( HandlerData.FloatingContext[1] == (PM128A)v17->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecord, v17, 0);
  }
}
