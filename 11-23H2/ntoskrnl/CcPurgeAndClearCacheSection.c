/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x1402F1564
 * Callers:
 *     CcSetFileSizesEx @ 0x1402F1230 (CcSetFileSizesEx.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x140265080 (CcGetVirtualAddress.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F460 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x140287720 (MmFlushSection.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A1760 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14034C4D4 (CcUpdateSharedCacheMapFlag.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // r14
  unsigned __int64 v4; // r13
  BOOLEAN v5; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rbx
  struct _KEVENT *v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+30h] [rbp-78h] BYREF
  LONGLONG v13; // [rsp+38h] [rbp-70h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-68h] BYREF
  void *VirtualAddress; // [rsp+50h] [rbp-58h]
  struct _IO_STATUS_BLOCK v16; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  v13 = 0LL;
  v16 = 0LL;
  v14[0] = 0LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v4 = CcReferenceSharedCacheMapFileObject(a1);
  v14[1] = v4;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v13 = v2->QuadPart;
  v2 = (LARGE_INTEGER *)&v13;
  if ( *(_QWORD *)(a1 + 176) && *(_QWORD *)(a1 + 88) )
  {
    v8 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, v14, &v12, 1, 0);
    memset(VirtualAddress, 0, v8);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, 1LL);
      LOBYTE(v11) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v11);
    }
    else
    {
      CcSetDirtyInMask(a1, &v13, v8, 0LL);
    }
    v13 = v8 + QuadPart;
    v9 = *(_QWORD *)(v14[0] + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v14[0] + 16)) )
    {
      v10 = *(struct _KEVENT **)(v9 + 192);
      if ( v10 )
        KeSetEvent(v10, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 552));
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v4 + 40), &v13, 1uLL, 0LL, &v16, 0);
  result = (unsigned int)v16.Status;
  if ( v16.Status >= 0 )
  {
LABEL_3:
    v5 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), v2, 0, 0);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(a1 + 96), v4, 0x63536343u);
    return v5 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
