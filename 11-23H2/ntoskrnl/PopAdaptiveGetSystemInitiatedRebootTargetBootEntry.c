/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099B9C0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059E358 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(void *a1, GUID *a2)
{
  GUID *Pool2; // rdi
  NTSTATUS ElementDataWithFlags; // ebx
  BCD_FLAGS v5; // r8d
  BCD_FLAGS v6; // r8d
  GUID v7; // xmm0
  ULONG BufferSize; // [rsp+50h] [rbp+18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+58h] [rbp+20h] BYREF

  BcdObjectHandle = (HANDLE)-1LL;
  Pool2 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( ElementDataWithFlags >= 0 )
  {
    BufferSize = 0;
    ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, 0x24000002u, v5, 0LL, &BufferSize);
    if ( ElementDataWithFlags == -1073741789 )
    {
      Pool2 = (GUID *)ExAllocatePool2(256LL, BufferSize, 1734960208LL);
      if ( !Pool2 )
      {
        ElementDataWithFlags = -1073741670;
        goto LABEL_12;
      }
      ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, 0x24000002u, v6, Pool2, &BufferSize);
    }
    if ( ElementDataWithFlags == -1073741275 )
      goto LABEL_10;
    if ( ElementDataWithFlags < 0 )
      goto LABEL_12;
    if ( !BufferSize )
LABEL_10:
      v7 = GUID_DEFAULT_BOOT_ENTRY;
    else
      v7 = *Pool2;
    *a2 = v7;
    ElementDataWithFlags = 0;
  }
LABEL_12:
  if ( BcdObjectHandle != (HANDLE)-1LL )
    BcdCloseObject(BcdObjectHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x67696450u);
  return (unsigned int)ElementDataWithFlags;
}
