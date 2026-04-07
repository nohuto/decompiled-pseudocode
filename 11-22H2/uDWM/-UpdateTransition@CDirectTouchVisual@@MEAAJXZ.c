/*
 * XREFs of ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18006C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800465F0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180046640 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180046E74 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004A8AC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateTransition(CDirectTouchVisual *this)
{
  float v2; // xmm7_4
  __int64 v3; // rax
  int v4; // ecx
  float v5; // xmm6_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  __int64 v10; // rax
  _BYTE *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  bool v17; // al
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8

  v2 = FLOAT_1_0;
  if ( *((_QWORD *)this + 50) )
  {
LABEL_15:
    v5 = 0.0;
    goto LABEL_16;
  }
  v3 = *((_QWORD *)this + 48);
  if ( !v3 )
  {
    if ( (*((_BYTE *)this + 376) & 8) != 0 )
    {
      v5 = FLOAT_1_0;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v4 = *((_DWORD *)this + 94);
  if ( !*(_BYTE *)(v3 + 72) )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = (float)((float)*(double *)(v3 + 48) * (float)(1.0 - *((float *)this + 88))) + *((float *)this + 88);
      goto LABEL_9;
    }
LABEL_8:
    v5 = 0.0;
    goto LABEL_9;
  }
  if ( (v4 & 8) == 0 )
    goto LABEL_8;
  v5 = FLOAT_1_0;
LABEL_9:
  v6 = *((float *)this + 85);
  v7 = *((float *)this + 91);
  v8 = *(double *)(v3 + 48);
  if ( v6 < v8 )
    v9 = (float)((float)((float)(v8 - v6) / *((float *)this + 86)) * (float)(*((float *)this + 92) - v7)) + v7;
  else
    v9 = (float)((float)(v7 - *((float *)this + 90)) * (float)(v8 / v6)) + *((float *)this + 90);
  CDirectTouchVisual::UpdateLocationWithScalar(
    this,
    (const struct tagPOINT *)this + 38,
    (const struct tagRECT *)((char *)this + 312),
    v9);
LABEL_16:
  v10 = *((_QWORD *)this + 49);
  v11 = (char *)this + 408;
  if ( v10 )
  {
    v2 = *(double *)(v10 + 48);
  }
  else if ( *v11 )
  {
    v2 = 0.0;
  }
  CVisual::SetOpacity(this, (float)(v2 * v5));
  v14 = *((_QWORD *)this + 48);
  if ( v14 && *(_BYTE *)(v14 + 72) )
    CDirectTouchVisual::StopDownTimeline(this, v12, v13);
  v15 = *((_QWORD *)this + 49);
  if ( v15 && *(_BYTE *)(v15 + 72) )
  {
    *v11 = 1;
    v16 = (*(_DWORD *)(v15 + 8))-- == 1;
    v17 = CDesktopManager::s_fTimelineDirty;
    if ( v16 )
      v17 = 1;
    *((_QWORD *)this + 49) = 0LL;
    CDesktopManager::s_fTimelineDirty = v17;
  }
  else
  {
    v17 = CDesktopManager::s_fTimelineDirty;
  }
  v18 = *((_QWORD *)this + 50);
  if ( v18 && *(_BYTE *)(v18 + 72) )
  {
    v16 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v16 )
      v17 = 1;
    *((_QWORD *)this + 50) = 0LL;
    CDesktopManager::s_fTimelineDirty = v17;
    v19 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            120LL);
    if ( v19 )
    {
      CTimelineBase::CTimelineBase(v19, *((float *)this + 84), 0.0, 1.0, 0);
      *v20 = &CTimeline<float>::`vftable';
    }
    else
    {
      v20 = 0LL;
    }
    *((_QWORD *)this + 48) = v20;
  }
  if ( !*((_QWORD *)this + 48) && !*((_QWORD *)this + 49) && !*((_QWORD *)this + 50) )
    CDirectTouchVisual::StopTimer(this);
  return 0LL;
}
