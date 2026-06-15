/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801226DC
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x18011FF70 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x18011FDF4 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18011FE30 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18011FED4 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180123458 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x180124A38 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 *     WPP_SF_qdDdigi @ 0x180124CC0 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x180165008 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x1801650B4 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rsi
  int *v2; // rbx
  _QWORD *v3; // r12
  int v4; // r14d
  unsigned int v5; // ecx
  unsigned __int8 v6; // r8
  int v7; // ecx
  unsigned __int8 v8; // r8
  __int64 v9; // r8
  double v10; // xmm0_8
  __int64 v11; // rcx
  double v12; // xmm1_8
  __int64 v13; // rax
  int *v14; // rax
  ATL::CAtlException *v15; // rbx
  unsigned __int64 v16; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v17; // [rsp+38h] [rbp-A0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-88h] BYREF
  char v19; // [rsp+58h] [rbp-80h]
  unsigned __int64 v20; // [rsp+60h] [rbp-78h] BYREF
  int *v21; // [rsp+68h] [rbp-70h]
  int v22; // [rsp+70h] [rbp-68h] BYREF
  int *v23; // [rsp+78h] [rbp-60h] BYREF
  __int64 v24; // [rsp+80h] [rbp-58h] BYREF
  _QWORD *v25; // [rsp+88h] [rbp-50h] BYREF
  void *Src; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v27; // [rsp+98h] [rbp-40h] BYREF
  CMonitor *v28; // [rsp+E0h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+E8h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+F0h] [rbp+18h] BYREF
  int v31; // [rsp+F8h] [rbp+20h] BYREF

  v28 = this;
  v1 = this;
  v2 = 0LL;
  v21 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)((char *)v1 + 96);
  v25 = (_QWORD *)((char *)v1 + 96);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 12) + 40LL))(*((_QWORD *)v1 + 12), &v31);
  if ( v4 < 0 )
  {
    if ( v19 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_39;
  }
  while ( 1 )
  {
    if ( !v31 )
      goto LABEL_37;
    if ( !*((_QWORD *)v1 + 41) )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x24u,
          (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
          v31);
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **, CMonitor **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 12) + 24LL))(
             *((_QWORD *)v1 + 12),
             &v25,
             &v28,
             &v29,
             &v20,
             &v30);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 12) + 32LL))(
               *((_QWORD *)v1 + 12),
               (unsigned int)v28);
        if ( v4 >= 0 )
        {
          AEWMILOG_GLITCH(v5, v1, v6, 0xCu, v20, v30, v16, v17);
          if ( (byte_1801C3041 & 1) != 0 )
            McTemplateU0pxx_EtwEventWriteTransfer(v7, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v20, v30);
          ShipAssert(90113LL, 1LL);
        }
      }
LABEL_37:
      if ( v19 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_39;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 11) + 48LL))(*((_QWORD *)v1 + 11), &v22);
    if ( v4 < 0 )
      goto LABEL_37;
    v4 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)*v3 + 24LL))(
           *v3,
           &Src,
           &v29,
           &v30);
    if ( v4 < 0 )
      goto LABEL_37;
    v2 = (int *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 312);
    v21 = v2;
    AEWMILOG_POSITION(*v2, v1, v8, 5u, (unsigned __int64)&v20, *v2, v20, (unsigned int)v29);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      v17 = v20;
      LODWORD(v16) = v22;
      WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, v9, v2, v29, v30);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**((_QWORD **)v1 + 13) + 32LL))(
           *((_QWORD *)v1 + 13),
           &v20,
           &v24);
    if ( v4 < 0 )
      goto LABEL_37;
    if ( (v20 & 0x8000000000000000uLL) != 0LL )
      v10 = (double)(int)(v20 & 1 | (v20 >> 1)) + (double)(int)(v20 & 1 | (v20 >> 1));
    else
      v10 = (double)(int)v20;
    v11 = *((_QWORD *)v1 + 18);
    if ( v11 < 0 )
    {
      v13 = *((_QWORD *)v1 + 18) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (double)(int)v13 + (double)(int)v13;
    }
    else
    {
      v12 = (double)(int)v11;
    }
    *((double *)v2 + 2) = v10 / v12;
    memcpy_0(*((void **)v2 + 4), Src, (unsigned int)v29 * *((_QWORD *)v1 + 57));
    v2[3] = v29;
    v2[6] = 0;
    v2[1] = v30;
    try
    {
      v14 = v2;
      v2 = 0LL;
      v21 = 0LL;
      v23 = v14;
      ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
        (__int64 *)v1 + 45,
        (__int64)&v23);
    }
    catch ( ATL::CAtlException *v27 )
    {
      v15 = v27;
      if ( *(_DWORD *)v27 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v23) = *(_DWORD *)v15;
      v4 = (int)v23;
      if ( (int)v23 >= 0 )
      {
        v1 = v28;
        v2 = v21;
        v3 = v25;
        goto LABEL_35;
      }
      if ( v19 )
        LeaveCriticalSection(lpCriticalSection);
      v1 = v28;
      v2 = v21;
LABEL_39:
      if ( v4 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x25u,
            (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
            v4);
        }
        CMonitor::AbortMonitor(v1);
      }
      if ( v2 )
        CMonitor::SampleDataBlock::`scalar deleting destructor'((void **)v2);
    }
LABEL_35:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 12) + 32LL))(
           *((_QWORD *)v1 + 12),
           (unsigned int)v29);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 12) + 40LL))(*((_QWORD *)v1 + 12), &v31);
      if ( v4 >= 0 )
        continue;
    }
    goto LABEL_37;
  }
}
