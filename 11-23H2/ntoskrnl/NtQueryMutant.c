/*
 * XREFs of NtQueryMutant @ 0x140A05AA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x140573C8C (KeQueryOwnerMutant.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG MutantInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  PULONG v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  int v13; // r8d
  char v14; // al
  bool v15; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CLIENT_ID ClientId; // [rsp+38h] [rbp-30h] BYREF

  ClientId = 0LL;
  if ( MutantInformationClass == MutantBasicInformation )
  {
    if ( MutantInformationLength == 8 )
      goto LABEL_7;
    return -1073741820;
  }
  if ( MutantInformationClass != MutantOwnerInformation )
    return -1073741821;
  if ( MutantInformationLength != 16 )
    return -1073741820;
LABEL_7:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(MutantInformation, MutantInformationLength, 4u);
    v10 = ReturnLength;
    if ( ReturnLength )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v10 = ReturnLength;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(MutantHandle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    if ( MutantInformationClass )
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v10 )
          *v10 = 16;
      }
      else
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v10 )
          *v10 = 16;
      }
    }
    else
    {
      v13 = *((_DWORD *)Object + 1);
      v14 = *((_BYTE *)Object + 48) & 1;
      v15 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
      {
        *(_DWORD *)MutantInformation = v13;
        *((_BYTE *)MutantInformation + 4) = v15;
        *((_BYTE *)MutantInformation + 5) = v14;
        if ( v10 )
          *v10 = 8;
      }
      else
      {
        *(_DWORD *)MutantInformation = v13;
        *((_BYTE *)MutantInformation + 4) = v15;
        *((_BYTE *)MutantInformation + 5) = v14;
        if ( v10 )
          *v10 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return v12;
}
