/*
 * XREFs of TpInitializePackage @ 0x18007F92C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 *     TppQueryMaximumGroupCount @ 0x18009E7B8 (TppQueryMaximumGroupCount.c)
 *     NtQuerySystemInformation @ 0x18009F4B0 (NtQuerySystemInformation.c)
 */

NTSTATUS TpInitializePackage()
{
  ULONG TagHeap; // eax
  NTSTATUS result; // eax
  unsigned __int16 MaximumGroupCount; // ax
  struct _PEB *v3; // rax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap, 0, (PWSTR)L"Threadpool!", (PWSTR)L"Cleanup Group");
  ReturnLength = 0;
  TppHeapTag = TagHeap;
  result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( ReturnLength >= 4
      && (TppNumberNodes = SystemInformation[0] + 1,
          MaximumGroupCount = TppQueryMaximumGroupCount(),
          (TppMaximumGroups = MaximumGroupCount) != 0) )
    {
      v3 = NtCurrentPeb();
      v3->TppWorkerpListLock = 0LL;
      v3 = (struct _PEB *)((char *)v3 + 912);
      v3->Mutant = v3;
      *(_QWORD *)&v3->InheritedAddressSpace = v3;
      return 0;
    }
    else
    {
      return -1073741595;
    }
  }
  return result;
}
