/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x14086648C
 * Callers:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140866230 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408665C4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDriverDatabase @ 0x140876380 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A6B99C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 *     DrvDbCreateDatabaseNode @ 0x140813590 (DrvDbCreateDatabaseNode.c)
 *     DrvDbLoadDatabaseNode @ 0x140877360 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140877618 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140877954 (DrvDbFindDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A6DC00 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        _QWORD *a1,
        const WCHAR *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v17[2]; // [rsp+50h] [rbp-28h] BYREF

  v17[0] = 0LL;
  v10 = 0;
  if ( wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, v17);
    v12 = DatabaseNode;
    if ( DatabaseNode == -1073741772 )
    {
      if ( !a4 )
        return (unsigned int)v12;
      v12 = DrvDbCreateDatabaseNode((__int64)a1, a2, 0LL, 0, 0LL, 16, 0LL, 0LL, v17);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v10 = 1;
    }
    else if ( DatabaseNode < 0 )
    {
      return (unsigned int)v12;
    }
  }
  else
  {
    v17[0] = a1[4];
  }
  CurrentThread = KeGetCurrentThread();
  v14 = v17[0];
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 152), 1u);
  if ( (*(_DWORD *)(v14 + 64) & 1) != 0 || (v12 = DrvDbLoadDatabaseNode(a1, v14), v12 >= 0) )
  {
    if ( *a1 )
      v15 = *(_QWORD *)(*a1 + 224LL);
    else
      v15 = 0LL;
    v12 = SysCtxRegOpenKey(v15, *(_QWORD *)(v14 + 96), 0LL, 0, a3, a5);
    if ( (*(_DWORD *)(v14 + 64) & 1) == 0 )
      DrvDbUnloadDatabaseNode(a1, v14);
    if ( v12 >= 0 && a6 )
      *a6 = 2;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v17[0]);
  return (unsigned int)v12;
}
