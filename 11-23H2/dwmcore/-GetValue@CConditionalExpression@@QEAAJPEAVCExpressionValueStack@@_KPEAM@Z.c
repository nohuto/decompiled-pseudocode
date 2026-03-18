/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802279BC
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180227FCC (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180233D94 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x180275BE0 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180015728 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x18009EA44 (--0CExpressionValue@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180215420 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180216E8C (--1CExpressionValue@@QEAA@XZ.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x1802278EC (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18023EAD0 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        MatrixSubchannelMaskInfo **this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        float *a4)
{
  float *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  CExpressionValue *v13; // rax
  wchar_t *AnimationLoggingManagerNoRef; // rax
  unsigned int v16[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v17[80]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+8h] BYREF

  *a4 = 0.0;
  v8 = 0LL;
  v9 = (*((__int64 (__fastcall **)(MatrixSubchannelMaskInfo **, struct CExpressionValueStack *, wchar_t *, __int64 *))*this
        + 32))(
         this,
         a2,
         a3,
         &v18);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1F7u, 0LL);
  }
  else
  {
    if ( v9 != 1 )
    {
      v12 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
      if ( (unsigned int)v12 < *((_DWORD *)a2 + 12) )
      {
        v8 = (float *)(*((_QWORD *)a2 + 3) + 80 * v12);
      }
      else
      {
        v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
        v8 = (float *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
      }
      --*((_DWORD *)a2 + 4);
      *a4 = *v8;
    }
    if ( *((int *)this[41] + 1) < 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)v16);
      AnimationLoggingManagerNoRef = (wchar_t *)CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        (struct CResource *)this,
        2,
        a3,
        90,
        v16[0],
        v16[1],
        this[25],
        (__int64)v8);
    }
  }
  return v11;
}
