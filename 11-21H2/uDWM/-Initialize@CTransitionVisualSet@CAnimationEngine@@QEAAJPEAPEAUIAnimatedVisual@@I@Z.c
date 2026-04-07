/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180048264
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180047D5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180047FDC (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x1800483D4 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebp
  __int64 i; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  struct IAnimatedVisual *v13; // rcx
  CAnimationEngine::CTransitionVisual *v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v19; // eax
  __int64 j; // rsi
  CAnimationEngine::CTransitionVisual *v21; // rcx

  v6 = 0;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  *((_QWORD *)this + 5) = v8;
  if ( v8 )
  {
    *((_DWORD *)this + 5) = a3;
    v9 = 0;
    if ( !a3 )
      return v6;
    for ( i = 0LL; ; ++i )
    {
      v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              88LL);
      v12 = v11;
      if ( v11 )
      {
        v13 = a2[i];
        *(_QWORD *)v11 = v13;
        *(_DWORD *)(v11 + 64) = 0;
        *(_DWORD *)(v11 + 68) = 0;
        *(_DWORD *)(v11 + 72) = 0;
        *(_DWORD *)(v11 + 76) = 0;
        *(_DWORD *)(v11 + 80) = 0;
        *(_DWORD *)(v11 + 84) = 0;
        if ( v13 )
          (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)v13 + 264LL))(v13);
      }
      else
      {
        v12 = 0LL;
      }
      *(_QWORD *)(i * 8 + *((_QWORD *)this + 5)) = v12;
      v14 = *(CAnimationEngine::CTransitionVisual **)(i * 8 + *((_QWORD *)this + 5));
      if ( !v14 )
        break;
      v15 = CAnimationEngine::CTransitionVisual::Initialize(v14);
      v6 = v15;
      v17 = v15;
      if ( v15 < 0 )
      {
        v19 = 1624;
        goto LABEL_20;
      }
      v6 = (**(__int64 (__fastcall ***)(struct IAnimatedVisual *, _QWORD, __int64, _QWORD))a2[i])(
             a2[i],
             *((unsigned int *)this + 4),
             v16,
             (unsigned int)v15);
      v17 = v6;
      if ( (v6 & 0x80000000) != 0 )
      {
        v19 = 1625;
        goto LABEL_20;
      }
      if ( ++v9 >= a3 )
        return v6;
    }
    v19 = 1623;
  }
  else
  {
    v19 = 1616;
  }
  v17 = -2147024882;
  v6 = -2147024882;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, v19);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 5); j = (unsigned int)(j + 1) )
  {
    v21 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * j);
    if ( v21 )
    {
      CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v21);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * j) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_DWORD *)this + 5) = 0;
  return v6;
}
