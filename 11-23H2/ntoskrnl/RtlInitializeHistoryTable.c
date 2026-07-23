/*
 * XREFs of RtlInitializeHistoryTable @ 0x140B6B72C
 * Callers:
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402A5720 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140B6B7FC (RtlpFunctionAddressTableEntry.c)
 *     RtlpInitMachineFrameEntries @ 0x140B737DC (RtlpInitMachineFrameEntries.c)
 */

__int64 RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__cdecl __noreturn *v1)(NTSTATUS); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  ImageBase = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__cdecl __noreturn *)(NTSTATUS))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_140E01955 = i;
    v2 = RtlLookupFunctionEntry((DWORD64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_140E01958 )
      qword_140E01958 = v4;
    if ( v5 > qword_140E01960 )
      qword_140E01960 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  return RtlpInitMachineFrameEntries(RtlpSafeMachineFrameEntries, 4LL);
}
