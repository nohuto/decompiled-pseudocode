/*
 * XREFs of ndisReadUpperBindings @ 0x1C0057DF8
 * Callers:
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 */

__int64 __fastcall ndisReadUpperBindings(_NDIS_M_DRIVER_BLOCK *a1, __int64 *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *v8; // r9
  KIRQL v9; // r15
  unsigned int v10; // esi
  __int64 Pool2; // rax
  __int64 v12; // rbp
  struct _NDIS_MINIPORT_BLOCK *v13; // rdi
  _WORD *v14; // r14
  _WORD *v15; // r14

  v3 = 0;
  *a2 = 0LL;
  v5 = 0;
  *a3 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v8 = ndisMiniportList;
  v9 = v7;
  while ( v8 )
  {
    if ( v8->DriverHandle == a1 )
      v5 += v8->MiniportName.Length + 2;
    v8 = v8->NextGlobalMiniport;
  }
  v10 = v5 + 2;
  Pool2 = ExAllocatePool2(66LL, v10, 1852851278);
  v12 = Pool2;
  if ( Pool2 )
  {
    v13 = ndisMiniportList;
    v14 = (_WORD *)Pool2;
    while ( v13 )
    {
      if ( v13->DriverHandle == a1 )
      {
        memmove(v14, v13->MiniportName.Buffer, v13->MiniportName.Length);
        v15 = (_WORD *)((char *)v14 + v13->MiniportName.Length);
        *v15 = 0;
        v14 = v15 + 1;
      }
      v13 = v13->NextGlobalMiniport;
    }
    *v14 = 0;
    *a3 = v10;
    *a2 = v12;
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
  }
  else
  {
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
    return (unsigned int)-1073741670;
  }
  return v3;
}
