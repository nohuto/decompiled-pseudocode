/*
 * XREFs of ?ndisReinitializeHistograms@@YAJXZ @ 0x1C0114D58
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0139008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1C0008E04 (GetGlobalNamespace.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C0113CB4 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ndisHistogramDeleteAllEntries @ 0x1C0122F64 (ndisHistogramDeleteAllEntries.c)
 */

NTSTATUS ndisReinitializeHistograms(void)
{
  NTSTATUS result; // eax
  _DWORD *PoolWithTag; // rax
  void *v2; // rbx
  _DWORD *v3; // rsi
  _DWORD *v4; // r14
  KnobNamespace *GlobalNamespace; // rax
  int v6; // edi
  unsigned __int8 (*v7)(void *, const struct KnobDescriptor *, unsigned __int64 *); // [rsp+28h] [rbp-E0h]
  int v8; // [rsp+48h] [rbp-C0h] BYREF
  KLockHolder v9; // [rsp+50h] [rbp-B8h] BYREF
  struct KnobDescriptor v10; // [rsp+68h] [rbp-A0h] BYREF
  const wchar_t *v11; // [rsp+98h] [rbp-70h]
  char *v12; // [rsp+A0h] [rbp-68h]
  __int64 v13; // [rsp+A8h] [rbp-60h]
  __int128 v14; // [rsp+B0h] [rbp-58h]
  __int64 v15; // [rsp+C0h] [rbp-48h]
  const wchar_t *v16; // [rsp+C8h] [rbp-40h]
  char *v17; // [rsp+D0h] [rbp-38h]
  __int64 v18; // [rsp+D8h] [rbp-30h]
  __int128 v19; // [rsp+E0h] [rbp-28h]
  __int64 v20; // [rsp+F0h] [rbp-18h]
  const wchar_t *v21; // [rsp+F8h] [rbp-10h]
  char *v22; // [rsp+100h] [rbp-8h]
  __int64 v23; // [rsp+108h] [rbp+0h]
  __int128 v24; // [rsp+110h] [rbp+8h]
  __int64 v25; // [rsp+120h] [rbp+18h]
  const wchar_t *v26; // [rsp+128h] [rbp+20h]
  char *v27; // [rsp+130h] [rbp+28h]
  __int64 v28; // [rsp+138h] [rbp+30h]
  __int128 v29; // [rsp+140h] [rbp+38h]
  __int64 v30; // [rsp+150h] [rbp+48h]
  const wchar_t *v31; // [rsp+158h] [rbp+50h]
  char *v32; // [rsp+160h] [rbp+58h]
  __int64 v33; // [rsp+168h] [rbp+60h]
  __int128 v34; // [rsp+170h] [rbp+68h]
  __int64 v35; // [rsp+180h] [rbp+78h]

  result = RtlRunOnceExecuteOnce(&stru_1C00EE2B0, (PRTL_RUN_ONCE_INIT_FN)ndisHistogramRunOnceCallback, 0LL, 0LL);
  if ( !result )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6768444Eu);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      v3 = PoolWithTag + 8;
      *((_QWORD *)PoolWithTag + 3) = 1440LL;
      v4 = PoolWithTag + 9;
      PoolWithTag[8] = 20;
      PoolWithTag[9] = 100000;
      *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
      *(_QWORD *)PoolWithTag = PoolWithTag;
      v10.Name = L"SharedMemoryAllocationDurationHistogram";
      v10.Value = &v8;
      v11 = L"SharedMemoryAllocationDurationHistogramAutoReset";
      v12 = (char *)(PoolWithTag + 5);
      LOBYTE(v8) = 0;
      v10.DefaultValue = 0LL;
      v10.Flags = BooleanDatatype;
      *(_OWORD *)&v10.MinimumValue = 0LL;
      v13 = (unsigned int)PoolWithTag[5];
      v15 = 0LL;
      v16 = L"SharedMemoryAllocationDurationHistogramMaxHistograms";
      v17 = (char *)(PoolWithTag + 6);
      v14 = 0LL;
      v18 = (unsigned int)PoolWithTag[6];
      v20 = 0LL;
      v21 = L"SharedMemoryAllocationDurationHistogramStart";
      v19 = 0LL;
      v22 = (char *)(PoolWithTag + 8);
      v23 = (unsigned int)PoolWithTag[8];
      v25 = 0LL;
      v26 = L"SharedMemoryAllocationDurationHistogramNumIntervals";
      v24 = 0LL;
      v27 = (char *)(PoolWithTag + 8);
      v28 = (unsigned int)PoolWithTag[8];
      v30 = 0LL;
      v31 = L"SharedMemoryAllocationDurationHistogramIntervalLength";
      v29 = 0LL;
      v32 = (char *)(PoolWithTag + 9);
      v33 = (unsigned int)PoolWithTag[9];
      v35 = 0LL;
      v34 = 0LL;
      GlobalNamespace = GetGlobalNamespace();
      v6 = KnobNamespace::BuildCollection(GlobalNamespace, &v10, 6uLL, 0LL, v7, 0LL);
      if ( !v6 )
      {
        if ( !(_BYTE)v8 || *v3 >= 2u && *v4 )
        {
          v9.m_State = Unlocked;
          v9.m_Lock = (KPushLockBase *)&qword_1C00ECD48;
          v9.m_Region.m_Entered = 0;
          KLockHolder::AcquireExclusive(&v9);
          if ( qword_1C00EE648 )
          {
            ndisHistogramDeleteAllEntries();
            if ( qword_1C00EE648 )
              ExFreePoolWithTag(qword_1C00EE648, 0x6768444Eu);
            qword_1C00EE648 = 0LL;
          }
          if ( (_BYTE)v8 )
          {
            qword_1C00EE648 = v2;
            v2 = 0LL;
          }
          v6 = 0;
          KLockHolder::~KLockHolder(&v9);
        }
        else
        {
          v6 = -1073741811;
        }
      }
    }
    else
    {
      v6 = -1073741670;
      v2 = 0LL;
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6768444Eu);
    return v6;
  }
  return result;
}
