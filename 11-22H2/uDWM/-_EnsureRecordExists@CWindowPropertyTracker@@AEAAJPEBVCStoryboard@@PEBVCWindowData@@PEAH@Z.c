/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180013F88
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180013EC4 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800D6324 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800D6434 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800D64F8 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x18000CF00 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180014280 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        int *a4)
{
  unsigned int v6; // r14d
  int Record; // eax
  int v8; // r15d
  __int64 v9; // rax
  HWND *v10; // r14
  CWindowPropertyTracker::CPropertyChangeRecord *v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // edi
  unsigned int v15; // r13d
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v19; // rax
  unsigned int v20; // r8d
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r10
  unsigned int v26; // eax
  unsigned int v27; // r8d
  int v28; // eax
  CWindowPropertyTracker::CPropertyChangeRecord *v29; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v30[3]; // [rsp+38h] [rbp-18h] BYREF
  const struct CStoryboard *v31; // [rsp+98h] [rbp+48h] BYREF
  HWND *v32; // [rsp+A0h] [rbp+50h]
  int *v33; // [rsp+A8h] [rbp+58h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v30[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v29 = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, a3[5]);
  v8 = Record;
  if ( Record >= 0 )
  {
    v23 = 0;
    v24 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( v23 < *(_DWORD *)(v24 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v24 + 8) + 8LL * v23) == v31 )
        goto LABEL_14;
      ++v23;
    }
    _mm_lfence();
    v25 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v26 = *(_DWORD *)(v25 + 32);
    v27 = v26 + 1;
    if ( v26 + 1 >= v26 )
    {
      if ( v27 > *(_DWORD *)(v25 + 28) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet(v25 + 8, 8LL, 1LL, &v31);
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL * *(unsigned int *)(v25 + 32)) = v31;
        *(_DWORD *)(v25 + 32) = v27;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         160LL);
  v30[1] = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_DWORD *)(v9 + 32) = 0;
    v29 = (CWindowPropertyTracker::CPropertyChangeRecord *)v9;
    v10 = v32;
    *(_QWORD *)v9 = v32[5];
    v11 = v29;
    v12 = *((_DWORD *)v29 + 8);
    v13 = v12 + 1;
    v14 = -2147024362;
    v15 = 181;
    if ( v12 + 1 < v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else if ( v13 <= *((_DWORD *)v29 + 7) )
    {
      *(_QWORD *)(*((_QWORD *)v29 + 1) + 8LL * *((unsigned int *)v29 + 8)) = v31;
      *((_DWORD *)v11 + 8) = v13;
    }
    else
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)v29 + 8, 8LL, 1LL, &v31);
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u, 0LL);
    }
    *((_BYTE *)v29 + 44) = *((_BYTE *)v10 + 676) & 1;
    *((_DWORD *)v29 + 12) = *((_DWORD *)v10 + 54);
    *((_DWORD *)v29 + 13) = *((_DWORD *)v10 + 55);
    v17 = 0;
    if ( *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54) >= 0 )
      v17 = *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54);
    *((_DWORD *)v29 + 14) = v17;
    v18 = 0;
    if ( *((_DWORD *)v10 + 57) - *((_DWORD *)v10 + 55) >= 0 )
      v18 = *((_DWORD *)v10 + 57) - *((_DWORD *)v10 + 55);
    *((_DWORD *)v29 + 15) = v18;
    *((_OWORD *)v29 + 4) = *(_OWORD *)(v10 + 29);
    *((_OWORD *)v29 + 5) = *(_OWORD *)(v10 + 31);
    *((_DWORD *)v29 + 24) = *((_DWORD *)v10 + 29);
    v19 = v29;
    *(_OWORD *)((char *)v29 + 100) = *(_OWORD *)((char *)v29 + 44);
    *(_OWORD *)((char *)v19 + 116) = *(_OWORD *)((char *)v19 + 60);
    *(_OWORD *)((char *)v19 + 132) = *(_OWORD *)((char *)v19 + 76);
    *(_QWORD *)((char *)v19 + 148) = *(_QWORD *)((char *)v19 + 92);
    LODWORD(v19) = *((_DWORD *)this + 6);
    v20 = (_DWORD)v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      v6 = -2147024362;
    }
    else
    {
      v14 = 0;
      if ( v20 <= *((_DWORD *)this + 5) )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 6)) = v29;
        *((_DWORD *)this + 6) = v20;
        goto LABEL_13;
      }
      v14 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v29);
      v6 = v14;
      if ( v14 >= 0 )
      {
LABEL_13:
        v6 = v14;
        v8 = *((_DWORD *)this + 6) - 1;
LABEL_14:
        *v33 = v8;
        goto LABEL_15;
      }
      v15 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15, 0LL);
    v22 = 142;
  }
  else
  {
    v6 = -2147024882;
    v14 = -2147024882;
    v22 = 125;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v22, 0LL);
  if ( v29 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v29);
LABEL_15:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v30);
  return v6;
}
