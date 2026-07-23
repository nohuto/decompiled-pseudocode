/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140AF53D0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DF70 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E540 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     NtLockRegistryKey @ 0x140847510 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140A0A7C8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D350 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0D620 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D8F0 (NtCompressKey.c)
 *     NtRenameKey @ 0x140A0E260 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E760 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0EAC0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EE80 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0F110 (NtSaveMergedKeys.c)
 *     CmSaveKeyToBuffer @ 0x140AF57B0 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v7; // rax
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v7 = (struct _OBJECT_HANDLE_INFORMATION *)&v10;
  v10 = 0LL;
  Object = 0LL;
  if ( !a6 )
    v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, v7);
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      *a5 = Object;
      if ( v6 )
        *v6 = v10;
      return 0LL;
    }
    v8 = -1073741816;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v8;
}
