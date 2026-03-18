/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x1407880B4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140788B20 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
 *     PiDmListInitEnumCallback @ 0x14082F280 (PiDmListInitEnumCallback.c)
 *     IopRegisterDeviceInterface @ 0x1408667FC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408827B0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14095A184 (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x14031E8A0 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x14031ECF0 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PiDmObjectRelease @ 0x1406D6B68 (PiDmObjectRelease.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1406D820C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmInitializeComparisonObject @ 0x1406D8270 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectCreate @ 0x14086B75C (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(unsigned int a1, _WORD *a2, volatile signed __int32 **a3)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _ERESOURCE *v8; // r14
  int v9; // ebx
  PVOID *v10; // rax
  volatile signed __int32 *v11; // rcx
  PVOID inserted; // rax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *Buffer; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v18[112]; // [rsp+50h] [rbp-59h] BYREF

  memset(v18, 0, sizeof(v18));
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  P = 0LL;
  Buffer = v18;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  v8 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(ObjectManagerForObjectType, 1u);
  v9 = PiDmInitializeComparisonObject(a2, a1, (__int64)v18);
  if ( v9 < 0 )
    goto LABEL_12;
  v10 = (PVOID *)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)&v8[1], &Buffer, &NodeOrParent, &SearchResult);
  if ( v10 )
  {
    v11 = (volatile signed __int32 *)*v10;
    P = (PVOID)v11;
    if ( v11 )
    {
      ++*((_DWORD *)v11 + 3);
      goto LABEL_5;
    }
  }
  v9 = PiDmObjectCreate(a1, a2, &P);
  if ( v9 < 0 )
  {
LABEL_12:
    v11 = (volatile signed __int32 *)P;
    goto LABEL_5;
  }
  inserted = RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)&v8[1], &P, 8u, 0LL, NodeOrParent, SearchResult);
  v11 = (volatile signed __int32 *)P;
  if ( inserted )
  {
    *((_DWORD *)P + 3) = 1;
  }
  else
  {
    PiDmObjectRelease((char *)P);
    v11 = 0LL;
    v9 = -1073741670;
    P = 0LL;
  }
LABEL_5:
  if ( a3 )
  {
    *a3 = v11;
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
  }
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
