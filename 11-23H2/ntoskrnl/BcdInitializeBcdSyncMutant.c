/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x140B752A8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateMutant @ 0x14041C7F0 (ZwCreateMutant.c)
 */

void BcdInitializeBcdSyncMutant(void)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+60h] [rbp+10h] BYREF

  MutantHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.SecurityDescriptor = BiBcdMutantDescriptor;
  ObjectAttributes.Attributes = 592;
  if ( ZwCreateMutant(&MutantHandle, 0x1F0001u, &ObjectAttributes, 0) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
      ZwClose(MutantHandle);
  }
}
