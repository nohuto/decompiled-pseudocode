/*
 * XREFs of ??$out_param@V?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@details@0@AEAV?$unique_ptr@VCMicaEffectCache@@U?$default_delete@VCMicaEffectCache@@@std@@@std@@@Z @ 0x180062950
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::out_param<std::unique_ptr<CMicaEffectCache>>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
