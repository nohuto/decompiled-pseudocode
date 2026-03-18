/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x14068B750
 * Callers:
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085A75C (CmpVolumeManagerGetContextForFilePath.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x14068B924 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     IoVolumeDeviceToGuid @ 0x14068B980 (IoVolumeDeviceToGuid.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpVolumeContextCreate @ 0x1408575AC (CmpVolumeContextCreate.c)
 *     CmpVolumeContextCleanup @ 0x140863DA8 (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  struct _OBJECT_TYPE *v5; // r8
  NTSTATUS v6; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  PPRIVILEGE_SET ContextForGuidUnsafe; // rbx
  __int64 v12; // rcx
  struct _PRIVILEGE_SET *v13; // rdi
  __int64 v15; // rcx
  PPRIVILEGE_SET *v16; // rcx
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  Object = 0LL;
  v5 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v19 = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 0x80u, v5, 0, &Object, 0LL);
  if ( v6 < 0 )
    goto LABEL_14;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v8 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v19);
  v6 = v8;
  if ( v8 == -1073741811 || v8 == -1073741637 || v8 == -1073741808 )
  {
    v6 = CmpVolumeContextCreate(v9, 0LL, &Privileges);
    if ( v6 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpVolumeManager, 0LL);
      goto LABEL_19;
    }
LABEL_10:
    v13 = Privileges;
    if ( Privileges )
    {
      CmpVolumeContextCleanup(Privileges);
      CmSiFreeMemory(v13);
    }
    goto LABEL_12;
  }
  if ( v8 >= 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpVolumeManager, 0LL);
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v10, &v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
      goto LABEL_9;
    v6 = CmpVolumeContextCreate(v12, AttachedDeviceReference, &Privileges);
    if ( v6 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpVolumeManager, 0LL);
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v15, &v19);
      if ( ContextForGuidUnsafe )
      {
LABEL_21:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpVolumeManager, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&CmpVolumeManager);
        KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
LABEL_9:
        *a4 = ContextForGuidUnsafe;
        v6 = 0;
        goto LABEL_10;
      }
LABEL_19:
      v16 = (PPRIVILEGE_SET *)qword_140D3D2B8;
      if ( *(__int64 **)qword_140D3D2B8 != &qword_140D3D2B0 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      Privileges = 0LL;
      *(_QWORD *)&ContextForGuidUnsafe->PrivilegeCount = &qword_140D3D2B0;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v16;
      *v16 = ContextForGuidUnsafe;
      qword_140D3D2B8 = (__int64)ContextForGuidUnsafe;
      goto LABEL_21;
    }
    goto LABEL_10;
  }
LABEL_12:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_14:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v6;
}
