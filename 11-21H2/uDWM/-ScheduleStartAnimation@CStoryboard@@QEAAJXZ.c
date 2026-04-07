/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800A7848 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800B0C30 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x1800DB520 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  int v2; // ebx
  CAnimationEngine *v3; // rsi
  int v4; // r15d
  unsigned int v5; // r9d
  unsigned int v6; // edx
  __int64 v7; // r14
  __int64 v8; // r10
  unsigned int v9; // r8d
  int started; // eax
  int v11; // r9d
  unsigned int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+44h] [rbp-Ch]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = -2147467259;
  v3 = 0LL;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( *((_DWORD *)this + 30) )
    {
      v3 = CDesktopManager::AcquireAnimationEngine();
      if ( v3 )
      {
        v4 = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
        v15 = 0LL;
        v16 = 0;
        v5 = 0;
        v17 = 0LL;
        v6 = 0;
        v7 = 0LL;
        if ( *((_DWORD *)this + 30) )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7) + 40LL);
            v18 = v8;
            v9 = v6 + 1;
            if ( v6 + 1 < v6 )
              break;
            if ( v9 > v5 )
            {
              v2 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v15, 8u, 1, &v18);
              if ( v2 < 0 )
              {
                v12 = 192;
                goto LABEL_16;
              }
              v6 = HIDWORD(v17);
              v5 = v17;
            }
            else
            {
              *(_QWORD *)(v15 + 8LL * v6++) = v8;
              HIDWORD(v17) = v9;
            }
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= *((_DWORD *)this + 30) )
              goto LABEL_11;
          }
          v2 = -2147024362;
          v12 = 181;
LABEL_16:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v12);
          v14 = 5838;
          v11 = v2;
        }
        else
        {
LABEL_11:
          started = CAnimationEngine::ScheduleStartAnimation(v3, v4, (__int64)&v15, (unsigned int *)this + 7);
          v2 = started;
          if ( started >= 0 )
          {
            *((_DWORD *)this + 6) = 3;
            CStoryboard::_LogStoryboardEvent(this);
            if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 128LL))(this)
              || (started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance),
                  v2 = started,
                  started >= 0) )
            {
              DynArrayImpl<0>::~DynArrayImpl<0>(&v15);
              CStoryboard::_NotifyStoryboardState(this, 3LL);
              (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 40LL))(this);
              goto LABEL_19;
            }
            v14 = 5845;
          }
          else
          {
            v14 = 5840;
          }
          v11 = started;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, v14);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v15);
      }
    }
  }
  CStoryboard::Abandon((struct _GUID *)this);
  if ( v3 )
LABEL_19:
    CAnimationEngine::Release(v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return (unsigned int)v2;
}
