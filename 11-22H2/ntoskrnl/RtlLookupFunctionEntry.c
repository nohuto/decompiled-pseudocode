/*
 * XREFs of RtlLookupFunctionEntry @ 0x1402A5370
 * Callers:
 *     RtlDispatchException @ 0x1402A3CA0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     RtlpSameFunction @ 0x1405B1A50 (RtlpSameFunction.c)
 *     MmWriteSystemImageTracepoint @ 0x1406433DC (MmWriteSystemImageTracepoint.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1409763D0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     RtlInitializeHistoryTable @ 0x140B6C818 (RtlInitializeHistoryTable.c)
 *     RtlpInitMachineFrameEntries @ 0x140B74444 (RtlpInitMachineFrameEntries.c)
 *     KiInitDynamicTraceSupport @ 0x140B769B8 (KiInitDynamicTraceSupport.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402A3B60 (RtlpxLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x1402A6530 (RtlpConvertFunctionEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

PRUNTIME_FUNCTION __cdecl RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  unsigned __int64 v9; // r9
  PRUNTIME_FUNCTION result; // rax
  unsigned int *v11; // rdi
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v12; // rbp
  __int64 v13; // r8
  unsigned __int128 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r11
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v18; // r10
  int v19; // r8d
  int i; // r9d
  int v21; // eax
  __int64 Count; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v25; // rdx
  __int64 UnwindInfoAddress; // rax
  DWORD LocalHint; // r9d
  DWORD v28; // r8d
  ULONG_PTR v29; // rdx
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  int *v31; // rdx
  unsigned __int64 v32; // rdx
  __int128 v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_10;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    v31 = &RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01955];
    result = (PRUNTIME_FUNCTION)*((_QWORD *)v31 + 4);
    if ( result )
    {
      v32 = *((_QWORD *)v31 + 3);
      if ( ControlPc >= v32 + result->BeginAddress && ControlPc < v32 + result->EndAddress )
      {
        *ImageBase = v32;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_10;
  if ( ControlPc >= qword_140E01960
    || ControlPc < qword_140E01958
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_35:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v28 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v29 = HistoryTable->Entry[v28].ImageBase;
          FunctionEntry = HistoryTable->Entry[v28].FunctionEntry;
          if ( ControlPc >= v29 + FunctionEntry->BeginAddress && ControlPc < v29 + FunctionEntry->EndAddress )
            break;
          if ( ++v28 >= HistoryTable->Count )
            goto LABEL_10;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v29;
        return (PRUNTIME_FUNCTION)RtlpConvertFunctionEntry();
      }
    }
LABEL_10:
    v34 = 0LL;
    v33 = 0LL;
    if ( ControlPc < *((_QWORD *)&xmmword_140E00030 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
    {
      v11 = (unsigned int *)RtlpxLookupFunctionTable(ControlPc, (__int64)&v33);
    }
    else
    {
      v11 = (unsigned int *)xmmword_140E00030;
      v33 = xmmword_140E00030;
      v34 = qword_140E00040;
    }
    v12 = 0LL;
    if ( !v11 )
      return 0LL;
    v13 = *((_QWORD *)&v33 + 1);
    v14 = HIDWORD(v34) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    *ImageBase = *((_QWORD *)&v33 + 1);
    v15 = *((_QWORD *)&v14 + 1) >> 3;
    if ( (_DWORD)v15 )
    {
      v16 = ControlPc - v13;
      v17 = v11[3 * (unsigned int)(v15 - 1)];
      v18 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)&v11[3 * (unsigned int)(v15 - 1)];
      if ( v16 < v17 )
      {
        v19 = v15 - 2;
        for ( i = 0; v19 >= i; LODWORD(v17) = v18->BeginAddress )
        {
          v21 = (i + v19) >> 1;
          v18 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)&v11[3 * v21];
          if ( v16 < v18->BeginAddress )
          {
            v19 = v21 - 1;
          }
          else
          {
            LODWORD(v17) = v18->BeginAddress;
            if ( v16 < v18[1].BeginAddress )
              break;
            i = v21 + 1;
          }
        }
      }
      if ( v16 >= (unsigned int)v17 && v16 < v18->EndAddress )
        v12 = v18;
    }
    if ( v12 )
    {
      if ( HistoryTable )
      {
        if ( !HistoryTable->Search )
        {
          Count = HistoryTable->Count;
          if ( (unsigned int)Count < 0xC )
          {
            HistoryTable->Count = Count + 1;
            HistoryTable->Entry[Count].ImageBase = *ImageBase;
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v12;
            v23 = *ImageBase + v12->BeginAddress;
            v24 = *ImageBase + v12->EndAddress;
            if ( v23 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v23;
            if ( v24 > HistoryTable->HighAddress )
            {
              HistoryTable->HighAddress = v24;
              v25 = v12;
              goto LABEL_32;
            }
          }
        }
      }
    }
    v25 = v12;
    if ( v12 )
    {
LABEL_32:
      UnwindInfoAddress = v12->UnwindInfoAddress;
      if ( (UnwindInfoAddress & 1) != 0 )
      {
        v25 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)(UnwindInfoAddress + *ImageBase - 1);
        if ( *ImageBase <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v25 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    return v25;
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_35;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
