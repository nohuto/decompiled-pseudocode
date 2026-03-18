/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800999D4
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004F280 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180099B90 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18023D190 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18004D5C0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18004DEE0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180050528 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D5AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800DC82C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_4043567418@@@details@wil@@QEAA_NXZ @ 0x18011A020 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_4043567418@@@details@wil@@QEAA_NX.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18023EB38 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  bool v4; // bl
  unsigned int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v8; // r9d
  unsigned int TracingCookie; // eax
  int v10; // eax
  unsigned int v11; // ecx
  HANDLE EventW; // rbx
  char v13; // al
  __int64 v14; // rax
  struct CResource *v15; // rdx
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-B8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_4043567418>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_4043567418>::GetImpl'::`2'::impl)
    || *((_DWORD *)a2 + 18) == *((_DWORD *)this + 38) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
      v4 = (unsigned __int8)CExpressionValue::operator==((_DWORD *)this + 18, a2, v6) == 0;
    CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 72), a2);
    if ( v4 )
    {
      CBaseExpression::LogSetOutputValue(this);
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v10 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x25Cu, 0LL);
        return v7;
      }
      EventW = CreateEventW(0LL, 1, 0, Name);
      SetEvent(EventW);
      CloseHandle(EventW);
    }
    v13 = *((_BYTE *)this + 216);
    if ( (v13 & 2) != 0 && (v13 & 1) != 0 )
    {
      v14 = *((_QWORD *)this + 23);
      if ( !v14 || (v15 = *(struct CResource **)(v14 + 16)) == 0LL )
      {
        v7 = -2147024890;
        v18 = 621;
        goto LABEL_4;
      }
      v16 = CBaseExpression::SetOutputValueOnTarget(this, v15);
      v7 = v16;
      if ( v16 < 0 )
      {
        v8 = v16;
        v18 = 622;
        goto LABEL_5;
      }
    }
    return 0;
  }
  v7 = -2147024809;
  v18 = 565;
LABEL_4:
  v8 = v7;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v8, v18, 0LL);
  return v7;
}
