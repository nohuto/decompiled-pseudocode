/*
 * XREFs of ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C00351FC
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C001B1C0 (NdisAllocateRWLock.c)
 */

char __fastcall EthCreateFilter(unsigned int a1, const unsigned __int8 *a2, struct _X_FILTER **a3)
{
  char v4; // di
  __int64 Pool2; // rax
  __int64 v8; // rbx
  PNDIS_RW_LOCK_EX RWLock; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *v16; // rcx
  void *v17; // rcx

  v4 = 0;
  *a3 = 0LL;
  if ( is_mul_ok(6u, a1) )
  {
    Pool2 = ExAllocatePool2(64LL, 408LL, 1718633550);
    *a3 = (struct _X_FILTER *)Pool2;
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 336) = *(_DWORD *)a2;
      *(_WORD *)(Pool2 + 340) = *((_WORD *)a2 + 2);
      *(_DWORD *)(Pool2 + 344) = a1;
      RWLock = NdisAllocateRWLock(&ndisDummyObject);
      *(_QWORD *)(v8 + 288) = RWLock;
      if ( RWLock )
      {
        v10 = *(_DWORD *)(v8 + 344);
        if ( !v10 )
          return 1;
        v11 = ExAllocatePool2(66LL, (unsigned int)(6 * v10), 1634092110);
        *(_QWORD *)(v8 + 376) = v11;
        if ( v11 )
        {
          v12 = ExAllocatePool2(66LL, (unsigned int)(6 * *(_DWORD *)(v8 + 344)), 1634092110);
          *(_QWORD *)(v8 + 392) = v12;
          if ( v12 )
          {
            v13 = ExAllocatePool2(66LL, (unsigned int)(6 * *(_DWORD *)(v8 + 344)), 1634092110);
            *(_QWORD *)(v8 + 352) = v13;
            if ( v13 )
            {
              v14 = ExAllocatePool2(66LL, (unsigned int)(6 * *(_DWORD *)(v8 + 344)), 1634092110);
              *(_QWORD *)(v8 + 360) = v14;
              if ( v14 )
                return 1;
              ExFreePoolWithTag(*(PVOID *)(v8 + 376), 0);
              v17 = *(void **)(v8 + 352);
            }
            else
            {
              v17 = *(void **)(v8 + 376);
            }
            ExFreePoolWithTag(v17, 0);
            v16 = *(void **)(v8 + 392);
          }
          else
          {
            v16 = *(void **)(v8 + 376);
          }
          ExFreePoolWithTag(v16, 0);
        }
      }
      ExFreePoolWithTag((PVOID)v8, 0);
      *a3 = 0LL;
    }
  }
  return v4;
}
