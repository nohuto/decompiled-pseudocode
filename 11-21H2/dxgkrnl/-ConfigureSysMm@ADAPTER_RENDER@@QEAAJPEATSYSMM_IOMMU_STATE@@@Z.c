/*
 * XREFs of ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0204D14
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0203930 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2W4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0204DF0 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2W4SYSMM_LEGACY_IOMMU_FLA.c)
 */

__int64 __fastcall ADAPTER_RENDER::ConfigureSysMm(ADAPTER_RENDER *this, union SYSMM_IOMMU_STATE *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // r9
  bool v7; // al
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-18h]

  v3 = *((_QWORD *)this + 2);
  v4 = *(_DWORD *)(v3 + 2752);
  if ( (v4 & 1) != 0 && (v5 = *(_DWORD *)(v3 + 2156), (v5 & 0x800) != 0) )
  {
    v6 = 2 - (unsigned int)((v4 & 0x10) != 0);
  }
  else
  {
    v5 = *(_DWORD *)(v3 + 2156);
    v6 = 0LL;
  }
  v7 = (v5 & 0x2000) != 0;
  v8 = v5 >> 11;
  LOBYTE(v8) = v8 & 1;
  v13 = v6;
  LOBYTE(v6) = v7;
  v9 = SysMmFinalizeInitialization(*(_QWORD *)(v3 + 224), *(_QWORD *)(v3 + 2088), v8, v6, v13, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    return v10;
  }
  else
  {
    *(_QWORD *)&v14 = ADAPTER_RENDER::IommuOnEnable;
    *((_QWORD *)&v14 + 1) = ADAPTER_RENDER::IommuOnDisable;
    *(_QWORD *)&v15 = ADAPTER_RENDER::IommuBeginExclusiveAccess;
    *((_QWORD *)&v15 + 1) = ADAPTER_RENDER::IommuEndExclusiveAccess;
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
    result = 0LL;
    *(_OWORD *)(v11 + 304) = v14;
    *(_QWORD *)(v11 + 336) = this;
    *(_OWORD *)(v11 + 320) = v15;
  }
  return result;
}
