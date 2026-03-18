/*
 * XREFs of ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800426E4
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18004F86C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180042224 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?UnregisterForTelemetry@CBaseExpression@@IEAAXXZ @ 0x180042FA4 (-UnregisterForTelemetry@CBaseExpression@@IEAAXXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801FDB2C (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStopped(CBaseExpression *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  int v4; // r9d
  int v6; // eax
  unsigned int v7; // ecx

  v1 = 0;
  if ( *((_DWORD *)this + 72) == 4 && (*((_BYTE *)this + 216) & 2) != 0 )
  {
    *((_DWORD *)this + 72) = 2;
    if ( (CNotificationResource::ShouldNotify(this) || CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 24)))
      && (v6 = CExpressionManager::QueueAnimationStateChange(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 424LL),
                 v4,
                 (int *)this),
          v1 = v6,
          v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5B2u, 0LL);
    }
    else
    {
      if ( (*((_BYTE *)this + 232) & 0x20) != 0 )
        CBaseExpression::UnregisterForTelemetry(this);
      if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
        CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
          *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL),
          this);
    }
  }
  return v1;
}
