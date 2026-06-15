/*
 * XREFs of ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180122CA8
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x18011FF70 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_qdd @ 0x1800DB85C (WPP_SF_qdd.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18011FE30 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18011FED4 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x18012014C (-GetHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x1801216F4 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180123458 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x180124A38 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 *     WPP_SF_qdDdigi @ 0x180124CC0 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x180165008 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x1801650B4 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::ProcessRenderBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rbx
  int v2; // edi
  unsigned __int8 v3; // r8
  unsigned int v4; // ecx
  int v5; // ecx
  unsigned int v6; // r12d
  double *v7; // r15
  unsigned __int8 v8; // r8
  double v9; // xmm6_8
  __int64 v10; // rcx
  double v11; // xmm0_8
  __int64 v12; // rax
  double v13; // xmm6_8
  double v14; // xmm7_8
  double v15; // xmm0_8
  __int64 v16; // rcx
  double v17; // xmm1_8
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r13d
  __int64 v21; // rax
  int v22; // edi
  __int64 v23; // r9
  ATL::CAtlException *v24; // rbx
  unsigned __int64 v25; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v28; // [rsp+38h] [rbp-B0h]
  __int64 v29; // [rsp+50h] [rbp-98h] BYREF
  __int64 v30; // [rsp+58h] [rbp-90h] BYREF
  void *v31; // [rsp+60h] [rbp-88h] BYREF
  __int64 v32; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-78h] BYREF
  ATL::CAtlException *v34; // [rsp+78h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-68h] BYREF
  char v36; // [rsp+88h] [rbp-60h]
  int v38; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+108h] [rbp+20h] BYREF

  v1 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  v36 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 24) + 48LL))(*((_QWORD *)v1 + 24), &v38);
  if ( v2 < 0 )
    goto LABEL_2;
  if ( *((_QWORD *)v1 + 47) )
    goto LABEL_14;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 26) + 32LL))(
         *((_QWORD *)v1 + 26),
         &v40,
         &v39);
  if ( v2 < 0 )
  {
LABEL_2:
    if ( v36 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_48:
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x29u,
        (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
  }
  else
  {
    v4 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids);
    }
    AEWMILOG_GLITCH(v4, v1, v3, 0xDu, v40, v39, v27, v28);
    if ( (byte_1801C3041 & 1) != 0 )
      McTemplateU0pxx_EtwEventWriteTransfer(v5, (unsigned int)&EVT_GLITCH_CM_RENDER, (_DWORD)v1, v40, v39);
    ShipAssert(90113LL, 0LL);
LABEL_14:
    while ( *((_QWORD *)v1 + 47) )
    {
      v6 = *((_DWORD *)v1 + 64) - v38;
      if ( !v6 )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v22 = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 45)
                          + 12LL);
          v23 = *(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 45);
          LODWORD(v26) = 0;
          LODWORD(v25) = v22;
          WPP_SF_qdd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x28u,
            (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
            v23,
            v25,
            v26);
        }
        break;
      }
      v7 = *(double **)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 45);
      v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**((_QWORD **)v1 + 26) + 32LL))(
             *((_QWORD *)v1 + 26),
             &v40,
             &v30);
      if ( v2 < 0 )
        goto LABEL_46;
      if ( (v40 & 0x8000000000000000uLL) != 0LL )
        v9 = (double)(int)(v40 & 1 | (v40 >> 1)) + (double)(int)(v40 & 1 | (v40 >> 1));
      else
        v9 = (double)(int)v40;
      v10 = *((_QWORD *)v1 + 33);
      if ( v10 < 0 )
      {
        v12 = *((_QWORD *)v1 + 33) & 1LL | ((unsigned __int64)v10 >> 1);
        v11 = (double)(int)v12 + (double)(int)v12;
      }
      else
      {
        v11 = (double)(int)v10;
      }
      v13 = v9 / v11;
      v14 = (double)*(int *)(*((_QWORD *)v1 + 14) + 4LL) * v13;
      if ( *((double *)v1 + 60) == 0.0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)v1 + 13) + 32LL))(
               *((_QWORD *)v1 + 13),
               &v29,
               v33);
        if ( v2 < 0 )
          goto LABEL_46;
        if ( v29 < 0 )
          v15 = (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1))
              + (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1));
        else
          v15 = (double)(int)v29;
        v16 = *((_QWORD *)v1 + 18);
        if ( v16 < 0 )
        {
          v18 = *((_QWORD *)v1 + 18) & 1LL | ((unsigned __int64)v16 >> 1);
          v17 = (double)(int)v18 + (double)(int)v18;
        }
        else
        {
          v17 = (double)(int)v16;
        }
        *((double *)v1 + 60) = v15 / v17 - v7[2];
      }
      AEWMILOG_POSITION((int)v14, v1, v8, 6u, v25, *(int *)v7, (unsigned int)(int)v14, v6);
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, v19, v7, *((_DWORD *)v7 + 3), *((_DWORD *)v7 + 1));
      }
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(int)GetTickCount() - (double)*((int *)v1 + 118)) & _xmm) > 30000.0 )
      {
        *((_DWORD *)v1 + 118) = GetTickCount();
        CMonitor::MeasureClockDrift(v1, v7[2], v13);
      }
      v20 = *((_DWORD *)v7 + 3) - *((_DWORD *)v7 + 6);
      if ( v20 >= v6 )
        v20 = v6;
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)v1 + 25) + 24LL))(
             *((_QWORD *)v1 + 25),
             v20,
             &v31);
      if ( v2 >= 0 )
      {
        memcpy_0(
          v31,
          (const void *)(*((_QWORD *)v7 + 4) + *((_QWORD *)v1 + 57) * *((unsigned int *)v7 + 6)),
          *((_QWORD *)v1 + 57) * v20);
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v1 + 25) + 32LL))(
               *((_QWORD *)v1 + 25),
               v20,
               *((_DWORD *)v7 + 1) & 2);
        if ( v2 >= 0 )
        {
          *((_DWORD *)v7 + 6) += v20;
          if ( *((_DWORD *)v7 + 6) != *((_DWORD *)v7 + 3) )
            goto LABEL_45;
          v39 = 0LL;
          v21 = ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 360);
          v2 = 0;
          try
          {
            v39 = 0LL;
            v32 = v21;
            ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
              (__int64 *)v1 + 39,
              (__int64)&v32);
          }
          catch ( ATL::CAtlException *v34 )
          {
            v24 = v34;
            if ( *(_DWORD *)v34 == -1073741571 )
              _o__resetstkoflw();
            LODWORD(v39) = *(_DWORD *)v24;
            v1 = this;
            v2 = v39;
          }
          if ( v2 >= 0 )
          {
LABEL_45:
            v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 24) + 48LL))(*((_QWORD *)v1 + 24), &v38);
            if ( v2 >= 0 )
              continue;
          }
        }
      }
LABEL_46:
      if ( v36 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_48;
    }
    if ( v36 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
