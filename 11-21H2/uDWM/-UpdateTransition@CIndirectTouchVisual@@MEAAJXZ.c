/*
 * XREFs of ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C15B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18005F94C (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800C0E00 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C1414 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C1434 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C146C (-StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C14A4 (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C156C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::UpdateTransition(CIndirectTouchVisual *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // r8
  CTouchVisual *v8; // rcx

  v2 = *((_QWORD *)this + 45);
  if ( v2 )
  {
    v3 = (int)((float)*(double *)(v2 + 48) + 0.5);
    if ( v3 >= 0xF )
      v3 = 14;
    *((_DWORD *)this + 88) = v3;
    if ( *(_BYTE *)(v2 + 72) )
      CIndirectTouchVisual::StopFrameTimeline(this);
  }
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
  {
    *((float *)this + 87) = *(double *)(v4 + 48);
    if ( *(_BYTE *)(v4 + 72) )
      CIndirectTouchVisual::StopOpacityTimeline(this);
  }
  v5 = *((_QWORD *)this + 46);
  if ( v5 && *(_BYTE *)(v5 + 72) )
  {
    if ( *((float *)this + 86) != 0.0 )
    {
      v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             112LL);
      if ( v6 )
      {
        CTimelineBase::CTimelineBase(
          v6,
          (float)(*((float *)this + 84) * *((float *)this + 86)),
          *((float *)this + 87),
          0.0,
          0);
        *v7 = &CTimeline<float>::`vftable';
        *((_QWORD *)this + 47) = v7;
        if ( v7 )
        {
LABEL_17:
          CIndirectTouchVisual::StopTimeoutTimeline(this);
          goto LABEL_18;
        }
      }
      else
      {
        *((_QWORD *)this + 47) = 0LL;
      }
    }
    *((_DWORD *)this + 87) = 0;
    goto LABEL_17;
  }
LABEL_18:
  CIndirectTouchVisual::UpdateOpacityAndSource((CImage **)this);
  if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 47) && !*((_QWORD *)this + 46) )
  {
    CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
    CIndirectTouchVisual::StopAllTimelines(this);
    CTouchVisual::UnRegisterGlobalTimer(v8);
  }
  return 0LL;
}
