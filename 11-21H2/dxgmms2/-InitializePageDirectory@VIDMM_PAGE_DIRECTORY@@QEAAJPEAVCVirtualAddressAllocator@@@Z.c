/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C009FDA0
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C009FD00 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00A1478 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::InitializePageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int v3; // ecx
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // esi
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int VidMmObjects; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx

  v3 = *(_DWORD *)this;
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 40224LL) + 1584LL * ((v3 >> 7) & 0x1F);
  v6 = *((_QWORD *)a2 + 15) + 32LL * ((v3 >> 7) & 0x1F);
  if ( (v3 & 0x10) != 0 && !*(_DWORD *)(v6 + 16) )
    return 0LL;
  v7 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(32 * **(_DWORD **)(v5 + 440))) & 0x1000;
  *(_DWORD *)this = v7;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v5 + 424) << 13)) & 0xE000;
  *(_DWORD *)this = v8;
  if ( (v8 & 0x10) != 0 )
  {
    v10 = *(_DWORD *)(v6 + 16);
    v11 = *(_DWORD *)(v6 + 20);
  }
  else
  {
    v9 = v8 & 7;
    v10 = *(_DWORD *)(v5 + 48 * v9 + 88);
    v11 = *(_DWORD *)(v5 + 48 * (v9 + 2));
  }
  v12 = 2 * v10;
  *(_DWORD *)this = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 6)) & 0x40;
  if ( (v8 & 0x1020) != 0x1020 )
    v12 = v10;
  v13 = 16 * v12;
  if ( !is_mul_ok(v12, 0x10uLL) )
    v13 = -1LL;
  v14 = operator new[](v13, 0x37356956u, 256LL);
  *((_QWORD *)this + 5) = v14;
  if ( !v14 )
  {
    WdLogSingleEntry1(1LL, 4309LL);
LABEL_19:
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
    return 3221225495LL;
  }
  v15 = 8 * v12;
  if ( !is_mul_ok(v12, 8uLL) )
    v15 = -1LL;
  v16 = operator new[](v15, 0x33356956u, 256LL);
  *((_QWORD *)this + 6) = v16;
  if ( !v16 )
  {
    WdLogSingleEntry1(1LL, 4316LL);
    goto LABEL_19;
  }
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   this,
                   a2,
                   v11,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 24));
  if ( VidMmObjects >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, 4323LL);
  DxgkLogInternalTriageEvent(v20, 0x40000LL);
  return (unsigned int)VidMmObjects;
}
