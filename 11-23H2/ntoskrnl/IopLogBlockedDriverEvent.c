/*
 * XREFs of IopLogBlockedDriverEvent @ 0x14094524C
 * Callers:
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1402F7ECC (RtlStringCchCopyNW.c)
 *     IoWriteErrorLogEntry @ 0x1403C7310 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x140556748 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall IopLogBlockedDriverEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 GenericErrorLogEntry; // rax
  PVOID v6; // r11

  GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(176);
  if ( GenericErrorLogEntry )
  {
    *(_DWORD *)(GenericErrorLogEntry + 2) = 0x10000;
    *(_DWORD *)(GenericErrorLogEntry + 12) = -1073740764;
    *(_WORD *)(GenericErrorLogEntry + 6) = 48;
    *(_DWORD *)(GenericErrorLogEntry + 20) = a3;
    RtlStringCchCopyNW((NTSTRSAFE_PWSTR)(GenericErrorLogEntry + 48), 0x40uLL, *(STRSAFE_PCNZWCH *)(a1 + 8), 0x3FuLL);
    IoWriteErrorLogEntry(v6);
  }
}
