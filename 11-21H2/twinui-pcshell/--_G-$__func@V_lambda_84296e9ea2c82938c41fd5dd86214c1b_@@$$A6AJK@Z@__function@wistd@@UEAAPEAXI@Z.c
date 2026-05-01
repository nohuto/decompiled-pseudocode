/*
 * XREFs of ??_G?$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1801924E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x180191E0C (--1-$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_84296e9ea2c82938c41fd5dd86214c1b_,long (unsigned long)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func<_lambda_84296e9ea2c82938c41fd5dd86214c1b_,long (unsigned long)>::~__func<_lambda_84296e9ea2c82938c41fd5dd86214c1b_,long (unsigned long)>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
