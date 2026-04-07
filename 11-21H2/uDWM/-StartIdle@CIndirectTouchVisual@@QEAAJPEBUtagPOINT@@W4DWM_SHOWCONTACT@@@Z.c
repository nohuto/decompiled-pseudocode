/*
 * XREFs of ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C11B0
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACD7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800C0E00 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C1414 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800C14FC (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C156C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800E9150 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartIdle(__int64 a1)
{
  CIndirectTouchVisual *v2; // rcx
  int v3; // r8d
  const struct tagPOINT *v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // r8
  int v7; // eax
  unsigned int v8; // r9d
  __int64 v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // r8
  CIndirectTouchVisual *v13; // rcx

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *((_DWORD *)v2 + 89) = v3;
  CIndirectTouchVisual::UpdateLocation(v2, v4);
  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  if ( v5 )
  {
    CTimelineBase::CTimelineBase(v5, *(float *)(a1 + 336), (float)*(int *)(a1 + 352), 0.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 360) = v6;
  if ( v6 )
  {
    if ( *(float *)(a1 + 340) == 0.0 )
    {
      v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             112LL);
      if ( v9 )
      {
        CTimelineBase::CTimelineBase(v9, *(float *)(a1 + 336), *(float *)(a1 + 348), 0.0, 0);
        *v10 = &CTimeline<float>::`vftable';
      }
      else
      {
        v10 = 0LL;
      }
      *(_QWORD *)(a1 + 376) = v10;
      if ( !v10 )
      {
        v7 = -2147024882;
        v8 = 173;
        goto LABEL_19;
      }
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              112LL);
      if ( v11 )
      {
        CTimelineBase::CTimelineBase(
          v11,
          (float)(*(float *)(a1 + 336) * *(float *)(a1 + 340)),
          *(float *)(a1 + 348),
          *(float *)(a1 + 348),
          0);
        *v12 = &CTimeline<float>::`vftable';
      }
      else
      {
        v12 = 0LL;
      }
      *(_QWORD *)(a1 + 368) = v12;
      if ( !v12 )
      {
        v7 = -2147024882;
        v8 = 178;
        goto LABEL_19;
      }
    }
    v7 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
    if ( v7 >= 0 )
    {
      CIndirectTouchVisual::SetETWAnimation(a1, 1);
      return 0LL;
    }
    v8 = 181;
  }
  else
  {
    v7 = -2147024882;
    v8 = 166;
  }
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8);
  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  CIndirectTouchVisual::UpdateOpacityAndSource(v13);
  return 0LL;
}
