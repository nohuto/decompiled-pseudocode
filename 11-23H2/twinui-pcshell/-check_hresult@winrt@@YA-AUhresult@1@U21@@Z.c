/*
 * XREFs of ?check_hresult@winrt@@YA?AUhresult@1@U21@@Z @ 0x1800D63BC
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B9030 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

int *__fastcall winrt::check_hresult(int *a1, int a2)
{
  if ( a2 < 0 )
    winrt::throw_hresult((unsigned int)a2);
  *a1 = a2;
  return a1;
}
