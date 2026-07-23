/*
 * XREFs of IoRegisterContainerNotification @ 0x140937220
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 *     sub_1402A4000 @ 0x1402A4000 (sub_1402A4000.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF7D8 @ 0x1402DF7D8 (sub_1402DF7D8.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  NTSTATUS v5; // ebx
  PIO_CONTAINER_NOTIFICATION_FUNCTION v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rsi
  PVOID *v11; // rcx
  PVOID *v12; // rax
  _QWORD *Pool2; // rax
  _QWORD *v14; // rdi
  PVOID v15; // rbp
  void *v16; // r12
  void *v17; // r14
  struct _DEVICE_OBJECT *v18; // rax
  struct _DEVICE_OBJECT *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax

  v5 = 0;
  v7 = CallbackFunction;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength == 32 && *(_DWORD *)NotificationInformation == 32 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = *((_QWORD *)NotificationInformation + 1);
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C474D0, 0LL);
    v11 = (PVOID *)qword_140C474C0;
    while ( v11 != &qword_140C474C0 )
    {
      v12 = v11;
      v11 = (PVOID *)*v11;
      if ( v12[5] == (PVOID)v10 )
      {
        v5 = -1073741791;
        goto LABEL_30;
      }
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 72LL, 1850961737LL);
    v14 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_30;
    }
    v15 = ExRegisterCallback((PCALLBACK_OBJECT)CallbackObject, sub_140937520, Pool2);
    if ( !v15 )
    {
      v5 = -1073741670;
      goto LABEL_28;
    }
    v16 = 0LL;
    switch ( *(_WORD *)v10 )
    {
      case 3:
        v17 = *(void **)(v10 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) & 0x400) != 0 )
        {
          v18 = (struct _DEVICE_OBJECT *)sub_1402A4000(v10);
          v19 = v18;
          if ( v18 )
          {
            v20 = sub_140749588(v18);
            v16 = sub_1402DF7D8(v20, v21, v22, v23);
            ObfDereferenceObject(v19);
          }
          v7 = CallbackFunction;
        }
        *(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) |= 0x1000u;
        break;
      case 4:
        v17 = (void *)v10;
        break;
      case 5:
        v17 = *(void **)(*(_QWORD *)(v10 + 8) + 8LL);
        v5 = sub_1402A34C8(v10, 2, 1);
        if ( v5 < 0 )
        {
LABEL_28:
          ExFreePoolWithTag(v14, 0);
          if ( v15 )
            ExUnregisterCallback(v15);
LABEL_30:
          ExReleasePushLockEx((ULONG_PTR)&qword_140C474D0, 0LL);
          sub_1402F9540((__int64)KeGetCurrentThread());
          return v5;
        }
        break;
      default:
        v5 = -1073741583;
        goto LABEL_28;
    }
    ObfReferenceObject(v17);
    v14[5] = v10;
    v14[2] = v17;
    v14[4] = v15;
    v14[8] = *((_QWORD *)NotificationInformation + 3);
    *((_DWORD *)v14 + 14) = *((_DWORD *)NotificationInformation + 4);
    v14[3] = v7;
    v14[6] = v16;
    *(_QWORD *)CallbackRegistration = v15;
    v24 = (_QWORD *)qword_140C474C8;
    if ( *(PVOID **)qword_140C474C8 != &qword_140C474C0 )
      __fastfail(3u);
    *v14 = &qword_140C474C0;
    v14[1] = v24;
    *v24 = v14;
    qword_140C474C8 = (__int64)v14;
    goto LABEL_30;
  }
  return -1073741582;
}
