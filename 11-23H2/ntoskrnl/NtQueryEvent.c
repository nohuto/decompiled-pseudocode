/*
 * XREFs of NtQueryEvent @ 0x1407D5AE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     ExpQueryCrossVmEvent @ 0x140A06180 (ExpQueryCrossVmEvent.c)
 */

NTSTATUS __cdecl NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r12
  PULONG v8; // rdi
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  int v11; // esi
  _DWORD *v12; // r14
  int v14; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  PVOID v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0;
  v14 = 0;
  if ( EventInformationClass )
    return -1073741821;
  if ( EventInformationLength != 8 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(EventInformation, 8uLL, 4u);
    v8 = ReturnLength;
    if ( ReturnLength )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v8 = ReturnLength;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(EventHandle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v11 = v10;
  v12 = Object;
  v16 = Object;
  LODWORD(Object) = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(EventHandle, 1u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v12 = Object;
        v16 = Object;
        LODWORD(Object) = v11;
        if ( v11 >= 0 )
        {
          v11 = ExpQueryCrossVmEvent(v12, &v17, &v14);
          LODWORD(Object) = v11;
        }
      }
    }
  }
  else
  {
    v14 = v12[1];
    v17 = *(_BYTE *)v12 & 0x7F;
  }
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      *(_DWORD *)EventInformation = v17;
      *((_DWORD *)EventInformation + 1) = v14;
      if ( v8 )
        *v8 = 8;
    }
    else
    {
      *(_DWORD *)EventInformation = v17;
      *((_DWORD *)EventInformation + 1) = v14;
      if ( v8 )
        *v8 = 8;
    }
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  return v11;
}
