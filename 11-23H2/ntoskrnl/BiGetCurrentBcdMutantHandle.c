/*
 * XREFs of BiGetCurrentBcdMutantHandle @ 0x140805964
 * Callers:
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenMutant @ 0x14041D690 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiGetCurrentBcdMutantHandle(_QWORD *a1)
{
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+18h] BYREF

  MutantHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( BcdMutantHandle )
  {
    *a1 = BcdMutantHandle;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
  if ( result == -1073741772 )
  {
    _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    *a1 = BcdMutantHandle;
    return 0;
  }
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
      ZwClose(MutantHandle);
    *a1 = BcdMutantHandle;
    return 0;
  }
  return result;
}
