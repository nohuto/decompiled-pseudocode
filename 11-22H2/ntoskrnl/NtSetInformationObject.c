/*
 * XREFs of NtSetInformationObject @ 0x140697640
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x1402A1CC0 (PsGetCurrentProcessSessionId.c)
 *     MmGetSessionObjectById @ 0x1402C0B30 (MmGetSessionObjectById.c)
 *     ObpLockDirectoryExclusive @ 0x140697B24 (ObpLockDirectoryExclusive.c)
 *     ObpUnlockDirectory @ 0x1406C32F8 (ObpUnlockDirectory.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     ObSetHandleAttributes @ 0x14073FE00 (ObSetHandleAttributes.c)
 */

NTSTATUS __cdecl NtSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  int v5; // edi
  __int32 v6; // edx
  char v7; // cl
  __int32 v9; // edx
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rdx
  void *SessionObjectById; // rsi
  _QWORD *v14; // rbx
  KPROCESSOR_MODE v15; // bl
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]
  __int16 v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0;
  v5 = -1073741821;
  v6 = ObjectInformationClass - 4;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return v5;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, PreviousMode, &Object, &HandleInformation);
        if ( v5 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId, v12);
          v14 = Object;
          if ( !SessionObjectById )
          {
            v5 = -1073740715;
            goto LABEL_17;
          }
          v18 = 0LL;
          v19 = 0LL;
          ObpLockDirectoryExclusive(&v18, Object);
          if ( v14[41] )
          {
            v5 = -1073741790;
            ObfDereferenceObject(SessionObjectById);
          }
          else
          {
            v14[41] = SessionObjectById;
          }
LABEL_16:
          ObpUnlockDirectory(&v18);
LABEL_17:
          ObfDereferenceObject(v14);
        }
        return v5;
      }
    }
    else
    {
      v15 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v15) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v15, &Object, &HandleInformation);
        if ( v5 < 0 )
          return v5;
        v18 = 0LL;
        v19 = 0LL;
        v14 = Object;
        ObpLockDirectoryExclusive(&v18, Object);
        *((_DWORD *)v14 + 85) = PsGetCurrentProcessSessionId();
        goto LABEL_16;
      }
    }
    return -1073741727;
  }
  if ( ObjectInformationLength == 2 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    if ( v7
      && ((unsigned __int64)ObjectInformation + 2 > 0x7FFFFFFF0000LL || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    v20 = *(_WORD *)ObjectInformation;
    LOBYTE(ObjectInformation) = v7;
    return ObSetHandleAttributes(Handle, &v20, ObjectInformation);
  }
  return -1073741820;
}
