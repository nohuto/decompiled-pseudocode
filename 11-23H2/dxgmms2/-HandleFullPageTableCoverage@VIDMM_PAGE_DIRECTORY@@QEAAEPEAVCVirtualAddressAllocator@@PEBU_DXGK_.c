/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C00B27D4
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00987B0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     Feature_326145336__private_IsEnabledDeviceUsage @ 0x1C001A548 (Feature_326145336__private_IsEnabledDeviceUsage.c)
 *     ?AllocatePteOwnerData@VIDMM_GLOBAL@@QEAAPEAUVIDMM_PTE_OWNER_DATA@@XZ @ 0x1C002FE18 (-AllocatePteOwnerData@VIDMM_GLOBAL@@QEAAPEAUVIDMM_PTE_OWNER_DATA@@XZ.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C00B2A94 (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        char a8,
        unsigned __int64 a9,
        unsigned __int8 *a10,
        unsigned __int8 *a11)
{
  VIDMM_GLOBAL *v11; // rsi
  unsigned __int64 v15; // rbx
  bool v16; // bp
  struct VIDMM_PTE_OWNER_DATA *PteOwnerData; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  char v23; // [rsp+88h] [rbp+40h]

  v11 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v23 = 0;
  v15 = 0LL;
  v16 = 0;
  PteOwnerData = 0LL;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v16 = (*((_BYTE *)v11 + 40937) & 2) != 0;
    }
    else
    {
      if ( (*(_DWORD *)this & 0x20) == 0 || !*((_BYTE *)a4 + 67) )
        return 0;
      if ( !(unsigned int)Feature_326145336__private_IsEnabledDeviceUsage() )
      {
        v15 = a9 + (*((_QWORD *)a4 + 5) << 12);
        if ( (a3->Value & 0x100) != 0 || (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v15) == 0 )
        {
          PteOwnerData = VIDMM_GLOBAL::AllocatePteOwnerData(v11);
          if ( PteOwnerData )
            goto LABEL_3;
          WdLogSingleEntry0(3LL);
        }
        return 0;
      }
      if ( *((_QWORD *)a4 + 9) )
        return 0;
      v15 = a9 + *((_QWORD *)a4 + 3) + (*((_QWORD *)a4 + 5) << 12);
      if ( (a3->Value & 0x100) == 0 && (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v15) != 0 )
        return 0;
      PteOwnerData = VIDMM_GLOBAL::AllocatePteOwnerData(v11);
      if ( PteOwnerData )
        goto LABEL_3;
      WdLogSingleEntry0(3LL);
    }
    if ( v16 )
      goto LABEL_3;
    return 0;
  }
  v23 = 1;
LABEL_3:
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6, (unsigned __int64)a4);
    *a10 = 1;
    *a11 = 1;
  }
  if ( a7 != a6 && (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a7) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a7, (unsigned __int64)a4);
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v23 )
  {
    v18 = *((_QWORD *)this + 5);
    *a10 = 1;
    *(_QWORD *)(v18 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v19 = *((_QWORD *)this + 5);
    v20 = *(_QWORD *)(v19 + 16LL * a6);
    if ( v16 )
    {
      *(_QWORD *)(v19 + 16LL * a6) = v20 | 2;
    }
    else
    {
      *(_QWORD *)(v19 + 16LL * a6) = v20 | 0x400;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) = v15 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ (32 * *((_DWORD *)a4 + 15))) & 0x3E0;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 8;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x10;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 4;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x1F800;
      *((_DWORD *)PteOwnerData + 2) = *((_DWORD *)a4 + 14);
      *(_QWORD *)PteOwnerData = *((_QWORD *)a4 + 6);
      *((_QWORD *)PteOwnerData + 2) = *((_QWORD *)a4 + 2);
      *((_QWORD *)PteOwnerData + 3) = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = PteOwnerData;
    }
  }
  return 1;
}
