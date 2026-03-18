/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140AF53D0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1406DBE10 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2E70 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DD60 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E330 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EA40 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     NtLockRegistryKey @ 0x140847210 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0D370 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 *     NtRenameKey @ 0x140A0DFB0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E4B0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0E810 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EBD0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EE60 (NtSaveMergedKeys.c)
 *     CmSaveKeyToBuffer @ 0x140AF57B0 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B71B08 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
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
