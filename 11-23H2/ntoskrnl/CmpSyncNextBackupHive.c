/*
 * XREFs of CmpSyncNextBackupHive @ 0x140A1B0B8
 * Callers:
 *     NtInitializeRegistry @ 0x1407E8F00 (NtInitializeRegistry.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v3; // [rsp+80h] [rbp+10h]
  int v4; // [rsp+88h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    if ( CmpDoIdleProcessing )
    {
      do
      {
        v4 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 6 )
          v3 = 0;
        else
          v3 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v3, CmpPeriodicBackupFlushHiveCount) != v4 );
      if ( ((__int64)CmpMachineHiveList[23 * v3 + 4] & 1) == 0 && CmpMachineHiveList[23 * v3 + 6] )
        CmpFlushBackupHive(v3);
      if ( v3 == 6 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
        {
          _InterlockedIncrement(&CmpBackupCount);
          ZwSetValueKey(KeyHandle, &CmpBackupCountValueName, 0, 4u, &CmpBackupCount, 4u);
          ZwClose(KeyHandle);
        }
        v0 = -2147483622;
      }
    }
    else
    {
      v0 = -1073741431;
    }
    CmpReleaseHiveLoadUnloadRundown();
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v0;
}
