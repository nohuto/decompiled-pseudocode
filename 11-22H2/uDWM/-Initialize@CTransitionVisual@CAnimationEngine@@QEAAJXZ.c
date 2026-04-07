/*
 * XREFs of ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x180044084
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180043F14 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800AAD50 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisual::Initialize(CAnimationEngine::CTransitionVisual *this)
{
  unsigned int v1; // r14d
  CAnimationEngine::CTransitionVariable **v2; // rbx
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rax
  unsigned int v8; // edx

  v1 = 0;
  v2 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v3 = 0;
  v4 = (_QWORD *)((char *)this + 8);
  v5 = 7LL;
  while ( 1 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     24LL);
    if ( !v6 )
      break;
    *v6 = 0LL;
    v6[1] = 0LL;
    *v4 = v6;
    ++v3;
    ++v4;
    if ( v3 >= 7 )
      return v1;
  }
  *v4 = 0LL;
  v1 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x606u, 0LL);
  do
  {
    if ( *v2 )
    {
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v2, v8);
      *v2 = 0LL;
    }
    ++v2;
    --v5;
  }
  while ( v5 );
  return v1;
}
