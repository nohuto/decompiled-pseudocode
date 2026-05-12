/*
 * XREFs of ?Write@PM_DRIVE@@UEAAJ_KKPEAE@Z @ 0x1C001DEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PM_DRIVE::Write(PM_DRIVE *this, union _LARGE_INTEGER a2, ULONG a3, unsigned __int8 *a4)
{
  PIRP v7; // rax
  int result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  Timeout = a2;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v7 = IoBuildSynchronousFsdRequest(
         4u,
         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 73) + 8LL),
         a4,
         a3,
         &Timeout,
         &Object,
         &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  v7->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 73) + 8LL), v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
