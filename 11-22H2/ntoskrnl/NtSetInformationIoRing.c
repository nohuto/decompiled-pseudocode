/*
 * XREFs of NtSetInformationIoRing @ 0x14094A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopExceptionFilter @ 0x140555588 (IopExceptionFilter.c)
 *     IopIoRingUpdateCompletionUserEvent @ 0x140559860 (IopIoRingUpdateCompletionUserEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetInformationIoRing(
        HANDLE IoRingHandle,
        ULONG IoRingInformationClass,
        ULONG IoRingInformationLength,
        PVOID IoRingInformation)
{
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v8; // rdi
  ULONG v9; // ecx
  int v10; // ebx
  char *v11; // rcx
  NTSTATUS updated; // eax
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  void *v15; // [rsp+48h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  if ( (IoRingInformationClass & 0x80000000) != 0 )
    goto LABEL_16;
  if ( (unsigned __int64)(int)IoRingInformationClass >= 2 )
    goto LABEL_16;
  v9 = *((_DWORD *)&IopIoRingSetOperationLength + (int)IoRingInformationClass);
  if ( !v9 )
    goto LABEL_16;
  if ( IoRingInformationLength < v9 )
  {
    v10 = -1073741820;
    goto LABEL_17;
  }
  if ( PreviousMode )
  {
    if ( IoRingInformationLength )
    {
      v11 = (char *)IoRingInformation + IoRingInformationLength;
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < IoRingInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(IoRingHandle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v8 = Object;
  if ( v10 >= 0 )
  {
    if ( IoRingInformationClass == 1 )
    {
      v15 = *(void **)IoRingInformation;
      updated = IopIoRingUpdateCompletionUserEvent((__int64)Object, &v15, PreviousMode);
      v10 = updated;
      if ( updated == -1073741816 || updated == -1073741788 )
        v10 = -1073741582;
      goto LABEL_17;
    }
LABEL_16:
    v10 = -1073741821;
  }
LABEL_17:
  if ( v8 )
    ObfDereferenceObject(v8);
  return v10;
}
