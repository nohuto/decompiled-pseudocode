/*
 * XREFs of ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800EC654
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053F60 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BD5D4 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x1802157C8 (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18023F060 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

void __fastcall CBaseExpression::NotifyAnimationStarted(CBaseExpression *this)
{
  bool v1; // zf
  CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  struct CResource *v5; // r8
  unsigned int v6; // r9d

  v1 = (*((_BYTE *)this + 232) & 4) == 0;
  *((_DWORD *)this + 72) = 4;
  if ( !v1 )
  {
    AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
    CAnimationLoggingManager::LogAnimationStarted(
      AnimationLoggingManagerNoRef,
      *(_QWORD *)(v4 + 168),
      v5,
      v6,
      *(_DWORD *)(v3 + 192));
  }
}
