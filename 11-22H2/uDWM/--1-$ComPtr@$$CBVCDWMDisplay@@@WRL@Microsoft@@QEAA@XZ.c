/*
 * XREFs of ??1?$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3B64
 * Callers:
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800B4ECC (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 *     _CDesktopManager::GetDisplaySDRWhiteLevel_::_1_::dtor$1 @ 0x1800B50A1 (_CDesktopManager--GetDisplaySDRWhiteLevel_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 */

CDWMDisplay *__fastcall Microsoft::WRL::ComPtr<CDWMDisplay const>::~ComPtr<CDWMDisplay const>(CDWMDisplay **a1)
{
  CDWMDisplay *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CDWMDisplay *)CDWMDisplay::Release(result);
  }
  return result;
}
