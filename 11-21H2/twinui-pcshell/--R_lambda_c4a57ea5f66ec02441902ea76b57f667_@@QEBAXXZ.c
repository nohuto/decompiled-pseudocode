/*
 * XREFs of ??R_lambda_c4a57ea5f66ec02441902ea76b57f667_@@QEBAXXZ @ 0x1802E09F4
 * Callers:
 *     ??$AtomicUpdate@V_lambda_f38d8fc15da79aa093d6e90a21ae8f00_@@V_lambda_66efc83d58e203f59bf12abc409ef662_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_f38d8fc15da79aa093d6e90a21ae8f00_@@AEBV_lambda_66efc83d58e203f59bf12abc409ef662_@@@Z @ 0x1802DC8E0 (--$AtomicUpdate@V_lambda_f38d8fc15da79aa093d6e90a21ae8f00_@@V_lambda_66efc83d58e203f59bf12abc409.c)
 *     ??$Do@V_lambda_ead53c33d6d2c058552ef5f76c0025c6_@@V_lambda_66efc83d58e203f59bf12abc409ef662_@@@?$InvalidationChecker@V?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_ead53c33d6d2c058552ef5f76c0025c6_@@AEBV_lambda_66efc83d58e203f59bf12abc409ef662_@@@Z @ 0x1802DCE34 (--$Do@V_lambda_ead53c33d6d2c058552ef5f76c0025c6_@@V_lambda_66efc83d58e203f59bf12abc409ef662_@@@-.c)
 *     ?GetMany@?$SimpleVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAI@Z @ 0x1802E39D0 (-GetMany@-$SimpleVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V-$Vecto.c)
 * Callees:
 *     ??$Destroy@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802DC9E8 (--$Destroy@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWi.c)
 */

_DWORD **__fastcall _lambda_c4a57ea5f66ec02441902ea76b57f667_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>((__int64 *)(*a1[1] + 8 * v2));
      result = (_DWORD **)*a1;
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      v4 = *result;
    }
    while ( (unsigned int)v2 < **result );
  }
  *v4 = 0;
  return result;
}
