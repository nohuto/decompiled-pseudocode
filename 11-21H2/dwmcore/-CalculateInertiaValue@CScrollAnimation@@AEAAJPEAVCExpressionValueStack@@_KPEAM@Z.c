/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18025404C
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x1802541C8 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x180227E7C (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180253F88 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180254770 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180254948 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  float CurrentValue; // xmm0_4
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(CScrollAnimation *, struct CExpressionValueStack *, __int64); // r9
  int v17; // eax
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF
  float v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 44);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  if ( *((_DWORD *)this + 84) == 1 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(this, a2, a3, &v21);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x2CDu);
      return v10;
    }
    CurrentValue = v21;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 85));
    v21 = CurrentValue;
  }
  if ( *((_DWORD *)this + 84) == 2 )
  {
    if ( (*((_BYTE *)this + 368) & 4) != 0 )
      CScrollAnimation::StartInertia(this, CurrentValue, 1);
  }
  else
  {
    CScrollAnimation::StartInertia(this, CurrentValue, 0);
    v12 = CScrollAnimation::SelectInertiaModifier(this);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x2E3u);
      return v10;
    }
  }
  if ( (*((_BYTE *)this + 396) & 1) != 0 && (v14 = CScrollAnimation::SelectInertiaModifier(this), v10 = v14, v14 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x2F1u);
  }
  else
  {
    v20[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL) - *((_QWORD *)this + 45);
    TimeDelta::ToSeconds((TimeDelta *)v20);
    v17 = v16(this, a2, a3);
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x2F4u);
    else
      return 0;
  }
  return v10;
}
