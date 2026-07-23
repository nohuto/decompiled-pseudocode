/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x140A1A258
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1407BA724 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x140347950 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14060AF9C (ExTryConvertSharedToExclusiveLite.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     CmRealKCBToVirtualPath @ 0x140A188B8 (CmRealKCBToVirtualPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x140A18F48 (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x140A19174 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x140A19F34 (CmpGetVirtualStoreRoot.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, __int64 a2, char a3, ULONG_PTR *a4)
{
  char v7; // r15
  int VirtualStoreRoot; // ebx
  UNICODE_STRING *v9; // rcx
  _DWORD *v10; // rsi
  ULONG_PTR v11; // rcx
  ULONG_PTR v12; // r8
  unsigned int v13; // edx
  UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v16; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+44h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  ULONG_PTR v20; // [rsp+60h] [rbp-19h] BYREF
  ULONG_PTR v21; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR *v22; // [rsp+70h] [rbp-9h]
  _OWORD v23[2]; // [rsp+78h] [rbp-1h] BYREF

  v22 = a4;
  v17 = 0;
  DestinationString = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v23, 0x20000LL);
  v20 = 0LL;
  P = 0LL;
  v16 = 0;
  v7 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v21 = 0LL;
  if ( !a3 )
  {
    v7 = ExTryConvertSharedToExclusiveLite();
    if ( !v7 )
    {
      VirtualStoreRoot = -1073741739;
LABEL_19:
      if ( CmpTraceRoutine )
      {
        p_DestinationString = &DestinationString;
        LOBYTE(p_DestinationString) = 26;
        CmpTraceRoutine(p_DestinationString, v23, (unsigned int)VirtualStoreRoot, 0LL);
      }
      if ( DestinationString.Buffer )
        RtlFreeUnicodeString(&DestinationString);
      return (unsigned int)VirtualStoreRoot;
    }
  }
  CmpUnlockKcb(a1);
  VirtualStoreRoot = CmRealKCBToVirtualPath(a1, 0LL, a2, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&DestinationString, &v16, &P) >= 0 )
    {
      v10 = P;
      if ( v16 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(a2, (__int64 *)&v20, &v17, &v21);
        if ( VirtualStoreRoot >= 0 )
        {
          v11 = v21;
          v12 = v20;
          v13 = v16;
          *v22 = v20;
          v10[8] = *(_DWORD *)(v11 + 40);
          *((_QWORD *)v10 + 2) = v11;
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v10, v13, v12, a1, a2);
        }
      }
      else
      {
        VirtualStoreRoot = -1073741811;
      }
      if ( v10 )
      {
        CmpDestroyVirtualStack((__int64)v10, v16);
        ExFreePoolWithTag(v10, 0);
      }
    }
    else
    {
      VirtualStoreRoot = -1073741670;
    }
    CmpLockKcbExclusive(a1);
    if ( v7 )
      ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
    goto LABEL_19;
  }
  if ( CmpTraceRoutine )
  {
    v9 = &DestinationString;
    LOBYTE(v9) = 26;
    CmpTraceRoutine(v9, v23, (unsigned int)VirtualStoreRoot, 0LL);
  }
  return (unsigned int)VirtualStoreRoot;
}
