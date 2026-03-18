/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C0342740
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C033ECC4 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C033F5C8 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  _OWORD *v12; // rax
  unsigned int Value; // r14d
  DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  _DWORD *v20; // r8
  DXGKEYEDMUTEX *v21; // r9
  int v22; // r8d
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+58h] [rbp-60h] BYREF
  __int64 v31; // [rsp+60h] [rbp-58h]
  char v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33[2]; // [rsp+70h] [rbp-48h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v34[4]; // [rsp+80h] [rbp-38h]
  unsigned int v35; // [rsp+C8h] [rbp+10h] BYREF
  int v36; // [rsp+D0h] [rbp+18h]
  DXGKEYEDMUTEX *v37; // [rsp+D8h] [rbp+20h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2066);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2066);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_13;
    }
    return 3221225485LL;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v33 = *v12;
  *(_OWORD *)&v34[0].0 = v12[1];
  Value = v34[2].Value;
  if ( v34[3].Value >= 2 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_13:
      if ( v11 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v30);
    }
    return 3221225485LL;
  }
  v35 = 0;
  v37 = 0LL;
  Global = DXGGLOBAL_GetGlobal();
  v19 = DXGGLOBAL::CreateAndOpenKeyedMutex(Global, v33[0], &v37, &v35, *(void **)&v34[0].0, Value, v34[3]);
  if ( v19 >= 0 )
  {
    v20 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = v35;
    v21 = v37;
    v22 = *((_DWORD *)v37 + 8);
    v36 = v22;
    v23 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = v22;
    DXGKEYEDMUTEX::ReleaseReference(v21);
  }
  if ( v19 < 0 )
  {
    if ( v35 )
      DXGKEYEDMUTEX::DestroyHandle(v35, v16, v17, v18);
  }
  else
  {
    v24 = v35;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v25 = ((unsigned int)v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)Current + 74) )
    {
      v26 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v24 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60)
        && (*(_DWORD *)(v26 + 16 * v25 + 8) & 0x1F) != 0 )
      {
        v27 = 2 * ((v24 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v26 + 8 * v27 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            217LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v26 = *((_QWORD *)Current + 35);
        }
        *(_DWORD *)(v26 + 8 * v27 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v30);
  return (unsigned int)v19;
}
