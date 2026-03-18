/*
 * XREFs of MmResetDriverPaging @ 0x140703630
 * Callers:
 *     DifMmResetDriverPagingWrapper @ 0x1405E78B0 (DifMmResetDriverPagingWrapper.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiCancelPhase0Locking @ 0x140700FF4 (MiCancelPhase0Locking.c)
 *     MiImagePagable @ 0x14070106C (MiImagePagable.c)
 *     MmImageSectionPagable @ 0x140703A90 (MmImageSectionPagable.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  _QWORD *v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ebx
  _DWORD *i; // rdi
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v12; // r8

  v1 = MiImagePagable(0LL, (unsigned __int64)AddressWithinSection);
  v2 = (__int64)v1;
  if ( v1 )
  {
    v3 = v1[6];
    v4 = RtlImageNtHeader(v3);
    MiCancelPhase0Locking(v2);
    v5 = *(unsigned __int16 *)(v4 + 20);
    v6 = v4 + 24;
    v7 = *(unsigned __int16 *)(v4 + 6);
    for ( i = (_DWORD *)(v5 + v6); v7; --v7 )
    {
      if ( (i[9] & 0x2000000) == 0 && !(unsigned int)MmImageSectionPagable(i) )
      {
        v9 = i[4];
        if ( v9 < i[2] )
          v9 = i[2];
        MiGetPteAddress(v3 + i[3] + v9 - 1);
        PteAddress = MiGetPteAddress(v10 + v3);
        MiLockCode(v2, PteAddress, v12, 2);
      }
      i += 10;
    }
  }
}
