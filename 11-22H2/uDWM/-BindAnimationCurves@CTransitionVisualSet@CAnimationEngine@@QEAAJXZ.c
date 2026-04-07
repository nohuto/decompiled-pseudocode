/*
 * XREFs of ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x1800448B8
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18004471C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::BindAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // r14
  int v6; // eax

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 5) )
  {
    while ( 1 )
    {
      v4 = **(_QWORD **)(*((_QWORD *)this + 5) + 8 * v2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
        v1 = v6;
        if ( v6 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 5) )
        return v1;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6DAu, 0LL);
  }
  return v1;
}
