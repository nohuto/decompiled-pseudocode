/*
 * XREFs of ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1C00BF2F0
 * Callers:
 *     NdisImmediateReadSharedMemory @ 0x1C00BF530 (NdisImmediateReadSharedMemory.c)
 *     NdisImmediateWriteSharedMemory @ 0x1C00BF5E0 (NdisImmediateWriteSharedMemory.c)
 * Callees:
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0057408 (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 *     ndisStartMapping @ 0x1C00BF3E0 (ndisStartMapping.c)
 */

void __fastcall ndisImmediateReadWriteSharedMemory(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rcx
  int v7; // r14d
  int v8; // r15d
  int v11; // ecx
  PVOID v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-50h] BYREF
  union _LARGE_INTEGER v14; // [rsp+40h] [rbp-10h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v15; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  PHYSICAL_ADDRESS BusAddress; // [rsp+88h] [rbp+38h] BYREF

  v5 = a1[1];
  v15 = 0LL;
  BaseAddress = 0LL;
  v14.QuadPart = 0LL;
  v7 = *(_DWORD *)(v5 + 3720);
  v8 = *(_DWORD *)(v5 + 3724);
  LOBYTE(BusAddress.LowPart) = 0;
  if ( !(unsigned int)ndisTranslateResources((struct _NDIS_MINIPORT_BLOCK *)v5, 3, (union _LARGE_INTEGER)a2, &v14, &v15) )
  {
    v11 = -1;
    LODWORD(BaseAddress) = v14.LowPart;
    if ( !v15 )
      v11 = v7;
    if ( (int)ndisStartMapping(v11, v8, a2, a4, 0, (__int64)&BaseAddress, (PHYSICAL_ADDRESS)&BusAddress) >= 0 )
    {
      if ( a5 )
      {
        v12 = BaseAddress;
        qmemcpy(a3, BaseAddress, a4);
      }
      else
      {
        qmemcpy(BaseAddress, a3, a4);
        _InterlockedOr(v13, 0);
        v12 = BaseAddress;
      }
      if ( LOBYTE(BusAddress.LowPart) )
        MmUnmapIoSpace(v12, a4);
    }
  }
}
