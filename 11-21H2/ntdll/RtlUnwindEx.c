/*
 * XREFs of RtlUnwindEx @ 0x180038900
 * Callers:
 *     RtlUnwind @ 0x180034F10 (RtlUnwind.c)
 *     __C_specific_handler @ 0x180094060 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A7F50 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 *     RtlpGetStackLimits @ 0x180035498 (RtlpGetStackLimits.c)
 *     RtlInitializeExtendedContext2 @ 0x180036510 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800366B0 (RtlGetExtendedContextLength2.c)
 *     RtlpSanitizeContext @ 0x1800367D8 (RtlpSanitizeContext.c)
 *     RtlpCopyContext @ 0x180038E38 (RtlpCopyContext.c)
 *     RtlVirtualUnwind @ 0x180039050 (RtlVirtualUnwind.c)
 *     RtlpxVirtualUnwind @ 0x180039210 (RtlpxVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180039DA0 (RtlLookupFunctionEntry.c)
 *     RtlLocateExtendedFeature2 @ 0x18007D270 (RtlLocateExtendedFeature2.c)
 *     RtlpSaveX87State @ 0x18008E64C (RtlpSaveX87State.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1800A6E40 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1800A8410 (RtlCaptureContext2.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A8A90 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A8F40 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800A90E0 (RtlpExecuteHandlerForUnwind.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _CONTEXT *p_ContextLength; // r13
  struct _UNWIND_HISTORY_TABLE *v8; // r12
  ULONG v10; // edi
  ULONG64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  struct _CONTEXT *v16; // r15
  struct _CONTEXT *v17; // rbx
  unsigned int v18; // r13d
  ULONG64 v19; // rdi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v20; // r12
  unsigned int ContextFlags; // ecx
  ULONG64 v22; // rsi
  NTSTATUS v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // edi
  DWORD64 v28; // rax
  struct _EXCEPTION_RECORD *v29; // rcx
  int v30; // ecx
  int v31; // ecx
  struct _CONTEXT *v32; // rax
  ULONG v33; // et0
  struct _CONTEXT *v34; // rax
  struct _EXCEPTION_RECORD *v35; // rsi
  ULONG64 v36; // rdi
  PEXCEPTION_ROUTINE v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  void *v40; // rsp
  void *v41; // rsp
  int P1Home; // eax
  int P3Home; // r8d
  unsigned int P1Home_high; // r9d
  unsigned int P3Home_high; // r10d
  ULONG ContextLength; // [rsp+60h] [rbp+0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+8h] BYREF
  PEXCEPTION_ROUTINE v48; // [rsp+70h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp+18h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+80h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+88h] [rbp+28h] BYREF
  struct _CONTEXT *v52; // [rsp+90h] [rbp+30h]
  ULONG64 v53; // [rsp+98h] [rbp+38h]
  unsigned __int64 v54; // [rsp+A0h] [rbp+40h] BYREF
  PUNWIND_HISTORY_TABLE v55; // [rsp+A8h] [rbp+48h]
  PCONTEXT v56; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v57; // [rsp+B8h] [rbp+58h] BYREF
  PVOID v58; // [rsp+C0h] [rbp+60h]
  PVOID v59; // [rsp+C8h] [rbp+68h]
  ULONG64 ControlPc; // [rsp+D0h] [rbp+70h] BYREF
  ULONG64 ImageBase; // [rsp+D8h] [rbp+78h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+E0h] [rbp+80h]
  unsigned __int64 v63; // [rsp+E8h] [rbp+88h]
  PVOID v64; // [rsp+F0h] [rbp+90h]
  struct _CONTEXT *v65; // [rsp+F8h] [rbp+98h]
  EXCEPTION_DISPOSITION (__cdecl *v66)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+100h] [rbp+A0h]
  PVOID v67; // [rsp+108h] [rbp+A8h]
  struct _UNWIND_HISTORY_TABLE *v68; // [rsp+110h] [rbp+B0h]
  int v69; // [rsp+118h] [rbp+B8h]
  __int128 v70; // [rsp+120h] [rbp+C0h] BYREF
  __int64 v71; // [rsp+130h] [rbp+D0h]
  int v72; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v73; // [rsp+148h] [rbp+E8h]
  DWORD64 Rip; // [rsp+150h] [rbp+F0h]
  int v75; // [rsp+158h] [rbp+F8h]

  p_ContextLength = ContextRecord;
  v8 = HistoryTable;
  v59 = TargetIp;
  v52 = ContextRecord;
  v55 = HistoryTable;
  v58 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !RtlpGetStackLimits(&v57, (void **)&v54) )
LABEL_89:
    RtlRaiseStatus(-1073741784);
  RtlpSanitizeContext((__int64)ContextRecord);
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
      v38 = ContextLength + 15LL;
      if ( v38 <= ContextLength )
        v38 = 0xFFFFFFFFFFFFFF0LL;
      v39 = v38 & 0xFFFFFFFFFFFFFFF0uLL;
      v40 = alloca(v39);
      v41 = alloca(v39);
      p_ContextLength = (struct _CONTEXT *)&ContextLength;
      v52 = (struct _CONTEXT *)&ContextLength;
      RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, 0x10004Bu, &ContextEx, 0x800uLL);
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
  v16 = (struct _CONTEXT *)&ContextLength;
  v56 = (PCONTEXT)&ContextLength;
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v10, &ContextEx, v11);
  v17 = p_ContextLength;
  RtlCaptureContext2(p_ContextLength);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    v72 = -1073741785;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v72;
    v73 = 0LL;
    Rip = p_ContextLength->Rip;
    v75 = 0;
  }
  v18 = 2;
  if ( !TargetFrame )
    v18 = 6;
  EstablisherFrame = 0LL;
  while ( 1 )
  {
    v19 = v17->Rip;
    v53 = v19;
    v20 = RtlLookupFunctionEntry(v19, (PULONG64)&ContextEx, v8);
    RtlpCopyContext(v16, v17);
    ContextFlags = v16->ContextFlags;
    if ( ((ContextFlags & 0x10000) == 0 || (ContextFlags & 0x27FEFF80) != 0)
      && (ContextFlags & 0x7FFFF20) != 0x100000
      && (ContextFlags & 0x7FFFFF0) != 0x200000
      && (ContextFlags & 0x7FFFFE0) != 0x400000 )
    {
      goto LABEL_68;
    }
    if ( ((ContextFlags & 0x100040) == 1048640 || (ContextFlags & 0x10040) == 65600) && !MEMORY[0x7FFE03D8]
      || (ContextFlags & 0x100080) == 0x100080 )
    {
      v16->ContextFlags = 1048587;
      goto LABEL_19;
    }
    if ( (ContextFlags & 0x100000) == 0 )
    {
LABEL_68:
      ContextFlags = ContextFlags & 0xF800001F | 0x100000;
      v16->ContextFlags = ContextFlags;
    }
    if ( (ContextFlags & 0x100040) == 0x100040 )
    {
      P1Home = v16[1].P1Home;
      P3Home = v16[1].P3Home;
      if ( P1Home > P3Home
        || (P1Home_high = HIDWORD(v16[1].P1Home),
            P3Home_high = HIDWORD(v16[1].P3Home),
            (int)(P1Home_high + P1Home) < (int)(P3Home_high + P3Home))
        || P1Home_high < 0x530
        || HIDWORD(v16[1].P2Home) != 1232
        || P3Home_high < 0x40
        || (struct _CONTEXT *)((char *)&v16[1] + SLODWORD(v16[1].P2Home)) != v16 )
      {
        v16->ContextFlags = ContextFlags & 0xFFFFFFBF;
      }
    }
LABEL_19:
    v71 = 0LL;
    v22 = (ULONG64)ContextEx;
    v70 = 0LL;
    v23 = RtlpxVirtualUnwind(
            2,
            (_DWORD)ContextEx,
            v19,
            (_DWORD)v20,
            (__int64)v16,
            0LL,
            (__int64)&HandlerData,
            (__int64)&EstablisherFrame,
            (__int64)&v48,
            (__int64)&v70,
            0);
    if ( v23 < 0 )
      RtlRaiseStatus(v23);
    v24 = EstablisherFrame;
    if ( (EstablisherFrame & 7) != 0 )
      goto LABEL_89;
    v25 = v57;
    if ( EstablisherFrame < v57 )
      goto LABEL_89;
    v26 = v54;
    if ( EstablisherFrame >= v54 || TargetFrame && (unsigned __int64)TargetFrame < EstablisherFrame )
      goto LABEL_89;
    if ( v48 )
    {
      v27 = 0;
      v64 = v59;
      do
      {
        if ( TargetFrame == (PVOID)v24 )
          v18 |= 0x20u;
        v28 = (DWORD64)v58;
        v29 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v18;
        v17->Rax = v28;
        ControlPc = v53;
        v66 = v48;
        v67 = HandlerData;
        v68 = v55;
        ImageBase = v22;
        FunctionEntry = v20;
        v63 = EstablisherFrame;
        v65 = v17;
        v69 = v27;
        if ( (v17->ContextFlags & 0x100040) == 0x100040 )
        {
          v30 = RtlpExecuteHandlerForUnwind(v29, EstablisherFrame, v17, &ControlPc);
        }
        else
        {
          v30 = RtlpExecuteHandlerForUnwind(v29, EstablisherFrame, v17, &ControlPc);
          if ( (v17->ContextFlags & 0x100040) == 0x100040 )
            v17->ContextFlags &= ~0x40u;
        }
        v18 &= 0xFFFFFF9F;
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 2 )
            RtlRaiseStatus(-1073741786);
          v36 = ControlPc;
          v22 = ImageBase;
          v20 = FunctionEntry;
          v53 = ControlPc;
          ContextEx = (PCONTEXT_EX)ImageBase;
          RtlpCopyContext(v52, v65);
          v17 = v52;
          v16 = v56;
          RtlpCopyContext(v56, v52);
          v37 = RtlVirtualUnwind(2u, v22, v36, v20, v16, &HandlerData, &EstablisherFrame, 0LL);
          v48 = v37;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v37 != v66 || (v24 = EstablisherFrame, EstablisherFrame != v63) || HandlerData != v67 )
              __fastfail(0x27u);
          }
          else
          {
            v24 = v63;
            v48 = v66;
            HandlerData = v67;
            EstablisherFrame = v63;
          }
          v18 |= 0x40u;
          v27 = v69;
          v55 = v68;
        }
        else
        {
          if ( (PVOID)EstablisherFrame != TargetFrame )
          {
            v32 = v17;
            v17 = v16;
            v16 = v32;
          }
          v33 = _mm_getcsr();
          ContextLength = v33;
          v17->MxCsr = v33;
          v17->FltSave.MxCsr = v33;
          if ( v17->FltSave.ControlWord != 639 || (v17->FltSave.StatusWord & 0xB880) != 0 || v17->FltSave.TagWord )
            RtlpSaveX87State(v17);
          v24 = EstablisherFrame;
        }
      }
      while ( (v18 & 0x40) != 0 );
      v19 = v53;
      v25 = v57;
    }
    else
    {
      if ( (PVOID)EstablisherFrame == TargetFrame )
        goto LABEL_42;
      v34 = v17;
      v17 = v16;
      v16 = v34;
    }
    v26 = v54;
LABEL_42:
    if ( (v24 & 7) != 0 || v24 < v25 || v24 >= v26 )
      break;
    if ( (PVOID)v24 == TargetFrame )
      goto LABEL_50;
    v8 = v55;
  }
  if ( (PVOID)v24 == TargetFrame )
  {
LABEL_50:
    v35 = ExceptionRecorda;
    v17->Rax = (DWORD64)v58;
    if ( v35->ExceptionCode != -2147483607 )
    {
      v17->Rip = (DWORD64)v59;
      if ( v35->ExceptionCode != -2147483610 )
        v35->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v17->Rip);
    RtlGuardRestoreContext(v17, v35);
  }
  else
  {
    if ( v19 == v17->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v17, 0);
  }
}
