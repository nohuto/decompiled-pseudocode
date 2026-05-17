/*
 * XREFs of RtlLookupFunctionEntry @ 0x180039DA0
 * Callers:
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     RtlInitializeHistoryTable @ 0x1800809AC (RtlInitializeHistoryTable.c)
 *     RtlpSameFunction @ 0x1800852D4 (RtlpSameFunction.c)
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180093890 (__report_gsfailure.c)
 *     InitSpecialMachineFrames @ 0x1800B07CE (InitSpecialMachineFrames.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18007E2F4 (RtlpLookupDynamicFunctionEntry.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // rdi
  __int64 v7; // r8
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rsi
  unsigned __int128 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r11
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // r10
  int v14; // r8d
  int i; // r9d
  int v16; // eax
  PRUNTIME_FUNCTION result; // rax
  __int64 UnwindInfoAddress; // rcx
  DWORD LocalHint; // r10d
  DWORD v20; // edx
  DWORD64 v21; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 Count; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  DWORD64 v26; // rdx
  unsigned int GlobalHint; // ecx
  unsigned int v28; // edx
  unsigned int *v29; // r9
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( HistoryTable )
  {
    if ( HistoryTable->Once )
    {
      HistoryTable->Once = 0;
      result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18018F425 + 8];
      if ( result )
      {
        v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18018F425 + 6];
        if ( ControlPc >= v31 + result->BeginAddress && ControlPc < v31 + result->EndAddress )
        {
          *ImageBase = v31;
          return result;
        }
      }
    }
    if ( HistoryTable->Search )
    {
      if ( ControlPc >= qword_18018F428 && ControlPc < qword_18018F430 )
      {
        GlobalHint = HistoryTable->GlobalHint;
        v28 = GlobalHint;
        if ( GlobalHint < RtlpUnwindHistoryTable[0] )
        {
          while ( 1 )
          {
            v29 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v28 + 8];
            v30 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v28 + 6];
            if ( ControlPc >= v30 + *v29 && ControlPc < v30 + v29[1] )
              break;
            if ( ++v28 >= RtlpUnwindHistoryTable[0] )
              goto LABEL_27;
          }
          result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v28 + 8];
          HistoryTable->GlobalHint = GlobalHint + 1;
          *ImageBase = v30;
          return result;
        }
      }
LABEL_27:
      if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
      {
        LocalHint = HistoryTable->LocalHint;
        v20 = LocalHint;
        if ( LocalHint < HistoryTable->Count )
        {
          while ( 1 )
          {
            v21 = HistoryTable->Entry[v20].ImageBase;
            FunctionEntry = HistoryTable->Entry[v20].FunctionEntry;
            if ( ControlPc >= v21 + FunctionEntry->BeginAddress && ControlPc < v21 + FunctionEntry->EndAddress )
              break;
            if ( ++v20 >= HistoryTable->Count )
              goto LABEL_2;
          }
          v26 = HistoryTable->Entry[v20].ImageBase;
          HistoryTable->LocalHint = LocalHint + 1;
          *ImageBase = v21;
          return (PRUNTIME_FUNCTION)RtlpConvertFunctionEntry(FunctionEntry, v26);
        }
      }
    }
  }
LABEL_2:
  if ( ControlPc < *((_QWORD *)&xmmword_18018F510 + 1)
    || ControlPc >= *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned __int64)(unsigned int)qword_18018F520 )
  {
    v6 = RtlpxLookupFunctionTable(ControlPc, &v32);
  }
  else
  {
    v6 = xmmword_18018F510;
    v32 = xmmword_18018F510;
    v33 = qword_18018F520;
  }
  if ( v6 )
  {
    v7 = *((_QWORD *)&v32 + 1);
    v8 = 0LL;
    v9 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    *ImageBase = *((_QWORD *)&v32 + 1);
    v10 = *((_QWORD *)&v9 + 1) >> 3;
    if ( (_DWORD)v10 )
    {
      v11 = ControlPc - v7;
      v12 = *(unsigned int *)(v6 + 12LL * (unsigned int)(v10 - 1));
      v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (unsigned int)(v10 - 1));
      if ( v11 < v12 )
      {
        v14 = v10 - 2;
        for ( i = 0; v14 >= i; LODWORD(v12) = v13->BeginAddress )
        {
          v16 = (v14 + i) >> 1;
          v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v16);
          if ( v11 >= v13->BeginAddress )
          {
            LODWORD(v12) = v13->BeginAddress;
            if ( v11 < v13[1].BeginAddress )
              break;
            i = v16 + 1;
          }
          else
          {
            v14 = v16 - 1;
          }
        }
      }
      if ( v11 >= (unsigned int)v12 && v11 < v13->EndAddress )
        v8 = v13;
    }
  }
  else
  {
    v8 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
  }
  if ( !v8 )
    goto LABEL_16;
  if ( !HistoryTable )
    goto LABEL_16;
  if ( HistoryTable->Search )
    goto LABEL_16;
  Count = HistoryTable->Count;
  if ( (unsigned int)Count >= 0xC )
    goto LABEL_16;
  HistoryTable->Count = Count + 1;
  HistoryTable->Entry[Count].ImageBase = *ImageBase;
  HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v8;
  v24 = *ImageBase + v8->BeginAddress;
  v25 = *ImageBase + v8->EndAddress;
  if ( v24 < HistoryTable->LowAddress )
    HistoryTable->LowAddress = v24;
  if ( v25 > HistoryTable->HighAddress )
  {
    HistoryTable->HighAddress = v25;
    result = v8;
  }
  else
  {
LABEL_16:
    result = v8;
    if ( !v8 )
      return result;
  }
  UnwindInfoAddress = v8->UnwindInfoAddress;
  if ( (UnwindInfoAddress & 1) != 0 )
    return (PRUNTIME_FUNCTION)(UnwindInfoAddress + *ImageBase - 1);
  return result;
}
