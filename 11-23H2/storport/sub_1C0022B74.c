/*
 * XREFs of sub_1C0022B74 @ 0x1C0022B74
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C0022B74(__int64 a1, IRP *a2)
{
  char v4; // cl
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  char v6; // al
  struct _SECURITY_QUALITY_OF_SERVICE *v7; // rcx
  unsigned int v8; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  v4 = *(_BYTE *)(a1 + 448);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v6 = 1;
  if ( (v4 & 1) != 0 )
  {
    if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    {
      *(_QWORD *)&SecurityContext[2].DesiredAccess = 0LL;
      SecurityContext[1].FullCreateOptions = -2147483631;
    }
    else
    {
      SecurityContext[1].SecurityQos = 0LL;
      SecurityContext[2].DesiredAccess = -2147483631;
    }
    v8 = -2147483631;
    v6 = 48;
  }
  else
  {
    *(_BYTE *)(a1 + 448) = v4 | 1;
    v7 = *(struct _SECURITY_QUALITY_OF_SERVICE **)(a1 + 8);
    if ( BYTE2(SecurityContext->SecurityQos) == 40 )
      *(_QWORD *)&SecurityContext[2].DesiredAccess = v7;
    else
      SecurityContext[1].SecurityQos = v7;
    v8 = 0;
  }
  BYTE3(SecurityContext->SecurityQos) = v6;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return sub_1C0003440(a2, 0, v8);
}
