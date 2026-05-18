/*
 * XREFs of sub_180059174 @ 0x180059174
 * Callers:
 *     sub_180059E2C @ 0x180059E2C (sub_180059E2C.c)
 * Callees:
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 */

__int64 **__fastcall sub_180059174(__int64 **a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 *v5; // r10
  __int64 *i; // r11
  _WORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 **result; // rax

  v5 = a3;
  for ( i = a2; i != v5; i += 4 )
  {
    v8 = (_WORD *)a4;
    if ( *(_QWORD *)(a4 + 24) >= 8uLL )
      v8 = *(_WORD **)a4;
    v9 = (__int64)i;
    v10 = i[2];
    if ( (unsigned __int64)i[3] >= 8 )
      v9 = *i;
    if ( v10 == *(_QWORD *)(a4 + 16) && !(unsigned int)sub_18001F810(v9, v8, v10) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
