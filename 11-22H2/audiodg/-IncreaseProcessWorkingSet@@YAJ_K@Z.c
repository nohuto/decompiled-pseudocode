/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14007B034
 * Callers:
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x140003028 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x1400031D4 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x140026164 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14007ABA4 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14007AC94 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B1B4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // ebx
  HANDLE v9; // rax
  unsigned __int64 v10; // rdx
  SIZE_T v11; // rdi
  SIZE_T v12; // rbx
  HANDLE v13; // rax
  ULONG_PTR MaximumWorkingSetSize; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR MinimumWorkingSetSize; // [rsp+68h] [rbp-90h] BYREF
  DWORD Flags[4]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-58h]

  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess >= 0 )
  {
    v9 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v9, &MinimumWorkingSetSize, &MaximumWorkingSetSize, Flags) )
    {
      v10 = (a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL;
      v12 = v19 + v10;
      MaximumWorkingSetSize += v10 + v19 - MinimumWorkingSetSize;
      v11 = MaximumWorkingSetSize;
      MinimumWorkingSetSize = v19 + v10;
      v13 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v13, v12, v11, 0) )
      {
        v8 = 0;
        goto LABEL_9;
      }
    }
    LastError = GetLastError();
  }
  else
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, 14, 0, 0, 0, 0);
  return v8;
}
