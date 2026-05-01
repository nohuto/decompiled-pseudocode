/*
 * XREFs of ?Attach@?$ComPtr@VGammaFlashAsyncOperation@@@WRL@Microsoft@@QEAAXPEAVGammaFlashAsyncOperation@@@Z @ 0x1803FA914
 * Callers:
 *     ??$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncAction@Foundation@Windows@@AEAMAEAI2@Z @ 0x1803F44BC (--$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@D.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GammaFlashAsyncOperation>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
