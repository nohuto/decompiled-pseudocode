/*
 * XREFs of CmpDoReOpenTransKey @ 0x140A2AE84
 * Callers:
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x140680B2C (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoCreateKey @ 0x140A2AA40 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x140A2AB30 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x140A2AB8C (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x140A2AC74 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140A2ACD0 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140A2AD40 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140A2ADB0 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140A2AE10 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402A0A80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledDeviceUsage @ 0x14041A24C (Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledDeviceUsage.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpSplitParentKeyName @ 0x140AF5CF8 (CmpSplitParentKeyName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, int a3, _QWORD *a4)
{
  __int128 v4; // xmm1
  char v8; // r14
  int v9; // esi
  bool v10; // r12
  int v11; // eax
  __int64 v12; // rdx
  __int16 v13; // cx
  __int16 v14; // ax
  HANDLE v15; // rbx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  int v24; // eax
  __int64 v25; // rdx
  NTSTATUS v26; // eax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+68h] [rbp-98h] BYREF
  void *v32; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v34; // [rsp+88h] [rbp-78h]
  __int128 *v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  _QWORD *v39; // [rsp+B0h] [rbp-50h]
  _OWORD v40[19]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *a2;
  v39 = a4;
  v28 = a3;
  v33[1] = 0;
  v37 = 0;
  v30 = v4;
  v32 = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  v8 = 0;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) != 0;
  if ( !(_WORD)v4 )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v40, 0, 0x128uLL);
    LODWORD(v40[6]) = -1;
    *((_QWORD *)&v40[9] + 1) = &v40[9];
    *(_QWORD *)&v40[9] = &v40[9];
    memset((char *)&v40[13] + 8, 0, 0x50uLL);
    v35 = &v30;
    DWORD2(v40[1]) = 8;
    v33[0] = 48;
    v34 = 0LL;
    v36 = 4928;
    v38 = 0LL;
    v11 = ObOpenObjectByName((__int64)v33, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v40, (__int64)&Handle);
    LOBYTE(v12) = v10;
    v9 = v11;
    CmpCleanupParseContext(v40, v12);
    if ( v9 >= 0 )
      break;
    if ( (unsigned int)Feature_Servicing_CmpDoReOpenTransKeyInfiniteLoop__private_IsEnabledDeviceUsage() )
    {
      CmpSplitParentKeyName(&v30, &v30, &v31);
      v13 = v30;
      v14 = *((_WORD *)a2 + 1) - v30 - 2;
      LOWORD(v31) = *(_WORD *)a2 - v30 - 2;
      WORD1(v31) = v14;
    }
    else
    {
      CmpSplitParentKeyName(a2, &v30, &v31);
      v13 = v30;
    }
    if ( !v13 )
    {
      v15 = Handle;
      goto LABEL_17;
    }
  }
  v15 = Handle;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v21 = Object;
  v9 = v16;
  if ( v16 < 0 )
    goto LABEL_15;
  if ( !v10 )
  {
    CmpLockRegistry(v18, v17, v19, v20);
    v8 = 1;
  }
  v22 = *(_QWORD *)(v21[1] + 32LL);
  if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v22 + 4152) )
    goto LABEL_12;
  if ( v8 )
  {
    CmpUnlockRegistry(v22, v17, v19, v20);
    v8 = 0;
  }
  v21[8] = a1 + 88;
  ObfDereferenceObject(v21);
  v21 = 0LL;
  if ( (_WORD)v31 )
  {
    memset(v40, 0, 0x128uLL);
    LODWORD(v40[6]) = -1;
    *((_QWORD *)&v40[9] + 1) = &v40[9];
    *(_QWORD *)&v40[9] = &v40[9];
    memset((char *)&v40[13] + 8, 0, 0x50uLL);
    v35 = &v31;
    DWORD2(v40[1]) = 8;
    v33[0] = 48;
    v34 = v15;
    v36 = 4928;
    v38 = 0LL;
    v24 = ObOpenObjectByName((__int64)v33, (__int64)CmKeyObjectType, 0, 0LL, v28, (__int64)v40, (__int64)&v32);
    LOBYTE(v25) = v10;
    v9 = v24;
    CmpCleanupParseContext(v40, v25);
    if ( v9 < 0
      || (Object = 0LL,
          v26 = ObReferenceObjectByHandle(v15, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
          v21 = Object,
          v9 = v26,
          v26 < 0) )
    {
LABEL_13:
      if ( v8 )
        CmpUnlockRegistry(v22, v17, v19, v20);
LABEL_15:
      if ( v21 )
        ObfDereferenceObject(v21);
      goto LABEL_17;
    }
    if ( !v10 )
    {
      CmpLockRegistry(v22, v17, v19, v20);
      v8 = 1;
    }
    v22 = *(_QWORD *)(v21[1] + 32LL);
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v22 + 4152) )
    {
LABEL_12:
      v9 = -1073741762;
      goto LABEL_13;
    }
    if ( v8 )
      CmpUnlockRegistry(v22, v17, v19, v20);
    v21[8] = a1 + 88;
    ObfDereferenceObject(v21);
    ZwClose(v15);
    v15 = v32;
  }
  v9 = 0;
  *v39 = v15;
  v15 = 0LL;
LABEL_17:
  if ( v15 )
    ZwClose(v15);
  return (unsigned int)v9;
}
