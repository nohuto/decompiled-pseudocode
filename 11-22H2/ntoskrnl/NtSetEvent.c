/*
 * XREFs of NtSetEvent @ 0x1407ADAE0
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B648B0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ExpSetCrossVmEvent @ 0x140A060C4 (ExpSetCrossVmEvent.c)
 */

NTSTATUS __cdecl NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  int v7; // edi
  struct _KEVENT *v8; // rbx
  LONG v9; // eax
  LONG v11; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousState && PreviousMode )
  {
    v5 = (__int64)PreviousState;
    if ( (unsigned __int64)PreviousState >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v7 = v6;
  v8 = (struct _KEVENT *)Object;
  LODWORD(Object) = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(EventHandle, 2u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v8 = (struct _KEVENT *)Object;
        LODWORD(Object) = v7;
        if ( v7 >= 0 )
        {
          v7 = ExpSetCrossVmEvent(v8, &v11);
          LODWORD(Object) = v7;
        }
      }
    }
    v9 = v11;
  }
  else
  {
    v9 = KeSetEvent(v8, 1, 0);
    v11 = v9;
  }
  if ( v7 >= 0 && PreviousState )
    *PreviousState = v9;
  if ( v8 )
    ObfDereferenceObject(v8);
  return v7;
}
