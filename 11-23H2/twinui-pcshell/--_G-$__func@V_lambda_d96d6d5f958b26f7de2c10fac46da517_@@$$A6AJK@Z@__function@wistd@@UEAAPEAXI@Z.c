/*
 * XREFs of ??_G?$__func@V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18021E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$__func@V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x18021E99C (--1-$__func@V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_d96d6d5f958b26f7de2c10fac46da517_,long (unsigned long)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func<_lambda_d96d6d5f958b26f7de2c10fac46da517_,long (unsigned long)>::~__func<_lambda_d96d6d5f958b26f7de2c10fac46da517_,long (unsigned long)>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
