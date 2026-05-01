/*
 * XREFs of ?Attach@?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAAXPEAVSwitcherTabViewManagerWrapper@@@Z @ 0x1804317EC
 * Callers:
 *     ??$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@AEBQEAUITabViewManager@@@Z @ 0x180499F48 (--$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA-AV-$C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITabViewManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180369910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITab_ea_180369910.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitcherTabViewManagerWrapper>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITabViewManager>::Release(v4);
  *a1 = a2;
  return result;
}
