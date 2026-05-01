/*
 * XREFs of ??_E?$__func@V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1801CF9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$__func@V_lambda_f597752f4ab951f1160aea92caa7c9ee_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x1801CF938 (--1-$__func@V_lambda_f597752f4ab951f1160aea92caa7c9ee_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_e9d38f29c40ce80b2d241da620dfbf30_,long (unsigned long)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>::~__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
