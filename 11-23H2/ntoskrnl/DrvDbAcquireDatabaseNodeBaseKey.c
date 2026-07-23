/*
 * XREFs of DrvDbAcquireDatabaseNodeBaseKey @ 0x140877098
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140876DF8 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140A6B0F0 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140A6C5E0 (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140797B54 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x1407980B0 (_PnpCtxRegCreateKey.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14085CD78 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbLoadDatabaseNode @ 0x140877360 (DrvDbLoadDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbAcquireDatabaseNodeBaseKey(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v5; // rbp
  int DatabaseNode; // ebx
  struct _KTHREAD *CurrentThread; // rax
  void *RegistrarSecurityDescriptor; // rdi
  int v11; // eax
  _QWORD *v12; // r15
  int Tree; // eax
  int Key; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx

  v5 = a3;
  DatabaseNode = 0;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  RegistrarSecurityDescriptor = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  v11 = *(_DWORD *)(a2 + 64);
  if ( (v11 & 4) != 0 )
  {
    DatabaseNode = -1073740697;
    goto LABEL_5;
  }
  if ( (v11 & 2) == 0 )
  {
    DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
    if ( DatabaseNode < 0 )
      goto LABEL_5;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
        if ( !RegistrarSecurityDescriptor )
          goto LABEL_24;
      }
      Tree = PnpCtxRegCreateTree(
               *a1,
               *(_QWORD *)(a2 + 96),
               qword_140009120[v5],
               0LL,
               0x2000000,
               (__int64)RegistrarSecurityDescriptor);
    }
    else
    {
      if ( *a1 )
        v17 = *(_QWORD *)(*a1 + 224);
      else
        v17 = 0LL;
      Tree = SysCtxRegOpenKey(v17, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, (__int64)a4);
    }
    DatabaseNode = Tree;
    goto LABEL_5;
  }
  v12 = (_QWORD *)(a2 + 104 + 8 * v5);
  if ( *v12 )
  {
LABEL_4:
    *a4 = *v12;
    goto LABEL_5;
  }
  DatabaseNode = DrvDbLoadDatabaseNode(a1, a2);
  if ( DatabaseNode >= 0 )
  {
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        RegistrarSecurityDescriptor = DrvDbGetRegistrarSecurityDescriptor();
        if ( !RegistrarSecurityDescriptor )
        {
LABEL_24:
          DatabaseNode = -1073741595;
          goto LABEL_5;
        }
      }
      Key = PnpCtxRegCreateKey(*a1, *(_QWORD *)(a2 + 96));
    }
    else
    {
      if ( *a1 )
        v16 = *(_QWORD *)(*a1 + 224);
      else
        v16 = 0LL;
      Key = SysCtxRegOpenKey(v16, *(_QWORD *)(a2 + 96), 0LL, 0, 0x2000000u, a2 + 104 + 8 * v5);
    }
    DatabaseNode = Key;
    if ( Key >= 0 )
      goto LABEL_4;
  }
LABEL_5:
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( RegistrarSecurityDescriptor )
    ExFreePoolWithTag(RegistrarSecurityDescriptor, 0);
  if ( DatabaseNode == -1073741275 || DatabaseNode == -1073741772 )
    return (unsigned int)-1073740947;
  return (unsigned int)DatabaseNode;
}
