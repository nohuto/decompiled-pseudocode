/*
 * XREFs of StorEnableRegistryKeyNotification @ 0x1C0044F24
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1C000D988 (RaidNtStatusToStorStatus.c)
 *     StorpWatchForRegistryChanges @ 0x1C0019E30 (StorpWatchForRegistryChanges.c)
 *     StorpInitRegistryWatch @ 0x1C0021044 (StorpInitRegistryWatch.c)
 *     PortBuildRegKeyName @ 0x1C0077BC0 (PortBuildRegKeyName.c)
 */

__int64 __fastcall StorEnableRegistryKeyNotification(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  char v3; // r14
  unsigned int v6; // ebx
  _DWORD *Adapter; // rax
  int v8; // eax
  _QWORD *Pool; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v2 = 0LL;
  v3 = 0;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  if ( !a2 || (Adapter = RaidpPortGetAdapter(a1), (v2 = Adapter) == 0LL) )
  {
    v6 = -1056964602;
    goto LABEL_15;
  }
  v8 = RaidAcquireAdapterRemoveLock((__int64)Adapter);
  if ( v8 < 0 )
    goto LABEL_5;
  v3 = 1;
  if ( !*((_QWORD *)v2 + 750) )
  {
    v8 = PortBuildRegKeyName((PCUNICODE_STRING)(*((_QWORD *)v2 + 2) + 40LL), &UnicodeString);
    if ( v8 < 0
      || (ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.ObjectName = &UnicodeString,
          ObjectAttributes.Length = 48,
          ObjectAttributes.Attributes = 576,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes),
          v8 < 0) )
    {
LABEL_5:
      v6 = RaidNtStatusToStorStatus(v8);
      goto LABEL_15;
    }
    Pool = (_QWORD *)RaidAllocatePool(64LL, 192LL, 1465016658LL, 0LL);
    if ( !Pool )
    {
      v6 = -1056964605;
      goto LABEL_15;
    }
    v10 = (_QWORD *)RaidAllocatePool(64LL, 192LL, 1465016658LL, 0LL);
    v11 = (__int64)v10;
    if ( !v10 )
    {
      v6 = -1056964605;
      ExFreePoolWithTag(Pool, 0x57526152u);
      goto LABEL_15;
    }
    *Pool = a1;
    Pool[1] = a2;
    *v10 = Pool;
    v10[1] = StorAdapterWatchForRegistryChanges;
    StorpInitRegistryWatch((__int64)KeyHandle, (__int64)v10);
    StorpWatchForRegistryChanges(v11);
    *((_QWORD *)v2 + 750) = v11;
    KeyHandle = 0LL;
  }
  v6 = 0;
LABEL_15:
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 && v3 )
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v2 + 37));
  return v6;
}
