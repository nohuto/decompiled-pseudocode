/*
 * XREFs of ??R?$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z @ 0x1801EA8AC
 * Callers:
 *     ??1?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@std@@QEAA@XZ @ 0x1801EA62C (--1-$unique_ptr@VSuppressViewTransition@@U-$default_delete@VSuppressViewTransition@@@std@@@std@@.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::operator() @ 0x1801EA6B8 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--operator().c)
 *     ?reset@?$unique_ptr@VSuppressViewTransition@@U?$default_delete@VSuppressViewTransition@@@std@@@std@@QEAAXPEAVSuppressViewTransition@@@Z @ 0x1801EAAE4 (-reset@-$unique_ptr@VSuppressViewTransition@@U-$default_delete@VSuppressViewTransition@@@std@@@s.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SuppressViewTransition@@QEAA@XZ @ 0x1801EA64C (--1SuppressViewTransition@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<SuppressViewTransition>::operator()(__int64 a1, SuppressViewTransition *a2)
{
  if ( a2 )
  {
    SuppressViewTransition::~SuppressViewTransition(a2);
    operator delete(a2);
  }
}
