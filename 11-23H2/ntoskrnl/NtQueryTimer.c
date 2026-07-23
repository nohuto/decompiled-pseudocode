/*
 * XREFs of NtQueryTimer @ 0x1409FB9A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x1405712C0 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG TimerInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  PULONG v11; // rsi
  int v12; // r15d
  char v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( TimerInformationClass )
    return -1073741821;
  if ( TimerInformationLength != 16 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)TimerInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerInformation < 0x7FFFFFFF0000LL )
      v10 = (__int64)TimerInformation;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = ReturnLength;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(TimerHandle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_BYTE *)Object + 4);
    v14 = MEMORY[0xFFFFF78000000008];
    v15 = KeQueryTimerDueTime((__int64)Object) - v14;
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *((_BYTE *)TimerInformation + 8) = v13;
      *(_QWORD *)TimerInformation = v15;
      if ( v11 )
        *v11 = 16;
    }
    else
    {
      *((_BYTE *)TimerInformation + 8) = v13;
      *(_QWORD *)TimerInformation = v15;
      if ( v11 )
        *v11 = 16;
    }
  }
  return v12;
}
