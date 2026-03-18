/*
 * XREFs of DxgkGetMemoryBudgetTarget @ 0x1C0218AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0218D54 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetMemoryBudgetTarget(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rax
  size_t v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  const void *v13; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v15; // rax
  int v16; // esi
  int v17; // r14d
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h]
  char v29; // [rsp+30h] [rbp-48h]
  unsigned int v30; // [rsp+38h] [rbp-40h]
  _BYTE v31[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v32; // [rsp+50h] [rbp-28h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2144;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2144);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2144);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v32 = 0LL;
    v8 = (unsigned int *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (unsigned int *)MmUserProbeAddress;
    v30 = *v8;
    v9 = v30;
    if ( v30 >= 0x10 )
    {
      if ( v30 > 0x10 )
        v9 = 16LL;
      v30 = v9;
      v13 = (const void *)a1;
      if ( a1 >= MmUserProbeAddress )
        v13 = (const void *)MmUserProbeAddress;
      memmove(&v32, v13, v9);
      if ( DWORD1(v32) )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v27);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL_GetGlobal();
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (struct DXGGLOBAL *)((char *)Global + 704), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
        v15 = DXGGLOBAL_GetGlobal();
        v16 = *((_DWORD *)v15 + 76123);
        DWORD2(v32) = v16;
        v17 = *((_DWORD *)v15 + 76124);
        HIDWORD(v32) = v17;
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
        v18 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v18 = (_DWORD *)MmUserProbeAddress;
        *v18 = v16;
        v19 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v19 = (_DWORD *)MmUserProbeAddress;
        *v19 = v17;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 5044LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v27);
      }
      return 3221225485LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v27);
    }
    return 3221225506LL;
  }
}
