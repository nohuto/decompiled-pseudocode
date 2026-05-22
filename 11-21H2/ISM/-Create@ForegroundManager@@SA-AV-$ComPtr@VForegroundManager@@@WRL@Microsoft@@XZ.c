/*
 * XREFs of ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x180028A2C
 * Callers:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x180028A68 (--$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManag.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ForegroundManager::Create(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,ForegroundManager,>();
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
