/*
 * XREFs of ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x1803FC1F4
 * Callers:
 *     __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::dtor$4 @ 0x1803FC68D (__lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator()_--_1_--dtor$4.c)
 *     __lambda_b54eacfb88775a45f9bf3f20a89a8862_::operator()_::_1_::dtor$4 @ 0x1804058E1 (__lambda_b54eacfb88775a45f9bf3f20a89a8862_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18003CCE0 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
