/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140002CB4
 * Callers:
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140005974 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x1400059F4 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x14002D3A0 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14006E350 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14006E3E4 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  HANDLE v4; // rax
  unsigned __int64 v5; // rdx
  SIZE_T v6; // rdi
  SIZE_T v7; // rbx
  HANDLE v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ebx
  signed int LastError; // eax
  ULONG_PTR MaximumWorkingSetSize; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR MinimumWorkingSetSize; // [rsp+68h] [rbp-90h] BYREF
  DWORD Flags[4]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-58h]

  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess < 0 )
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  else
  {
    v4 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v4, &MinimumWorkingSetSize, &MaximumWorkingSetSize, Flags) )
    {
      v5 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL;
      v7 = v19 + v5;
      MaximumWorkingSetSize += v5 + v19 - MinimumWorkingSetSize;
      v6 = MaximumWorkingSetSize;
      MinimumWorkingSetSize = v19 + v5;
      v8 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v8, v7, v6, 0) )
      {
        v12 = 0;
        goto LABEL_5;
      }
    }
    LastError = GetLastError();
  }
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
LABEL_5:
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v10, v9, v11, 14, 0, 0, 0, 0);
  return v12;
}
