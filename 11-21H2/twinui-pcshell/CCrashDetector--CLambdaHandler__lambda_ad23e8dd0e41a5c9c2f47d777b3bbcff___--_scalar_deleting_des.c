/*
 * XREFs of CCrashDetector::CLambdaHandler__lambda_ad23e8dd0e41a5c9c2f47d777b3bbcff___::_scalar_deleting_destructor_ @ 0x1802FF7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CCrashDetector::CLambdaHandler__lambda_ad23e8dd0e41a5c9c2f47d777b3bbcff___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
