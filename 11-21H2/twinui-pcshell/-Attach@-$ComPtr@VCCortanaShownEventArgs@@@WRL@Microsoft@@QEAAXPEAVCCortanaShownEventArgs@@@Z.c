/*
 * XREFs of ?Attach@?$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z @ 0x1800463FC
 * Callers:
 *     ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x180046398 (--$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@AEA_N@Z @ 0x180199928 (--$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@AEA_N@Details@WRL@Microsoft@@YA-AV.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002D910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCortanaShownEventArgs>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v4);
  *a1 = a2;
  return result;
}
