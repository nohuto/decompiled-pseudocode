/*
 * XREFs of ObRegisterCallbacks @ 0x14085AE70
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403C773C (MmVerifyCallbackFunctionCheckFlags.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObpInsertCallbackByAltitude @ 0x14085B02C (ObpInsertCallbackByAltitude.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  int OperationRegistrationCount; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  _WORD *v8; // rsi
  size_t Length; // r8
  void *v10; // rcx
  unsigned int v11; // ebp
  OB_OPERATION_REGISTRATION *v12; // r14
  unsigned __int64 PreOperation; // rcx
  unsigned __int64 PostOperation; // rcx
  struct _EX_RUNDOWN_REF *v15; // rbx
  POBJECT_TYPE v16; // rcx
  NTSTATUS inserted; // ebx
  __int64 v18; // rax
  _QWORD *v20; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct _KTHREAD *v24; // rax
  bool v25; // zf

  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  v5 = 0;
  if ( !(_WORD)OperationRegistrationCount )
    return -1073741811;
  v6 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  Pool2 = ExAllocatePool2(256LL, v6, 1816552015LL);
  v8 = (_WORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_WORD *)Pool2 = 256;
  *(_QWORD *)(Pool2 + 8) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  *(_WORD *)(Pool2 + 18) = Length;
  *(_WORD *)(Pool2 + 16) = Length;
  v10 = (void *)(Pool2 + v6 - (unsigned int)Length);
  *(_QWORD *)(Pool2 + 24) = v10;
  memmove(v10, CallbackRegistration->Altitude.Buffer, Length);
  v11 = 0;
  if ( CallbackRegistration->OperationRegistrationCount )
  {
    while ( 1 )
    {
      v12 = &CallbackRegistration->OperationRegistration[v11];
      if ( !v12->Operations || ((*v12->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
      {
LABEL_19:
        inserted = -1073741811;
        goto LABEL_20;
      }
      PreOperation = (unsigned __int64)v12->PreOperation;
      if ( PreOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
          break;
      }
      else if ( !v12->PostOperation )
      {
        goto LABEL_19;
      }
      PostOperation = (unsigned __int64)v12->PostOperation;
      if ( PostOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PostOperation, 32) )
          break;
      }
      v15 = (struct _EX_RUNDOWN_REF *)&v8[32 * (unsigned __int64)v11 + 16];
      v15[1].Count = (unsigned __int64)v15;
      v15->Count = (unsigned __int64)v15;
      ExInitializePushLock(v15 + 7);
      LODWORD(v15[2].Count) = v12->Operations;
      v15[3].Count = (unsigned __int64)v8;
      v16 = *v12->ObjectType;
      v15[4].Count = (unsigned __int64)v16;
      v15[5].Count = (unsigned __int64)v12->PreOperation;
      v15[6].Count = (unsigned __int64)v12->PostOperation;
      inserted = ObpInsertCallbackByAltitude(v16, v15);
      if ( inserted < 0 )
        goto LABEL_20;
      ++v8[1];
      if ( ++v11 >= CallbackRegistration->OperationRegistrationCount )
        goto LABEL_12;
    }
    inserted = -1073741790;
LABEL_20:
    if ( v8[1] )
    {
      do
      {
        v20 = &v8[32 * (unsigned __int64)v5 + 16];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v20[4] + 184LL, 0LL);
        v22 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v23 = (_QWORD *)v20[1], (_QWORD *)*v23 != v20) )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        ExReleasePushLockEx(v20[4] + 184LL, 0LL);
        v24 = KeGetCurrentThread();
        v25 = v24->SpecialApcDisable++ == -1;
        if ( v25 && ($CEA84C04E3712D858E5667A507841A2A *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
          KiCheckForKernelApcDelivery();
        ++v5;
      }
      while ( v5 < (unsigned __int16)v8[1] );
    }
    ExFreePoolWithTag(v8, 0x6C46624Fu);
  }
  else
  {
    inserted = 0;
LABEL_12:
    if ( v8[1] )
    {
      do
      {
        v18 = v5++;
        *(_DWORD *)&v8[32 * v18 + 26] |= 1u;
      }
      while ( v5 < (unsigned __int16)v8[1] );
    }
    *RegistrationHandle = v8;
  }
  return inserted;
}
