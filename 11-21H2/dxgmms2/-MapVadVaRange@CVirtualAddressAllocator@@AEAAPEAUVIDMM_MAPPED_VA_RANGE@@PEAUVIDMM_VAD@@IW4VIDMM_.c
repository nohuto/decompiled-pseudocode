/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C008ECAC
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002588 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0002C40 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002E2C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C008EDD4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

volatile signed __int32 *__fastcall CVirtualAddressAllocator::MapVadVaRange(
        CVirtualAddressAllocator *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  unsigned __int64 v14; // rbx
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  struct VIDMM_MAPPED_VA_RANGE *v18; // rax
  struct VIDMM_VAD *v19; // rdx
  volatile signed __int32 *v20; // rbx
  __int64 v22; // rcx

  v14 = a10;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(a4, a5);
  if ( VidMmGlobalAllocFromOwner )
    v14 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 16);
  v16 = v14 - a6;
  v17 = operator new(136LL, 0x39346956u, 256LL);
  if ( v17
    && (v18 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                v17,
                                                a2,
                                                a9,
                                                a9 + a10,
                                                a3,
                                                a5,
                                                a6,
                                                a4,
                                                a7,
                                                a8,
                                                (v16 >> 12) & -(__int64)(v16 < a10),
                                                a6),
        (v20 = (volatile signed __int32 *)v18) != 0LL) )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, v19, a3, 0LL, v18) >= 0 )
      return v20;
    WdLogSingleEntry0(3LL);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v20);
  }
  else
  {
    _InterlockedIncrement(&dword_1C006E854);
    WdLogSingleEntry1(6LL, 1970LL);
    DxgkLogInternalTriageEvent(v22, 262145LL);
  }
  return 0LL;
}
