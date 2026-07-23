/*
 * XREFs of DrvDbDispatchDriverDatabase @ 0x140876380
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140866230 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14086648C (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408665C4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     _PnpCtxGetObjectContext @ 0x1408766FC (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverDatabaseList @ 0x14087781C (DrvDbGetDriverDatabaseList.c)
 *     DrvDbFindDatabaseNode @ 0x140877954 (DrvDbFindDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A6B99C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140A6DAE4 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A6DC00 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbDispatchDriverDatabase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int ObjectContext; // eax
  __int64 v6; // rcx
  int v7; // r10d
  const WCHAR *v8; // r11
  int DatabaseNode; // r8d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v17; // r10d
  int v18; // r10d
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-8h] BYREF

  v20 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, &v20);
  DatabaseNode = ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)DatabaseNode;
  v10 = v7 - 1;
  if ( !v10 )
    return (unsigned int)DrvDbValidateDriverDatabaseName(v6, v8, (unsigned int)ObjectContext);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbOpenDriverDatabaseRegKey(
                           v20,
                           v8,
                           *(_DWORD *)a5,
                           *(_BYTE *)(a5 + 4),
                           *(_QWORD *)(a5 + 8),
                           (_DWORD *)(a5 + 16));
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverDatabaseMappedProperty(
                                   (__int64)v20,
                                   v8,
                                   *(void **)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD *)(a5 + 24),
                                   *(const WCHAR **)(a5 + 32),
                                   *(_DWORD *)(a5 + 40));
          }
          else
          {
            return (unsigned int)DrvDbGetDriverDatabaseMappedProperty(
                                   (__int64)v20,
                                   v8,
                                   *(void **)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD **)(a5 + 24),
                                   *(_BYTE **)(a5 + 32),
                                   *(_DWORD *)(a5 + 40),
                                   *(unsigned int **)(a5 + 48));
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverDatabaseMappedPropertyKeys(
                                 (_DWORD)v20,
                                 (_DWORD)v8,
                                 *(_QWORD *)a5,
                                 *(_QWORD *)(a5 + 24),
                                 *(_DWORD *)(a5 + 32),
                                 *(_QWORD *)(a5 + 40));
        }
      }
      else
      {
        return (unsigned int)DrvDbGetDriverDatabaseList(
                               (_DWORD)v20,
                               *(_QWORD *)a5,
                               *(_QWORD *)(a5 + 8),
                               *(_QWORD *)(a5 + 16),
                               *(_DWORD *)(a5 + 24),
                               *(_QWORD *)(a5 + 32));
      }
    }
    else
    {
      v19 = 0LL;
      DatabaseNode = DrvDbFindDatabaseNode(v20, v8, &v19);
      if ( DatabaseNode < 0 )
        return (unsigned int)DatabaseNode;
      if ( (*(_DWORD *)(v19 + 64) & 0x10) == 0 )
        return (unsigned int)-1073741790;
      return (unsigned int)DrvDbDestroyDatabaseNode(v20, v19);
    }
  }
  LODWORD(v19) = 0;
  DatabaseNode = DrvDbOpenDriverDatabaseRegKey(v20, v8, *(_DWORD *)a5, 1, a5 + 8, &v19);
  if ( DatabaseNode >= 0 )
    *(_BYTE *)(a5 + 16) = (_DWORD)v19 == 1;
  return (unsigned int)DatabaseNode;
}
