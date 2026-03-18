/*
 * XREFs of ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00EEDDC
 * Callers:
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00EEDDC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00EF034 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00EF1C8 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00EF6C8 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00052B8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005408 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0005468 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005F60 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0087C8C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00883C8 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C008F390 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1C0091170 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00EEDDC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v2; // rcx
  VIDMM_PROCESS *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rbx
  CVirtualAddressAllocator *v7; // rax
  CVirtualAddressAllocator *v8; // rax
  CVirtualAddressAllocator *v9; // r10
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // r9
  CVirtualAddressAllocator *v17; // rcx
  _BYTE v18[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( (*(_DWORD *)(v2 + 424) & 0x100) == 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, (struct _KTHREAD **)this + 28, 0);
    DXGPUSHLOCK::AcquireExclusive(v19);
    v6 = 0LL;
    v20 = 2;
    if ( *((_QWORD *)this + 27) )
      goto LABEL_14;
    v7 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
    if ( v7 )
    {
      v8 = CVirtualAddressAllocator::CVirtualAddressAllocator(v7);
      *((_QWORD *)this + 27) = v8;
      v9 = v8;
      if ( v8 )
      {
        v10 = *((_QWORD *)this + 4);
        v11 = *(_DWORD *)(v10 + 424);
        if ( (v11 & 0x100) != 0 )
          v12 = *(_QWORD *)(v10 + 608);
        else
          v12 = v10 & -(__int64)((v11 & 0x80u) != 0);
        v13 = CVirtualAddressAllocator::InitializeVaAllocator(
                v9,
                *(_QWORD *)(*(_QWORD *)(v12 + 608) + 264LL),
                0,
                0LL,
                0LL);
        v17 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
        if ( v13 < 0 )
        {
          CVirtualAddressAllocator::DestroyVaAllocator(v17, v14, v15, v16);
          *((_QWORD *)this + 27) = 0LL;
LABEL_15:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
          return (struct CVirtualAddressAllocator *)v6;
        }
        CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          (struct _KTHREAD **)v17,
          0x1000uLL,
          v15,
          0LL,
          0LL,
          0x1000u,
          &v21);
LABEL_14:
        v6 = *((_QWORD *)this + 27);
        goto LABEL_15;
      }
    }
    else
    {
      *((_QWORD *)this + 27) = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    return 0LL;
  }
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 608) + 64LL);
  if ( v4 )
    v3 = *(VIDMM_PROCESS **)(v4 + 8);
  return VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v3);
}
