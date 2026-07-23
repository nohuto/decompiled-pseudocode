/*
 * XREFs of RtlDispatchException @ 0x18001E860
 * Callers:
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A2E70 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlpIsFrameInBounds @ 0x18001EC20 (RtlpIsFrameInBounds.c)
 *     RtlpSanitizeContext @ 0x180020610 (RtlpSanitizeContext.c)
 *     RtlpCopyContext @ 0x180020748 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180020960 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180020E20 (RtlVirtualUnwind.c)
 *     RtlpxVirtualUnwind @ 0x180021010 (RtlpxVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x180054D00 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x180075CBC (RtlpGetStackLimits.c)
 *     RtlpCallVectoredHandlers @ 0x1800779F8 (RtlpCallVectoredHandlers.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x18007DAC4 (RtlpLookupPrimaryFunctionEntry.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A3D80 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1800A3EA0 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x18010DA88 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x18010DC2C (RtlpLogExceptionHandler.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // bl
  unsigned int v5; // edi
  int v6; // r12d
  ULONG64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  ULONG64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  unsigned __int64 v14; // r14
  int v15; // r8d
  ULONG64 v16; // r12
  unsigned __int64 v17; // rdx
  ULONG64 v18; // rax
  _BYTE *v19; // rcx
  int v20; // r10d
  ULONG64 v21; // r8
  PRUNTIME_FUNCTION v22; // r9
  __int64 v23; // r12
  int v24; // edx
  int v25; // edx
  int v26; // edx
  PEXCEPTION_ROUTINE v27; // rax
  __int64 v29; // rax
  PRUNTIME_FUNCTION v30; // rax
  _BYTE *v31; // r8
  int v32; // ecx
  __int64 v33; // rax
  char v34; // [rsp+60h] [rbp+0h] BYREF
  ULONG ContextLength[2]; // [rsp+68h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+70h] [rbp+10h] BYREF
  PEXCEPTION_ROUTINE v37; // [rsp+78h] [rbp+18h] BYREF
  PVOID HandlerData; // [rsp+80h] [rbp+20h] BYREF
  ULONG64 ControlPc; // [rsp+88h] [rbp+28h]
  PCONTEXT_EX ContextEx; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 ImageBase; // [rsp+98h] [rbp+38h] BYREF
  char v42[8]; // [rsp+A0h] [rbp+40h] BYREF
  char v43[8]; // [rsp+A8h] [rbp+48h] BYREF
  ULONG64 v44; // [rsp+B0h] [rbp+50h] BYREF
  ULONG64 v45; // [rsp+B8h] [rbp+58h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v46; // [rsp+C0h] [rbp+60h]
  unsigned __int64 v47; // [rsp+C8h] [rbp+68h]
  char *v48; // [rsp+D8h] [rbp+78h]
  EXCEPTION_DISPOSITION (__cdecl *v49)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+E0h] [rbp+80h]
  _BYTE *v50; // [rsp+E8h] [rbp+88h]
  _CONTEXT_EX *v51; // [rsp+F0h] [rbp+90h]
  __int64 v52; // [rsp+F8h] [rbp+98h]
  __int128 v53; // [rsp+100h] [rbp+A0h] BYREF
  __int64 v54; // [rsp+110h] [rbp+B0h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+120h] [rbp+C0h] BYREF

  v2 = 0;
  v34 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v34 = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(ExceptionRecord, ContextRecord, 0LL) )
  {
LABEL_30:
    v2 = 1;
  }
  else
  {
    v5 = ExceptionRecord->ExceptionFlags & 0x81;
    if ( (unsigned __int8)RtlpGetStackLimits(v43, v42) )
    {
      RtlpSanitizeContext(ContextRecord);
      v6 = 0;
      v7 = 0LL;
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
      {
        v6 = 64;
        v7 = 2048LL;
      }
      RtlGetExtendedContextLength2(v6 + 1048587, ContextLength, v7);
      v8 = ContextLength[0] + 15LL;
      if ( v8 <= ContextLength[0] )
        v8 = 0xFFFFFFFFFFFFFF0LL;
      v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = alloca(v9);
      v11 = alloca(v9);
      RtlInitializeExtendedContext2((PCONTEXT)&v34, v6 + 1048587, &ContextEx, v7);
      RtlpCopyContext(&v34, ContextRecord);
      Rip = ContextRecord->Rip;
      p_HistoryTable = &HistoryTable;
      HistoryTable.LowAddress = -1LL;
      v14 = 0LL;
      ContextEx = (PCONTEXT_EX)&HistoryTable;
      ControlPc = Rip;
      HistoryTable.Count = 0;
      *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
      HistoryTable.HighAddress = 0LL;
      while ( 1 )
      {
        *(_QWORD *)ContextLength = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
        RtlpSanitizeContext(&v34);
        v15 = Rip;
        v16 = ImageBase;
        v54 = 0LL;
        v53 = 0LL;
        if ( (int)RtlpxVirtualUnwind(
                    1,
                    ImageBase,
                    v15,
                    ContextLength[0],
                    (__int64)&v34,
                    0LL,
                    (__int64)&HandlerData,
                    (__int64)&EstablisherFrame,
                    (__int64)&v37,
                    (__int64)&v53,
                    0) < 0 )
          break;
        if ( !(unsigned __int8)RtlpIsFrameInBounds(v43, EstablisherFrame, v42) )
          goto LABEL_48;
        v18 = (ULONG64)v37;
        if ( v37 )
        {
          v19 = HandlerData;
          v20 = 0;
          while ( 1 )
          {
            v21 = ControlPc;
            v22 = *(PRUNTIME_FUNCTION *)ContextLength;
            v50 = v19;
            v45 = v16;
            v23 = 0LL;
            v51 = ContextEx;
            ExceptionRecord->ExceptionFlags = v5;
            v44 = v21;
            v46 = v22;
            v47 = v17;
            v48 = &v34;
            v49 = (EXCEPTION_DISPOSITION (__cdecl *)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID))v18;
            LODWORD(v52) = v20;
            if ( v34 )
            {
              v29 = RtlpLogExceptionHandler(ExceptionRecord, &v34, v21, v18);
              v17 = EstablisherFrame;
              v23 = v29;
            }
            v24 = RtlpExecuteHandlerForException(ExceptionRecord, v17, ContextRecord, &v44);
            if ( v23 )
              *(_DWORD *)(v23 + 1396) = v24;
            v5 |= ExceptionRecord->ExceptionFlags & 1;
            if ( v14 == EstablisherFrame )
            {
              v5 &= ~0x10u;
              v14 = 0LL;
            }
            if ( !v24 )
              break;
            v25 = v24 - 1;
            if ( !v25 )
              goto LABEL_13;
            v26 = v25 - 1;
            if ( !v26 )
            {
              v5 |= 0x10u;
              if ( v47 > v14 )
                v14 = v47;
              goto LABEL_13;
            }
            if ( v26 != 1 )
              RtlRaiseStatus(-1073741786);
            v16 = v45;
            ControlPc = v44;
            *(_QWORD *)ContextLength = v46;
            ImageBase = v45;
            RtlpCopyContext(&v34, v48);
            v27 = RtlVirtualUnwind(
                    1u,
                    v16,
                    ControlPc,
                    *(PRUNTIME_FUNCTION *)ContextLength,
                    (PCONTEXT)&v34,
                    &HandlerData,
                    &EstablisherFrame,
                    0LL);
            v17 = v47;
            v37 = v27;
            EstablisherFrame = v47;
            if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
            {
              v30 = RtlLookupFunctionEntry(ControlPc, &ImageBase, (PUNWIND_HISTORY_TABLE)ContextEx);
              *(_QWORD *)ContextLength = v30;
              if ( v30 != v46 )
                goto LABEL_45;
              v16 = ImageBase;
              v31 = (_BYTE *)(v16 + *(unsigned int *)(RtlpLookupPrimaryFunctionEntry(v30, ImageBase) + 8));
              if ( (*v31 & 0x10) != 0 )
              {
                v32 = (unsigned __int8)v31[2];
                v33 = (unsigned int)(v32 + 1);
                if ( (v32 & 1) == 0 )
                  v33 = (unsigned __int8)v31[2];
                v19 = &v31[2 * (unsigned int)(v33 + 2) + 4];
                HandlerData = v19;
                v18 = v16 + *(unsigned int *)&v31[2 * v33 + 4];
                v37 = (PEXCEPTION_ROUTINE)v18;
              }
              else
              {
                v18 = (ULONG64)v37;
                v19 = HandlerData;
              }
              if ( (EXCEPTION_DISPOSITION (__cdecl *)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID))v18 != v49
                || v19 != v50 )
              {
LABEL_45:
                __fastfail(0x27u);
              }
              v17 = EstablisherFrame;
            }
            else
            {
              v18 = (ULONG64)v49;
              v19 = v50;
              v37 = v49;
              HandlerData = v50;
            }
            v20 = v52;
            ContextEx = v51;
          }
          if ( (v5 & 1) != 0 )
            RtlRaiseStatus(-1073741787);
          goto LABEL_30;
        }
LABEL_13:
        Rip = HistoryTable.Entry[2].ImageBase;
        ControlPc = HistoryTable.Entry[2].ImageBase;
        if ( !(unsigned __int8)RtlpIsFrameInBounds(v43, v52, v42) )
          break;
        p_HistoryTable = (struct _UNWIND_HISTORY_TABLE *)ContextEx;
      }
    }
    else
    {
LABEL_48:
      v5 |= 8u;
    }
    ExceptionRecord->ExceptionFlags = v5;
  }
  RtlpCallVectoredHandlers(ExceptionRecord, ContextRecord, 1LL);
  return v2;
}
