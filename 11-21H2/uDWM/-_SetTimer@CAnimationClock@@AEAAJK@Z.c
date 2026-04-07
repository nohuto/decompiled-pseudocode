/*
 * XREFs of ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800A41F4
 * Callers:
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A2718 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x1800A3D8C (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ??0CTimer@@QEAA@XZ @ 0x1800E3AA0 (--0CTimer@@QEAA@XZ.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x1800E3B90 (-Cancel@CTimer@@QEAAJXZ.c)
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x1800E3BEC (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x1800E3C44 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x1800E3CA8 (-Start@CTimer@@QEAAJK@Z.c)
 */

__int64 __fastcall CAnimationClock::_SetTimer(CAnimationClock *this, unsigned int a2)
{
  int v2; // edi
  CTimer *v5; // rax
  CTimer *v6; // rax

  v2 = 0;
  if ( !*((_QWORD *)this + 8) )
  {
    v5 = (CTimer *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    if ( v5 )
    {
      v6 = CTimer::CTimer(v5);
      *((_QWORD *)this + 8) = v6;
      if ( v6 )
      {
        v2 = CTimer::SetTimerCallback(v6, (CAnimationClock *)((char *)this + 16));
        if ( v2 < 0 )
          return (unsigned int)v2;
        goto LABEL_5;
      }
    }
    else
    {
      *((_QWORD *)this + 8) = 0LL;
    }
    return (unsigned int)-2147024882;
  }
LABEL_5:
  if ( !CTimer::IsSet(*((CTimer **)this + 8)) || (v2 = CTimer::Cancel(*((CTimer **)this + 8)), v2 >= 0) )
  {
    if ( a2 )
      return (unsigned int)CTimer::Start(*((CTimer **)this + 8), a2);
    else
      CAnimationClock::_OnTimerCallback(this);
  }
  return (unsigned int)v2;
}
