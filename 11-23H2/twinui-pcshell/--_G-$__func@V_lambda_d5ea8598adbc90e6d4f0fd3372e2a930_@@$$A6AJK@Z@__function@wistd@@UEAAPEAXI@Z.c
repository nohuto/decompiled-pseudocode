/*
 * XREFs of ??_G?$__func@V_lambda_d5ea8598adbc90e6d4f0fd3372e2a930_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1801D0D00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$__func@V_lambda_02a66194befb27fdfff14c6cb3957445_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x1801D07E4 (--1-$__func@V_lambda_02a66194befb27fdfff14c6cb3957445_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_d5ea8598adbc90e6d4f0fd3372e2a930_,long (unsigned long)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func<_lambda_02a66194befb27fdfff14c6cb3957445_,long (unsigned long)>::~__func<_lambda_02a66194befb27fdfff14c6cb3957445_,long (unsigned long)>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
