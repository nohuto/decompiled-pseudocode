/*
 * XREFs of ??1?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@QEAA@XZ @ 0x180062998
 * Callers:
 *     ?Create@CMicaEffectCache@@SAJPEAPEAV1@@Z @ 0x180062A14 (-Create@CMicaEffectCache@@SAJPEAPEAV1@@Z.c)
 *     _CDesktopManager::CDesktopManager_::_1_::dtor$4 @ 0x180065D6C (_CDesktopManager--CDesktopManager_--_1_--dtor$4.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AF75C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z @ 0x1800629E8 (--R-$default_delete@VCMicaEffectCache@@@std@@QEBAXPEAVCMicaEffectCache@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CMicaEffectCache>::~unique_ptr<CMicaEffectCache>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CMicaEffectCache>::operator()();
  return result;
}
