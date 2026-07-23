/*
 * XREFs of sub_140356350 @ 0x140356350
 * Callers:
 *     sub_140355144 @ 0x140355144 (sub_140355144.c)
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     sub_140355A50 @ 0x140355A50 (sub_140355A50.c)
 * Callees:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045DF6A @ 0x14045DF6A (sub_14045DF6A.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_140356350(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  char v6; // si
  __int64 v8; // rdi
  __int64 result; // rax

  v6 = a3;
  if ( a4 )
    memset(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    LOBYTE(a3) = v6;
    sub_14045DF6A(*(_QWORD *)(v8 + 32), a2, a3);
  }
  result = sub_140356454(v8, (unsigned int)v8 + 208 * a2 + 192, v6 != 0 ? 6 : 3, v6 != 0 ? 2 : 6);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      sub_1405CAE6C(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
