/*
 * XREFs of RtlDispatchException @ 0x1402A3CA0
 * Callers:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404290E0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     RtlpCopyContext @ 0x1402A5180 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402A5370 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x1402A5960 (RtlpxVirtualUnwind.c)
 *     RtlVirtualUnwind @ 0x14030D4E0 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x14030D5B0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030D6A0 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     KeQueryCurrentStackInformation @ 0x14034E3B0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x140353190 (RtlpGetStackLimitsEx.c)
 *     RtlLookupExceptionHandler @ 0x1403C47A8 (RtlLookupExceptionHandler.c)
 *     RtlpIsFrameInBounds @ 0x1403C52D0 (RtlpIsFrameInBounds.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140429450 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x140429A20 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x1405A6DE8 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405A6F90 (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  ULONG_PTR v3; // rsi
  int v4; // r15d
  ULONG_PTR Rsp; // rcx
  ULONG v6; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  DWORD64 Rip; // r12
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  _CONTEXT_EX *v13; // rdi
  unsigned __int64 v14; // r13
  DWORD64 v15; // rbx
  int v16; // r15d
  DWORD64 v17; // r9
  char v18; // si
  __int64 v19; // rdi
  DWORD64 v20; // rdx
  ULONG_PTR v21; // rbx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  DWORD64 v25; // rcx
  char v26; // al
  bool v27; // zf
  int v28; // edx
  PRUNTIME_FUNCTION v29; // r9
  DWORD64 v30; // r10
  int v31; // r9d
  DWORD64 v32; // rdi
  char IsFrameInBounds; // al
  int v34; // r15d
  __int64 v35; // rax
  BOOLEAN result; // al
  int v37; // [rsp+60h] [rbp+0h] BYREF
  char v38; // [rsp+64h] [rbp+4h]
  int v39; // [rsp+68h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v41; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v42; // [rsp+80h] [rbp+20h] BYREF
  ULONG ContextLength[2]; // [rsp+88h] [rbp+28h] BYREF
  PEXCEPTION_ROUTINE v44; // [rsp+98h] [rbp+38h] BYREF
  PCONTEXT v45; // [rsp+A0h] [rbp+40h]
  unsigned __int64 ImageBase; // [rsp+A8h] [rbp+48h] BYREF
  PVOID HandlerData; // [rsp+B0h] [rbp+50h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+B8h] [rbp+58h] BYREF
  DWORD64 v49; // [rsp+C0h] [rbp+60h]
  ULONG_PTR v50; // [rsp+C8h] [rbp+68h]
  DWORD64 ControlPc[10]; // [rsp+D0h] [rbp+70h] BYREF
  __int128 v52; // [rsp+120h] [rbp+C0h] BYREF
  __int64 v53; // [rsp+130h] [rbp+D0h]
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+140h] [rbp+E0h] BYREF

  v45 = ContextRecord;
  v50 = (ULONG_PTR)ExceptionRecord;
  v3 = (ULONG_PTR)ExceptionRecord;
  ContextLength[0] = 0;
  memset(ControlPc, 0, sizeof(ControlPc));
  v38 = 0;
  BugCheckParameter1 = 0LL;
  v44 = 0LL;
  HandlerData = 0LL;
  v41 = 0LL;
  ImageBase = 0LL;
  v42 = 0LL;
  v37 = 0;
  memset(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v38 = 1;
    RtlpLogExceptionDispatch(v3, ContextRecord);
  }
  v4 = *(_DWORD *)(v3 + 4) & 0x81;
  v39 = v4;
  KeQueryCurrentStackInformation(&v37, &v42, &v41);
  Rsp = ContextRecord->Rsp;
  v37 = v37 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(Rsp, v3) )
  {
LABEL_49:
    v34 = v4 | 8;
LABEL_61:
    result = 0;
    *(_DWORD *)(v3 + 4) = v34;
    return result;
  }
  v6 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v6 = 1048715;
  RtlGetExtendedContextLength2(v6, ContextLength, 0LL);
  v7 = ContextLength[0] + 15LL;
  if ( v7 <= ContextLength[0] )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  RtlInitializeExtendedContext2((PCONTEXT)&v37, v6, &ContextEx, 0LL);
  RtlpCopyContext(&v37, ContextRecord);
  Rip = ContextRecord->Rip;
  p_HistoryTable = &HistoryTable;
  *(_QWORD *)ContextLength = &HistoryTable;
  v49 = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  while ( 1 )
  {
    v13 = (_CONTEXT_EX *)RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    ContextEx = v13;
    v53 = 0LL;
    v14 = ImageBase;
    v52 = 0LL;
    if ( (int)RtlpxVirtualUnwind(
                1,
                ImageBase,
                Rip,
                (_DWORD)v13,
                (__int64)&v37,
                0LL,
                (__int64)&HandlerData,
                (__int64)&BugCheckParameter1,
                (__int64)&v44,
                (__int64)&v52) < 0 )
    {
LABEL_60:
      v34 = v39;
      goto LABEL_61;
    }
    v15 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < v42 || BugCheckParameter1 >= v41 )
    {
      if ( (_BYTE)v37 == 1 )
      {
        LOBYTE(v37) = 2;
        RtlpGetStackLimitsEx(BugCheckParameter1, v3);
        v15 = BugCheckParameter1;
      }
      else if ( !(_BYTE)v37 )
      {
        v4 = v39;
        goto LABEL_49;
      }
    }
    if ( v44 )
      break;
LABEL_14:
    Rip = HistoryTable.Entry[0].ImageBase;
    if ( (ControlPc[5] & 7) == 0 && ControlPc[5] >= v42 )
    {
      p_HistoryTable = *(_UNWIND_HISTORY_TABLE **)ContextLength;
      if ( ControlPc[5] < v41 )
        continue;
    }
    if ( (_BYTE)v37 != 1 )
      goto LABEL_60;
    LOBYTE(v37) = 0;
    if ( !(unsigned __int8)RtlpGetStackLimitsEx(ControlPc[5], v3) )
      goto LABEL_60;
    p_HistoryTable = *(_UNWIND_HISTORY_TABLE **)ContextLength;
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = (DWORD64)v44;
    *(_DWORD *)(v3 + 4) = v39;
    v18 = 0;
    ControlPc[2] = (DWORD64)v13;
    v19 = 0LL;
    ControlPc[7] = (DWORD64)HandlerData;
    ControlPc[8] = *(_QWORD *)ContextLength;
    ControlPc[0] = Rip;
    ControlPc[1] = v14;
    ControlPc[3] = v15;
    ControlPc[5] = (DWORD64)&v37;
    ControlPc[6] = v17;
    LODWORD(ControlPc[9]) = v16;
    if ( v38 )
    {
      v35 = RtlpLogExceptionHandler(v50, &v37, Rip);
      v15 = BugCheckParameter1;
      v19 = v35;
    }
    v20 = v15;
    v21 = v50;
    v22 = RtlpExecuteHandlerForException(v50, v20, v45, ControlPc);
    if ( v19 )
      *(_DWORD *)(v19 + 1396) = v22;
    v23 = *(_DWORD *)(v21 + 4) & 1;
    v15 = BugCheckParameter1;
    v24 = v23 | v39;
    v25 = v49;
    v39 = v24;
    if ( v49 == BugCheckParameter1 )
    {
      v24 &= ~0x10u;
      v25 = 0LL;
      v39 = v24;
      v49 = 0LL;
    }
    if ( v22 == 1 )
      goto LABEL_26;
    if ( !v22 )
      break;
    v28 = v22 - 2;
    if ( !v28 )
    {
      v32 = ControlPc[3];
      IsFrameInBounds = 1;
      v39 = v24 | 0x10;
      if ( (_BYTE)v37 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v42, ControlPc[3], &v41);
        v25 = v49;
      }
      if ( v32 > v25 || !IsFrameInBounds )
        v49 = v32;
LABEL_26:
      v26 = v37;
      v13 = ContextEx;
      goto LABEL_27;
    }
    if ( v28 != 1 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc[0];
    ImageBase = ControlPc[1];
    RtlpCopyContext(&v37, ControlPc[5]);
    v44 = RtlVirtualUnwind(1u, v30, Rip, v29, (PCONTEXT)&v37, &HandlerData, &BugCheckParameter1, 0LL);
    BugCheckParameter1 = ControlPc[3];
    v13 = (_CONTEXT_EX *)RtlLookupFunctionEntry(Rip, &ImageBase, *(PUNWIND_HISTORY_TABLE *)ContextLength);
    ContextEx = v13;
    if ( v13 != (_CONTEXT_EX *)ControlPc[2]
      || (v14 = ImageBase,
          (int)RtlLookupExceptionHandler((_DWORD)v13, ImageBase, 2, v31, (__int64)&v44, (__int64)&HandlerData) < 0)
      || v44 != (PEXCEPTION_ROUTINE)ControlPc[6]
      || HandlerData != (PVOID)ControlPc[7] )
    {
      __fastfail(0x27u);
    }
    v15 = BugCheckParameter1;
    v16 = ControlPc[9];
    *(_QWORD *)ContextLength = ControlPc[8];
    v18 = 1;
    v27 = (unsigned __int8)RtlpIsFrameInBounds(&v42, BugCheckParameter1, &v41) == 0;
    v26 = v37;
    if ( v27 && (_BYTE)v37 == 1 )
    {
      RtlpGetStackLimitsEx(v15, v50);
      v15 = BugCheckParameter1;
LABEL_40:
      LOBYTE(v37) = 0;
      goto LABEL_28;
    }
LABEL_27:
    if ( v26 == 2 )
      goto LABEL_40;
LABEL_28:
    v27 = v18 == 0;
    v3 = v50;
    if ( v27 )
      goto LABEL_14;
  }
  if ( (v24 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
