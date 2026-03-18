/*
 * XREFs of CreateMiniNtBootKey @ 0x140B4B5E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x140233370 (ExTryToAcquireFastMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char CreateMiniNtBootKey()
{
  NTSTATUS v0; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v2; // rdi
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  bool v6; // zf
  unsigned __int8 CurrentIrql; // cl
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  struct _FAST_MUTEX FastMutex; // [rsp+80h] [rbp-9h] BYREF
  ULONG Disposition; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+100h] [rbp+77h] BYREF

  Disposition = 0;
  KeyHandle = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x74696E49u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_15;
  swprintf_s(PoolWithTag, 0x100uLL, L"%s\\Control", CmRegistryMachineSystemCurrentControlSet.Buffer);
  v2[255] = 0;
  RtlInitUnicodeString(&DestinationString, v2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v0 < 0 )
    goto LABEL_15;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"MiniNT");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  if ( v0 >= 0 )
    ZwClose(Handle);
  ZwClose(KeyHandle);
  if ( v0 < 0 )
LABEL_15:
    KeBugCheckEx(0x32u, v0, 6uLL, 0LL, 0LL);
  ExFreePoolWithTag(v2, 0);
  LOBYTE(CurrentPrcb) = InitForceInline;
  if ( InitForceInline == 1 )
  {
    memset(&FastMutex, 0, 52);
    ExTryToAcquireFastMutex(&FastMutex);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = KeGetCurrentThread();
    v6 = v5->SpecialApcDisable++ == -1;
    if ( v6 && ($CEA84C04E3712D858E5667A507841A2A *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(CurrentPrcb) = KiIrqlFlags;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  return (char)CurrentPrcb;
}
