/*
 * XREFs of StorPortGetUncachedExtension @ 0x1C0045FE0
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1C00B1380 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidDmaAllocateUncachedExtension @ 0x1C003F330 (RaidDmaAllocateUncachedExtension.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C004A33C (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     RaidInitializeDma @ 0x1C00A8368 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C00A84FC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  _DWORD *Adapter; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  bool v18; // zf
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0x80000000;
  v20 = 0x80000000;
  Adapter = RaidpPortGetAdapter(a1);
  v8 = (__int64)Adapter;
  if ( Adapter )
  {
    if ( Adapter[202] )
      return *(_QWORD *)(v8 + 792);
    v9 = (__int64)(Adapter + 190);
    if ( (unsigned __int8)RaidIsDmaInitialized(Adapter + 190, v7)
      || (int)RaidInitializeDma(v10, *(_QWORD *)(v8 + 32), v8 + 344) >= 0 )
    {
      if ( !a2 )
        goto LABEL_27;
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      {
        v3 = *(_DWORD *)(v8 + 4592);
        v20 = v3;
      }
      if ( *(_BYTE *)(a2 + 144) == 2 )
      {
        if ( *(_QWORD *)(v8 + 4224) < 0x100000000uLL )
          *(_QWORD *)(v8 + 4224) = -1LL;
        *(_QWORD *)(v8 + 4240) = 0x100000000LL;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 144) != 3 )
        {
          if ( *(_BYTE *)(a2 + 144) == 4 )
          {
            v11 = *(_QWORD *)(v8 + 4224);
            v12 = v11;
            if ( v11 < 0x100000000LL )
            {
              *(_QWORD *)(v8 + 4224) = -1LL;
              v11 = -1LL;
              v12 = -1LL;
            }
            v13 = v12;
            if ( HighestPhysicalAddress != -1 )
            {
              if ( (_DWORD)HighestPhysicalAddress )
              {
                if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL )
                {
                  v14 = HighestPhysicalAddress & 0xFFFFFFFF00000000uLL;
                  if ( v11 >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
                  {
                    v13 = v14 - 1;
                    *(_QWORD *)(v8 + 4224) = v14 - 1;
                    v15 = (v14 - 1) & 0xFFFFFFFF00000000uLL;
                    if ( *(_QWORD *)(v8 + 4232) > v15 )
                      *(_QWORD *)(v8 + 4232) = v15;
                  }
                }
              }
            }
            *(_QWORD *)(v8 + 4240) = 0x100000000LL;
            *(_QWORD *)(v8 + 4256) = v13;
            StorpUpdateUncachedExtensionAllocationRegion(v8, &v20);
            v3 = v20;
          }
LABEL_27:
          if ( (int)RaidDmaAllocateUncachedExtension(
                      v9,
                      a3,
                      *(_QWORD *)(v8 + 4232),
                      *(_QWORD *)(v8 + 4224),
                      *(_QWORD *)(v8 + 4240),
                      *(_DWORD *)(v8 + 4216),
                      v3,
                      v8 + 792) >= 0
            || v3 != 0x80000000
            && (int)RaidDmaAllocateUncachedExtension(
                      v9,
                      a3,
                      *(_QWORD *)(v8 + 4232),
                      *(_QWORD *)(v8 + 4224),
                      *(_QWORD *)(v8 + 4240),
                      *(_DWORD *)(v8 + 4216),
                      0x80000000,
                      v8 + 792) >= 0 )
          {
            if ( *(_BYTE *)(a2 + 144) == 4 )
            {
              v16 = *(_QWORD *)(v8 + 800);
              v17 = v16 | 0xFFFFFFFFLL;
              v18 = *(_QWORD *)(v8 + 4232) == 0LL;
              *(_QWORD *)(v8 + 4248) = v16 & 0xFFFFFFFF00000000uLL;
              if ( v18 )
                v16 &= 0xFFFFFFFF00000000uLL;
              *(_QWORD *)(v8 + 4256) = v17;
              v18 = *(_QWORD *)(v8 + 128) == 0LL;
              *(_QWORD *)(v8 + 4232) = v16;
              *(_QWORD *)(v8 + 4224) = v17;
              if ( v18 )
                *(_QWORD *)(v8 + 128) = StorAllocateContiguousIoResources(
                                          ((*(_DWORD *)(v8 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                          v16,
                                          v8);
            }
            return *(_QWORD *)(v8 + 792);
          }
          return 0LL;
        }
        if ( *(_QWORD *)(v8 + 4224) < 0x100000000uLL )
          *(_QWORD *)(v8 + 4224) = -1LL;
        *(_QWORD *)(v8 + 4240) = 0LL;
      }
      *(_QWORD *)(v8 + 4256) = -1LL;
      goto LABEL_27;
    }
  }
  return 0LL;
}
