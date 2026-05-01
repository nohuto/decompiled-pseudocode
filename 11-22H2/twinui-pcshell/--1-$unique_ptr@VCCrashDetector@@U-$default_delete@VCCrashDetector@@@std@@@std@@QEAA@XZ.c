/*
 * XREFs of ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x1804DCD38
 * Callers:
 *     __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::dtor$4 @ 0x1804DD2F6 (__lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator()_--_1_--dtor$4.c)
 *     __lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator()_::_1_::dtor$4 @ 0x1804E21BE (__lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ??1CCrashDetector@@QEAA@XZ @ 0x180197A50 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CCrashDetector>::~unique_ptr<CCrashDetector>(CCrashDetector **a1)
{
  CCrashDetector *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CCrashDetector::~CCrashDetector(*a1);
    operator delete(v1);
  }
}
