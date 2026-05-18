/*
 * XREFs of sub_180031AB0 @ 0x180031AB0
 * Callers:
 *     sub_1800E5561 @ 0x1800E5561 (sub_1800E5561.c)
 *     sub_1800E5864 @ 0x1800E5864 (sub_1800E5864.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180031AB0(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rsi

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        sub_180010530(v4);
      sub_1800100E8(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return sub_1800100E8(*a1, 0x20uLL);
}
