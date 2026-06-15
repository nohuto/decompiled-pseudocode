/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x1801641F4
 * Callers:
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180164184 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x1801643C4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  HANDLE v10; // rax
  unsigned __int64 v11; // rdx
  SIZE_T v12; // rdi
  SIZE_T v13; // rbx
  HANDLE v14; // rax
  int v16; // [rsp+20h] [rbp-D8h]
  ULONG_PTR MaximumWorkingSetSize; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR MinimumWorkingSetSize; // [rsp+68h] [rbp-90h] BYREF
  DWORD Flags[4]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-58h]

  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess >= 0 )
  {
    v10 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v10, &MinimumWorkingSetSize, &MaximumWorkingSetSize, Flags) )
    {
      v11 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL;
      v13 = v21 + v11;
      MaximumWorkingSetSize += v11 + v21 - MinimumWorkingSetSize;
      v12 = MaximumWorkingSetSize;
      MinimumWorkingSetSize = v21 + v11;
      v14 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v14, v13, v12, 0) )
      {
        v9 = 0;
        goto LABEL_9;
      }
    }
    LastError = GetLastError();
  }
  else
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
  if ( (byte_1801C3041 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, v8, v16);
  return v9;
}
