/*
 * XREFs of GetBaseLogicalPageFromVaRange @ 0x1C008D530
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002528 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C00027A0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 */

unsigned __int64 __fastcall GetBaseLogicalPageFromVaRange(__int64 a1)
{
  void *v2; // r8
  int v3; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v5; // r8

  v2 = 0LL;
  v3 = (int)(*(_DWORD *)(a1 + 64) << 28) >> 28;
  if ( v3 == 1 )
    goto LABEL_2;
  if ( v3 == 2 )
  {
    v2 = *(void **)(*(_QWORD *)(a1 + 56) + 64LL);
    return (unsigned __int64)SysMmGetLogicalAddress(v2) >> 12;
  }
  if ( v3 > 2 )
  {
    if ( v3 <= 5 )
    {
LABEL_2:
      if ( v3 == 3 )
      {
        v5 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v3, *(_QWORD *)(a1 + 56));
        if ( VidMmAllocFromOwner )
          v5 = **VidMmAllocFromOwner;
      }
      v2 = *(void **)(v5 + 520);
      return (unsigned __int64)SysMmGetLogicalAddress(v2) >> 12;
    }
    if ( v3 == 7 )
      v2 = *(void **)(*(_QWORD *)(a1 + 56) + 72LL);
  }
  return (unsigned __int64)SysMmGetLogicalAddress(v2) >> 12;
}
