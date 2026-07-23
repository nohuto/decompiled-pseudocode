/*
 * XREFs of sub_14068B750 @ 0x14068B750
 * Callers:
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14085A75C @ 0x14085A75C (sub_14085A75C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14068B924 @ 0x14068B924 (sub_14068B924.c)
 *     IoVolumeDeviceToGuid @ 0x14068B980 (IoVolumeDeviceToGuid.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1408575AC @ 0x1408575AC (sub_1408575AC.c)
 *     sub_140863DA8 @ 0x140863DA8 (sub_140863DA8.c)
 */

__int64 __fastcall sub_14068B750(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  struct _OBJECT_TYPE *v5; // r8
  NTSTATUS v6; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  PPRIVILEGE_SET v11; // rbx
  __int64 v12; // rcx
  _PRIVILEGE_SET *v13; // rdi
  __int64 v15; // rcx
  PPRIVILEGE_SET *v16; // rcx
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  Object = 0LL;
  v5 = *(struct _OBJECT_TYPE **)qword_140C49878;
  v19 = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 0x80u, v5, 0, &Object, 0LL);
  if ( v6 < 0 )
    goto LABEL_14;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v8 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v19);
  v6 = v8;
  if ( v8 == -1073741811 || v8 == -1073741637 || v8 == -1073741808 )
  {
    v6 = sub_1408575AC(v9, 0LL, &Privileges);
    if ( v6 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3D2A8, 0LL);
      goto LABEL_19;
    }
LABEL_10:
    v13 = Privileges;
    if ( Privileges )
    {
      sub_140863DA8(Privileges);
      SeFreePrivileges(v13);
    }
    goto LABEL_12;
  }
  if ( v8 >= 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3D2A8, 0LL);
    v11 = (PPRIVILEGE_SET)sub_14068B924(v10, &v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3D2A8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140D3D2A8);
    sub_1402AFC00((ULONG_PTR)&qword_140D3D2A8);
    if ( v11 )
      goto LABEL_9;
    v6 = sub_1408575AC(v12, AttachedDeviceReference, &Privileges);
    if ( v6 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3D2A8, 0LL);
      v11 = (PPRIVILEGE_SET)sub_14068B924(v15, &v19);
      if ( v11 )
      {
LABEL_21:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3D2A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140D3D2A8);
        sub_1402AFC00((ULONG_PTR)&qword_140D3D2A8);
LABEL_9:
        *a4 = v11;
        v6 = 0;
        goto LABEL_10;
      }
LABEL_19:
      v16 = (PPRIVILEGE_SET *)qword_140D3D2B8;
      if ( *(__int64 **)qword_140D3D2B8 != &qword_140D3D2B0 )
        __fastfail(3u);
      v11 = Privileges;
      Privileges = 0LL;
      *(_QWORD *)&v11->PrivilegeCount = &qword_140D3D2B0;
      v11->Privilege[0].Luid = (LUID)v16;
      *v16 = v11;
      qword_140D3D2B8 = (__int64)v11;
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
