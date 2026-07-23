/*
 * XREFs of ExUnregisterCallback @ 0x14025DE40
 * Callers:
 *     sub_1403D87A8 @ 0x1403D87A8 (sub_1403D87A8.c)
 *     sub_140609A70 @ 0x140609A70 (sub_140609A70.c)
 *     KeRegisterProcessorChangeCallback @ 0x140858460 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140937460 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x1409617F0 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x1409C5980 (SeUnregisterImageVerificationCallback.c)
 *     sub_140B2CD08 @ 0x140B2CD08 (sub_140B2CD08.c)
 *     IoUnregisterBootDriverCallback @ 0x140B316B0 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // r14
  KIRQL i; // al
  KIRQL v4; // di
  _QWORD *v5; // rdx
  PVOID *v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax

  v1 = (KSPIN_LOCK *)*((_QWORD *)CallbackRegistration + 2);
  for ( i = KeAcquireSpinLockRaiseToDpc(v1 + 1); ; i = KeAcquireSpinLockRaiseToDpc(v1 + 1) )
  {
    v4 = i;
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&stru_140C15860);
    KeReleaseSpinLockFromDpcLevel(v1 + 1);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    KeWaitForSingleObject(&stru_140C15860, Executive, 0, 0, 0LL);
  }
  v5 = *(_QWORD **)CallbackRegistration;
  v6 = (PVOID *)*((_QWORD *)CallbackRegistration + 1);
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration || *v6 != CallbackRegistration )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  KeReleaseSpinLockFromDpcLevel(v1 + 1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && v4 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = *((_QWORD *)v13 + 4375);
        v15 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v11 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v11 )
          sub_140418E4C(v13);
      }
    }
  }
  __writecr8(v4);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObject(v1);
}
