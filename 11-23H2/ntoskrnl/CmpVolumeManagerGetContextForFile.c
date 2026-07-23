/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x140701E18
 * Callers:
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1408543E0 (CmpVolumeManagerGetContextForFilePath.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x14025A390 (IoGetAttachedDeviceReference.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x140702054 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     IoVolumeDeviceToGuid @ 0x1407020B0 (IoVolumeDeviceToGuid.c)
 *     CmpVolumeContextCreate @ 0x14084EC68 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextCleanup @ 0x140862E54 (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  struct _OBJECT_TYPE *v5; // r8
  NTSTATUS v6; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  int v8; // eax
  unsigned __int64 v9; // rdi
  PPRIVILEGE_SET ContextForGuidUnsafe; // rdi
  struct _PRIVILEGE_SET *v11; // rbx
  __int64 v13; // rax
  signed __int8 v14; // cf
  __int64 v15; // rdi
  PPRIVILEGE_SET *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  Object = 0LL;
  v5 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v21 = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 0x80u, v5, 0, &Object, 0LL);
  if ( v6 < 0 )
    goto LABEL_18;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v8 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v21);
  v6 = v8;
  if ( v8 == -1073741811 || v8 == -1073741637 || v8 == -1073741808 )
  {
    v6 = CmpVolumeContextCreate(&CmpVolumeManager, 0LL, &Privileges);
    if ( v6 >= 0 )
    {
      v17 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
      v14 = _interlockedbittestandset64((volatile signed __int32 *)&CmpVolumeManager, 0LL);
      v18 = v17;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx(&CmpVolumeManager, v17, (__int64)&CmpVolumeManager);
      if ( v18 )
        *(_BYTE *)(v18 + 18) = 1;
LABEL_27:
      v16 = (PPRIVILEGE_SET *)qword_140D552A8;
      if ( *(__int64 **)qword_140D552A8 != &qword_140D552A0 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      Privileges = 0LL;
      *(_QWORD *)&ContextForGuidUnsafe->PrivilegeCount = &qword_140D552A0;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v16;
      *v16 = ContextForGuidUnsafe;
      qword_140D552A8 = (__int64)ContextForGuidUnsafe;
LABEL_29:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpVolumeManager, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CmpVolumeManager);
      KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
LABEL_13:
      *a4 = ContextForGuidUnsafe;
      v6 = 0;
    }
LABEL_14:
    v11 = Privileges;
    if ( Privileges )
    {
      CmpVolumeContextCleanup(Privileges);
      CmSiFreeMemory(v11);
    }
    goto LABEL_16;
  }
  if ( v8 >= 0 )
  {
    v9 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpVolumeManager, 0LL, v9, (__int64)&CmpVolumeManager);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(&CmpVolumeManager, &v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
      goto LABEL_13;
    v6 = CmpVolumeContextCreate(&CmpVolumeManager, AttachedDeviceReference, &Privileges);
    if ( v6 >= 0 )
    {
      v13 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
      v14 = _interlockedbittestandset64((volatile signed __int32 *)&CmpVolumeManager, 0LL);
      v15 = v13;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx(&CmpVolumeManager, v13, (__int64)&CmpVolumeManager);
      if ( v15 )
        *(_BYTE *)(v15 + 18) = 1;
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(&CmpVolumeManager, &v21);
      if ( ContextForGuidUnsafe )
        goto LABEL_29;
      goto LABEL_27;
    }
    goto LABEL_14;
  }
LABEL_16:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_18:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v6;
}
