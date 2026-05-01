/*
 * XREFs of ??1?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@std@@QEAA@XZ @ 0x1801EA62C
 * Callers:
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::operator() @ 0x1801EA6B8 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--operator().c)
 *     _XamlSnapAssistViewController::XamlSnapAssistViewController_::_1_::dtor$8 @ 0x180610A3E (_XamlSnapAssistViewController--XamlSnapAssistViewController_--_1_--dtor$8.c)
 *     ??1XamlSnapAssistViewController@@AE$AAA@XZ @ 0x180610DDC (--1XamlSnapAssistViewController@@AE$AAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z @ 0x1801EA8AC (--R-$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SuppressViewTransition>::~unique_ptr<SuppressViewTransition>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SuppressViewTransition>::operator()();
  return result;
}
