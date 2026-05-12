/*
 * XREFs of ?Flush@PM_DRIVE@@QEAAJXZ @ 0x1C001EFE0
 * Callers:
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PM_DRIVE::Flush(PM_DRIVE *this)
{
  PIRP v2; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = IoBuildSynchronousFsdRequest(
         9u,
         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 73) + 8LL),
         0LL,
         0,
         0LL,
         &Event,
         &IoStatusBlock);
  if ( !v2 )
    return -1073741670;
  v2->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 73) + 8LL), v2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
