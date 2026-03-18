/*
 * XREFs of ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18023D190
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18007EB38 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800999D4 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x18023C278 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x18023C9D0 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBindingBroken(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 StopValue; // rax
  __int64 v9; // xmm0_8
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+38h] [rbp-29h] BYREF
  int v14; // [rsp+40h] [rbp-21h]
  _BYTE v15[16]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v16[64]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v17; // [rsp+98h] [rbp+37h] BYREF
  int v18; // [rsp+A0h] [rbp+3Fh]
  char v19; // [rsp+A4h] [rbp+43h]

  v3 = 0;
  if ( (*((_BYTE *)this + 216) & 2) != 0 )
  {
    v6 = CBaseExpression::NotifyAnimationDisconnected(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x216u, 0LL);
    }
    else if ( *((_BYTE *)a3 + 8) )
    {
      memset_0(v16, 0, sizeof(v16));
      v17 = 0LL;
      v18 = 18;
      v19 = 0;
      StopValue = CNaturalAnimation::GetStopValue((__int64)this, (__int64)v15);
      v9 = *(_QWORD *)StopValue;
      LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
      v13 = v9;
      v14 = StopValue;
      CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, (unsigned int *)&v13, (__int64)v16);
      v10 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)v16);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x21Cu, 0LL);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v17);
    }
  }
  return v3;
}
