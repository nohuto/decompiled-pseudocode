/*
 * XREFs of ?ndisReinitializeHistograms@@YAJXZ @ 0x1C012085C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1C0006BEC (GetGlobalNamespace.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@UNdisHistogramGlobal@@U?$default_delete@UNdisHistogramGlobal@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0074520 (--1-$unique_ptr@UNdisHistogramGlobal@@U-$default_delete@UNdisHistogramGlobal@@@wistd@@@wistd@@QE.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C011A06C (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ndisHistogramDeleteAllEntries @ 0x1C012EACC (ndisHistogramDeleteAllEntries.c)
 */

NTSTATUS ndisReinitializeHistograms(void)
{
  NTSTATUS result; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v2; // rdi
  unsigned int *v3; // rbx
  _DWORD *v4; // r14
  _DWORD *v5; // r15
  KnobNamespace *GlobalNamespace; // rax
  int v7; // esi
  unsigned __int8 (*v8)(void *, const struct KnobDescriptor *, unsigned __int64 *); // [rsp+28h] [rbp-E0h]
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int *v10; // [rsp+50h] [rbp-B8h] BYREF
  KLockHolder v11; // [rsp+58h] [rbp-B0h] BYREF
  struct KnobDescriptor v12; // [rsp+78h] [rbp-90h] BYREF
  const wchar_t *v13; // [rsp+A8h] [rbp-60h]
  unsigned int *v14; // [rsp+B0h] [rbp-58h]
  __int64 v15; // [rsp+B8h] [rbp-50h]
  __int128 v16; // [rsp+C0h] [rbp-48h]
  __int64 v17; // [rsp+D0h] [rbp-38h]
  const wchar_t *v18; // [rsp+D8h] [rbp-30h]
  unsigned int *v19; // [rsp+E0h] [rbp-28h]
  __int64 v20; // [rsp+E8h] [rbp-20h]
  __int128 v21; // [rsp+F0h] [rbp-18h]
  __int64 v22; // [rsp+100h] [rbp-8h]
  const wchar_t *v23; // [rsp+108h] [rbp+0h]
  unsigned int *v24; // [rsp+110h] [rbp+8h]
  __int64 v25; // [rsp+118h] [rbp+10h]
  __int128 v26; // [rsp+120h] [rbp+18h]
  __int64 v27; // [rsp+130h] [rbp+28h]
  const wchar_t *v28; // [rsp+138h] [rbp+30h]
  unsigned int *v29; // [rsp+140h] [rbp+38h]
  __int64 v30; // [rsp+148h] [rbp+40h]
  __int128 v31; // [rsp+150h] [rbp+48h]
  __int64 v32; // [rsp+160h] [rbp+58h]
  const wchar_t *v33; // [rsp+168h] [rbp+60h]
  unsigned int *v34; // [rsp+170h] [rbp+68h]
  __int64 v35; // [rsp+178h] [rbp+70h]
  __int128 v36; // [rsp+180h] [rbp+78h]
  __int64 v37; // [rsp+190h] [rbp+88h]

  result = RtlRunOnceExecuteOnce(&stru_1C00F7300, (PRTL_RUN_ONCE_INIT_FN)ndisHistogramRunOnceCallback, 0LL, 0LL);
  if ( !result )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6768444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = 0LL;
      v7 = -1073741670;
      goto LABEL_19;
    }
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    v3 = PoolWithTag;
    *((_QWORD *)PoolWithTag + 3) = 1440LL;
    PoolWithTag[8] = 20;
    PoolWithTag[9] = 100000;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    v4 = PoolWithTag + 8;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    v5 = PoolWithTag + 9;
    v10 = PoolWithTag;
    v12.Name = L"SharedMemoryAllocationDurationHistogram";
    v12.Value = &v9;
    v13 = L"SharedMemoryAllocationDurationHistogramAutoReset";
    v14 = PoolWithTag + 5;
    LOBYTE(v9) = 0;
    v12.DefaultValue = 0LL;
    v12.Flags = BooleanDatatype;
    *(_OWORD *)&v12.MinimumValue = 0LL;
    v15 = PoolWithTag[5];
    v17 = 0LL;
    v18 = L"SharedMemoryAllocationDurationHistogramMaxHistograms";
    v19 = PoolWithTag + 6;
    v16 = 0LL;
    v20 = PoolWithTag[6];
    v22 = 0LL;
    v23 = L"SharedMemoryAllocationDurationHistogramStart";
    v21 = 0LL;
    v24 = PoolWithTag + 8;
    v25 = PoolWithTag[8];
    v27 = 0LL;
    v28 = L"SharedMemoryAllocationDurationHistogramNumIntervals";
    v26 = 0LL;
    v29 = PoolWithTag + 8;
    v30 = PoolWithTag[8];
    v32 = 0LL;
    v33 = L"SharedMemoryAllocationDurationHistogramIntervalLength";
    v31 = 0LL;
    v34 = PoolWithTag + 9;
    v35 = PoolWithTag[9];
    v37 = 0LL;
    v36 = 0LL;
    GlobalNamespace = GetGlobalNamespace();
    v7 = KnobNamespace::BuildCollection(GlobalNamespace, &v12, 6uLL, 0LL, v8, 0LL);
    if ( v7 )
    {
LABEL_19:
      wistd::unique_ptr<NdisHistogramGlobal,wistd::default_delete<NdisHistogramGlobal>>::~unique_ptr<NdisHistogramGlobal,wistd::default_delete<NdisHistogramGlobal>>((void **)&v10);
      return v7;
    }
    if ( (_BYTE)v9 && (*v4 < 2u || !*v5) )
    {
      v7 = -1073741811;
      goto LABEL_19;
    }
    v11.m_State = Unlocked;
    v11.m_Lock = (KPushLockBase *)&qword_1C00F5D28;
    v11.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v11);
    if ( qword_1C00F7708 )
    {
      ndisHistogramDeleteAllEntries();
      if ( qword_1C00F7708 )
        ExFreePoolWithTag(qword_1C00F7708, 0x6768444Eu);
      qword_1C00F7708 = 0LL;
    }
    if ( (_BYTE)v9 )
    {
      v3 = 0LL;
      qword_1C00F7708 = v2;
    }
    KLockHolder::~KLockHolder(&v11);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x6768444Eu);
    return 0;
  }
  return result;
}
