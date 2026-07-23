/*
 * XREFs of RtlUnwindEx @ 0x1402A4C20
 * Callers:
 *     RtlUnwind @ 0x1403C4090 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403D76B0 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x140433380 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14022E980 (RtlpGetStackLimits.c)
 *     RtlpCopyContext @ 0x1402A5180 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402A5370 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x1402A5960 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext @ 0x14030D1D0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D250 (RtlGetExtendedContextLength.c)
 *     RtlVirtualUnwind @ 0x14030D4E0 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x14030D5B0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030D6A0 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     RtlGuardRestoreContext @ 0x14033FD9C (RtlGuardRestoreContext.c)
 *     KeQueryCurrentStackInformation @ 0x14034E3B0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140353190 (RtlpGetStackLimitsEx.c)
 *     RtlpIsFrameInBounds @ 0x1403C52D0 (RtlpIsFrameInBounds.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14041D4E0 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x140428A70 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140429AA0 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x140435400 (memset.c)
 */

void __cdecl RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  _CONTEXT *p_ContextLength; // r14
  _UNWIND_HISTORY_TABLE *v8; // r13
  char v10; // di
  ULONG v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  ULONG *v16; // r12
  PCONTEXT v17; // rbx
  DWORD64 v18; // r15
  DWORD64 v19; // r13
  int v20; // r9d
  NTSTATUS v21; // eax
  unsigned __int64 v22; // rbx
  int v23; // r15d
  bool v24; // zf
  ULONG v25; // ebx
  unsigned __int64 v26; // rax
  PEXCEPTION_RECORD v27; // rcx
  int v28; // ecx
  int v29; // ecx
  ULONG *v30; // rax
  int v31; // et0
  char v32; // al
  ULONG *v33; // rax
  PEXCEPTION_RECORD v34; // r15
  PCONTEXT v35; // rbx
  PRUNTIME_FUNCTION v36; // r9
  DWORD64 v37; // r10
  PCONTEXT v38; // r11
  unsigned __int64 Rip; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  void *v42; // rsp
  void *v43; // rsp
  ULONG ContextLength; // [rsp+60h] [rbp+0h] BYREF
  int v45; // [rsp+64h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR v47; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v48; // [rsp+78h] [rbp+18h] BYREF
  PEXCEPTION_ROUTINE v49; // [rsp+80h] [rbp+20h] BYREF
  PVOID HandlerData; // [rsp+88h] [rbp+28h] BYREF
  PCONTEXT v51; // [rsp+90h] [rbp+30h]
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+98h] [rbp+38h]
  PCONTEXT_EX ContextEx; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 ImageBase; // [rsp+A8h] [rbp+48h] BYREF
  DWORD64 v55; // [rsp+B0h] [rbp+50h]
  PUNWIND_HISTORY_TABLE v56; // [rsp+B8h] [rbp+58h]
  PVOID v57; // [rsp+C0h] [rbp+60h]
  PVOID v58; // [rsp+C8h] [rbp+68h]
  _QWORD v59[10]; // [rsp+D0h] [rbp+70h] BYREF
  ULONG *v60; // [rsp+120h] [rbp+C0h]
  __int128 v61; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v62; // [rsp+138h] [rbp+D8h]
  _QWORD v63[20]; // [rsp+140h] [rbp+E0h] BYREF

  p_ContextLength = ContextRecord;
  v8 = HistoryTable;
  v58 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v57 = ReturnValue;
  v51 = ContextRecord;
  v56 = HistoryTable;
  memset(v59, 0, sizeof(v59));
  memset(v63, 0, 0x98uLL);
  v49 = 0LL;
  HandlerData = 0LL;
  v48 = 0LL;
  ImageBase = 0LL;
  ContextLength = 0;
  v47 = 0LL;
  v45 = 0;
  KeQueryCurrentStackInformation(&v45, &v47, &v48);
  v10 = v45 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v47, (__int64)&v48) )
LABEL_68:
    RtlRaiseStatus(-1073741784);
  v11 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v11 = 1048715;
    if ( (ContextRecord->ContextFlags & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(0x10008Bu, &ContextLength);
      v40 = ContextLength + 15LL;
      if ( v40 <= ContextLength )
        v40 = 0xFFFFFFFFFFFFFF0LL;
      v41 = v40 & 0xFFFFFFFFFFFFFFF0uLL;
      v42 = alloca(v41);
      v43 = alloca(v41);
      p_ContextLength = (_CONTEXT *)&ContextLength;
      v51 = (PCONTEXT)&ContextLength;
      RtlInitializeExtendedContext((PCONTEXT)&ContextLength, 0x10008Bu, &ContextEx);
    }
  }
  RtlGetExtendedContextLength2(v11, &ContextLength, 0LL);
  v12 = ContextLength + 15LL;
  if ( v12 <= ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v16 = &ContextLength;
  v60 = &ContextLength;
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v11, &ContextEx, 0LL);
  v17 = v51;
  RtlCaptureContext2(v51);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    LODWORD(v63[0]) = -1073741785;
    v63[1] = 0LL;
    Rip = v17->Rip;
    LODWORD(v63[3]) = 0;
    ExceptionRecorda = (PEXCEPTION_RECORD)v63;
    v63[2] = Rip;
  }
  ContextLength = 2;
  if ( !TargetFrame )
    ContextLength = 6;
  BugCheckParameter1 = 0LL;
  while ( 1 )
  {
    v55 = p_ContextLength->Rip;
    v18 = v55;
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(v55, &ImageBase, v8);
    RtlpCopyContext(v16, p_ContextLength);
    v19 = ImageBase;
    v62 = 0LL;
    v61 = 0LL;
    v21 = RtlpxVirtualUnwind(
            2,
            ImageBase,
            v18,
            v20,
            (__int64)v16,
            0LL,
            (__int64)&HandlerData,
            (__int64)&BugCheckParameter1,
            (__int64)&v49,
            (__int64)&v61);
    if ( v21 < 0 )
      RtlRaiseStatus(v21);
    v22 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v48 || BugCheckParameter1 < v47 )
    {
      if ( v10 != 1 )
        goto LABEL_68;
      v10 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_68;
      v22 = BugCheckParameter1;
    }
    if ( TargetFrame && !v10 && (unsigned __int64)TargetFrame < v22 )
      goto LABEL_68;
    if ( v49 )
    {
      v23 = 0;
      v59[4] = v58;
      while ( 1 )
      {
        v24 = TargetFrame == (PVOID)v22;
        v25 = ContextLength;
        if ( v24 )
          v25 = ContextLength | 0x20;
        v26 = (unsigned __int64)v57;
        v27 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v25;
        p_ContextLength->Rax = v26;
        v59[0] = v55;
        v59[2] = ContextEx;
        v59[6] = v49;
        v59[7] = HandlerData;
        v59[8] = v56;
        v59[1] = v19;
        v59[3] = BugCheckParameter1;
        v59[5] = p_ContextLength;
        LODWORD(v59[9]) = v23;
        if ( (p_ContextLength->ContextFlags & 0x100040) == 0x100040 )
        {
          v28 = RtlpExecuteHandlerForUnwind(v27, BugCheckParameter1, p_ContextLength, v59);
        }
        else
        {
          v28 = RtlpExecuteHandlerForUnwind(v27, BugCheckParameter1, p_ContextLength, v59);
          if ( (p_ContextLength->ContextFlags & 0x100040) == 0x100040 )
            p_ContextLength->ContextFlags &= ~0x40u;
        }
        ContextLength = v25 & 0xFFFFFF9F;
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 != 2 )
            RtlRaiseStatus(-1073741786);
          v19 = v59[1];
          v35 = v51;
          v55 = v59[0];
          ImageBase = v59[1];
          ContextEx = (PCONTEXT_EX)v59[2];
          RtlpCopyContext(v51, v59[5]);
          p_ContextLength = v35;
          v16 = v60;
          RtlpCopyContext(v60, v35);
          v49 = RtlVirtualUnwind(2u, v19, v37, v36, v38, &HandlerData, &BugCheckParameter1, 0LL);
          if ( v49 != (PEXCEPTION_ROUTINE)v59[6]
            || (v22 = BugCheckParameter1, BugCheckParameter1 != v59[3])
            || HandlerData != (PVOID)v59[7] )
          {
            __fastfail(0x27u);
          }
          v23 = v59[9];
          ContextLength |= 0x40u;
          v56 = (PUNWIND_HISTORY_TABLE)v59[8];
          if ( (unsigned __int8)RtlpIsFrameInBounds(&v47, BugCheckParameter1, &v48) || v10 != 1 )
            goto LABEL_31;
          v10 = 2;
          RtlpGetStackLimitsEx(v22, 0LL);
        }
        else
        {
          if ( (PVOID)BugCheckParameter1 != TargetFrame )
          {
            v30 = (ULONG *)p_ContextLength;
            p_ContextLength = (_CONTEXT *)v16;
            v16 = v30;
          }
          v31 = _mm_getcsr();
          v45 = v31;
          p_ContextLength->MxCsr = v31;
          p_ContextLength->FltSave.MxCsr = v31;
        }
        v22 = BugCheckParameter1;
LABEL_31:
        if ( (ContextLength & 0x40) == 0 )
        {
          v18 = v55;
          goto LABEL_33;
        }
      }
    }
    if ( (PVOID)v22 != TargetFrame )
    {
      v33 = (ULONG *)p_ContextLength;
      p_ContextLength = (_CONTEXT *)v16;
      v16 = v33;
    }
LABEL_33:
    v32 = 0;
    if ( v10 != 2 )
      v32 = v10;
    if ( (v22 & 7) != 0 || v22 < v47 || v22 >= v48 )
      break;
    if ( (PVOID)v22 == TargetFrame )
      goto LABEL_42;
    v8 = v56;
    v10 = v32;
  }
  if ( (PVOID)v22 == TargetFrame )
  {
LABEL_42:
    v34 = ExceptionRecorda;
    p_ContextLength->Rax = (unsigned __int64)v57;
    if ( v34->ExceptionCode != -2147483607 )
    {
      p_ContextLength->Rip = (unsigned __int64)v58;
      if ( v34->ExceptionCode != -2147483610 )
        v34->ExceptionCode = -1073741785;
    }
    RtlGuardRestoreContext(p_ContextLength, v34);
  }
  else
  {
    if ( v18 == p_ContextLength->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, p_ContextLength, 0);
  }
}
