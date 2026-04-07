/*
 * XREFs of ?ForceHighColor@@YAKXZ @ 0x18003DB84
 * Callers:
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18003D84C (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18005F484 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 ForceHighColor(void)
{
  __int64 result; // rax

  result = dword_180141FF4;
  if ( dword_180141FF4 == -1 )
  {
    result = (unsigned int)-RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"HighColor", &dword_180141FF4);
    dword_180141FF4 = result;
  }
  return result;
}
