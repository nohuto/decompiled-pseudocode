/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFF20
 * Callers:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C015CA68 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BEDD0 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFB40 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C016D80C (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C01C010C (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, __int64 a3, unsigned int a4)
{
  char v5; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v13; // rsi
  unsigned int ProcessSessionId; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // r8
  int v17; // eax
  struct DXGGLOBAL *v18; // rax
  int v19; // esi
  unsigned int v20; // eax
  struct DXGGLOBAL *v21; // rax
  unsigned int v22; // eax
  struct DXGGLOBAL *v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _KTHREAD **v34; // rbx
  int v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h]
  char v37; // [rsp+60h] [rbp-20h]
  char v38[8]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGPROCESS *v39; // [rsp+70h] [rbp-10h]
  char v40; // [rsp+78h] [rbp-8h]

  v35 = -1;
  v5 = a3;
  v36 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2078);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2078);
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 1547LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEnumAdapters != NULL", 1547LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  v13 = Current;
  if ( Current )
  {
    if ( v5 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      Global = DXGGLOBAL_GetGlobal();
      LOBYTE(v16) = a2;
      v17 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 122), a4, v16, ProcessSessionId, 0);
      if ( v17 < 0 )
      {
        v29 = v17;
        WdLogSingleEntry1(2LL, v17);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to wait for PnP notification on current session (ntStatus = 0x%I64x).",
          v29,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v39 = v13;
    v40 = 0;
    if ( a2 == 1 )
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v38, 0);
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v18 = DXGGLOBAL_GetGlobal();
    v19 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v18,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            4LL);
    v20 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1605LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1605LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = *(_DWORD *)a1;
    }
    if ( v20 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1606LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1606LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v19 < 0 )
      goto LABEL_33;
    v21 = DXGGLOBAL_GetGlobal();
    v19 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v21,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            3LL);
    v22 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1618LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1618LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v22 = *(_DWORD *)a1;
    }
    if ( v22 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1619LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1619LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v19 < 0 )
      goto LABEL_33;
    v23 = DXGGLOBAL_GetGlobal();
    v19 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v23,
            (__int64 (__fastcall *)(_QWORD *, __int64))EnumAdaptersCallback,
            (__int64)a1,
            5LL);
    v24 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry1(1LL, 1632LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1632LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v24 = *(_DWORD *)a1;
    }
    if ( v24 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry1(1LL, 1633LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1633LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v19 < 0 )
    {
LABEL_33:
      WdLogSingleEntry1(2LL, v19);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to iterate all the adapters (ntStatus = 0x%I64x).",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      v34 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v31, v30, v32, v33);
      while ( *(_DWORD *)a1 )
        DXGADAPTER::DestroyHandle(v34, *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL * (unsigned int)--*(_DWORD *)a1));
    }
    v25 = v19;
    if ( v40 )
    {
      v40 = 0;
      (*(void (**)(void))(*((_QWORD *)v39 + 11) + 40LL))();
    }
  }
  else
  {
    v25 = -1073741811;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 )
  {
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v35);
  }
  return v25;
}
