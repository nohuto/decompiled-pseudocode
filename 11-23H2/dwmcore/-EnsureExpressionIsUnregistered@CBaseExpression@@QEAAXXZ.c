/*
 * XREFs of ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180084080
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180049C24 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004C6A0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1CBaseExpression@@MEAA@XZ @ 0x180082E44 (--1CBaseExpression@@MEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180084158 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180099B90 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800D5E80 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180265074 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x1800825B0 (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800991E0 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::EnsureExpressionIsUnregistered(CBaseExpression *this)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  CExpressionManager *v4; // rsi
  int v5; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 39);
  v3 = *((_QWORD *)this + 38);
  v4 = *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL);
  while ( v3 != v2 )
  {
    CExpressionManager::UnregisterExpressionWorker(
      (__int64)v4,
      (__int64)this,
      *(_QWORD *)v3,
      *(_DWORD *)(v3 + 8),
      v5,
      1);
    v3 += 16LL;
  }
  *((_QWORD *)this + 39) = *((_QWORD *)this + 38);
  if ( (*((_BYTE *)this + 232) & 8) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(v4, this);
    CExpressionManager::UnregisterExpressionWorker(
      (__int64)v4,
      (__int64)this,
      *((_QWORD *)this + 23),
      *((_DWORD *)this + 48),
      v5,
      0);
    *((_BYTE *)this + 232) &= ~8u;
  }
}
