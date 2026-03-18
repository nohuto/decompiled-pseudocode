/*
 * XREFs of ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00D53E0
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C00A55BC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00D7CA0 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 * Callees:
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0019230 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0019C1C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A46C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0033358 (-ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        VIDMM_SEGMENT **a3,
        struct _MDL **a4)
{
  __int64 *v4; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _MDL *v12; // rax
  __int64 v13; // rcx
  int v14; // edi

  v4 = *a2;
  v7 = **a2;
  if ( VIDMM_CPU_HOST_APERTURE::ReclaimRange((VIDMM_CPU_HOST_APERTURE *)a3, (struct _VIDMM_GLOBAL_ALLOC *)v7) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  }
  else
  {
    v14 = VIDMM_CPU_HOST_APERTURE::AcquireRange((unsigned __int64)a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      return (unsigned int)v14;
    }
    v14 = VIDMM_CPU_HOST_APERTURE::MapRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      goto LABEL_6;
    }
  }
  v12 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
          (VIDMM_CPU_HOST_APERTURE *)a3,
          (void *)v4[2],
          (const struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v7 + 488),
          *(_QWORD *)(v7 + 128),
          *(_QWORD *)(v7 + 16));
  if ( !v12 )
  {
    WdLogSingleEntry1(1LL, 23698LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    v14 = -1073741801;
LABEL_6:
    *a4 = 0LL;
    return (unsigned int)v14;
  }
  *a4 = v12;
  return 0LL;
}
