/*
 * XREFs of ?reset@?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@std@@QEAAXPEAVSuppressViewTransition@@@Z @ 0x1801EAAE4
 * Callers:
 *     ?DismissViewAnimated@XamlSnapAssistViewController@@AE$AAAXXZ @ 0x180611130 (-DismissViewAnimated@XamlSnapAssistViewController@@AE$AAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z @ 0x1801EA8AC (--R-$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z.c)
 */

void __fastcall std::unique_ptr<SuppressViewTransition>::reset(SuppressViewTransition **a1, SuppressViewTransition *a2)
{
  SuppressViewTransition *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    std::default_delete<SuppressViewTransition>::operator()((__int64)a1, v2);
}
