/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180062968
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     _CDesktopManager::Initialize_::_1_::dtor$11 @ 0x180065E1A (_CDesktopManager--Initialize_--_1_--dtor$11.c)
 * Callees:
 *     ??R?$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z @ 0x1800629E8 (--R-$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CMicaEffectCache>>::~out_param_t<std::unique_ptr<CMicaEffectCache>>(
        __int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return std::default_delete<CMicaEffectCache>::operator()();
  }
  return result;
}
