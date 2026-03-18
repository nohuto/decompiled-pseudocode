/*
 * XREFs of DrvDbSuspendDatabase @ 0x14081151C
 * Callers:
 *     PiDrvDbSuspendNodes @ 0x1408114BC (PiDrvDbSuspendNodes.c)
 * Callees:
 *     _wcsicmp @ 0x1403D9A50 (_wcsicmp.c)
 *     DrvDbFindDatabaseNode @ 0x140877714 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbSuspendDatabase(__int64 a1, const wchar_t *a2, char a3)
{
  __int64 v3; // rsi
  int DatabaseNode; // edi
  __int64 *i; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = PiDrvDbCtx;
  DatabaseNode = 0;
  v9 = 0LL;
  if ( a2 && wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode(v3, a2, &v9);
    if ( DatabaseNode >= 0 )
    {
      if ( a3 )
        *(_DWORD *)(v9 + 64) |= 4u;
      else
        *(_DWORD *)(v9 + 64) &= ~4u;
    }
  }
  else
  {
    for ( i = *(__int64 **)(v3 + 16); i != (__int64 *)(v3 + 16); i = (__int64 *)*i )
    {
      if ( a3 )
        *((_DWORD *)i + 16) |= 4u;
      else
        *((_DWORD *)i + 16) &= ~4u;
    }
  }
  return (unsigned int)DatabaseNode;
}
