/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x1800D13C0
 * Callers:
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800D0EEC (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x1800D0FFC (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800D10E8 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800D11AC (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x18000D09C (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x1800D0D64 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        int *a4)
{
  unsigned int v6; // edi
  int Record; // eax
  int v8; // r14d
  __int64 v9; // rax
  HWND *v10; // rdi
  CWindowPropertyTracker::CPropertyChangeRecord *v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // r13d
  int v15; // r12d
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v19; // rax
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r10
  unsigned int v26; // eax
  unsigned int v27; // r8d
  int v28; // eax
  CWindowPropertyTracker::CPropertyChangeRecord *v30; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v31[3]; // [rsp+38h] [rbp-18h] BYREF
  const struct CStoryboard *v32; // [rsp+98h] [rbp+48h] BYREF
  HWND *v33; // [rsp+A0h] [rbp+50h]
  int *v34; // [rsp+A8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v31[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v30 = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, a3[5]);
  v8 = Record;
  if ( Record >= 0 )
  {
    v23 = 0;
    v24 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( v23 < *(_DWORD *)(v24 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v24 + 8) + 8LL * v23) == v32 )
        goto LABEL_34;
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
        v28 = DynArrayImpl<0>::AddMultipleAndSet(v25 + 8, 8u, 1, &v32);
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL * *(unsigned int *)(v25 + 32)) = v32;
        *(_DWORD *)(v25 + 32) = v27;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    goto LABEL_34;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         160LL);
  v31[1] = (struct _RTL_CRITICAL_SECTION *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_DWORD *)(v9 + 32) = 0;
    v30 = (CWindowPropertyTracker::CPropertyChangeRecord *)v9;
    v10 = v33;
    *(_QWORD *)v9 = v33[5];
    v11 = v30;
    v12 = *((_DWORD *)v30 + 8);
    v13 = v12 + 1;
    v14 = 181;
    v15 = -2147024362;
    if ( v12 + 1 >= v12 )
    {
      if ( v13 > *((_DWORD *)v30 + 7) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v30 + 8, 8u, 1, &v32);
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v30 + 1) + 8LL * *((unsigned int *)v30 + 8)) = v32;
        *((_DWORD *)v11 + 8) = v13;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    *((_BYTE *)v30 + 44) = *((_BYTE *)v10 + 668) & 1;
    *((_DWORD *)v30 + 12) = *((_DWORD *)v10 + 54);
    *((_DWORD *)v30 + 13) = *((_DWORD *)v10 + 55);
    v17 = 0;
    if ( *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54) >= 0 )
      v17 = *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54);
    *((_DWORD *)v30 + 14) = v17;
    v18 = 0;
    if ( *((_DWORD *)v10 + 57) - *((_DWORD *)v10 + 55) >= 0 )
      v18 = *((_DWORD *)v10 + 57) - *((_DWORD *)v10 + 55);
    *((_DWORD *)v30 + 15) = v18;
    *((_OWORD *)v30 + 4) = *(_OWORD *)(v10 + 29);
    *((_OWORD *)v30 + 5) = *(_OWORD *)(v10 + 31);
    *((_DWORD *)v30 + 24) = *((_DWORD *)v10 + 29);
    v19 = v30;
    *(_OWORD *)((char *)v30 + 100) = *(_OWORD *)((char *)v30 + 44);
    *(_OWORD *)((char *)v19 + 116) = *(_OWORD *)((char *)v19 + 60);
    *(_OWORD *)((char *)v19 + 132) = *(_OWORD *)((char *)v19 + 76);
    *(_QWORD *)((char *)v19 + 148) = *(_QWORD *)((char *)v19 + 92);
    LODWORD(v19) = *((_DWORD *)this + 6);
    v20 = (_DWORD)v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      v6 = -2147024362;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v14);
      v22 = 142;
      goto LABEL_22;
    }
    if ( v20 > *((_DWORD *)this + 5) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, &v30);
      v6 = v21;
      if ( v21 < 0 )
      {
        v15 = v21;
        v14 = 192;
        goto LABEL_20;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 6)) = v30;
      *((_DWORD *)this + 6) = v20;
      v6 = 0;
    }
    v8 = *((_DWORD *)this + 6) - 1;
LABEL_34:
    *v34 = v8;
    goto LABEL_35;
  }
  v6 = -2147024882;
  v22 = 125;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v22);
  if ( v30 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v30);
LABEL_35:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v31);
  return v6;
}
