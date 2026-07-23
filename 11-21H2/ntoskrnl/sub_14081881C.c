/*
 * XREFs of sub_14081881C @ 0x14081881C
 * Callers:
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140818900 @ 0x140818900 (sub_140818900.c)
 *     sub_140818934 @ 0x140818934 (sub_140818934.c)
 */

__int64 __fastcall sub_14081881C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _RTL_AVL_TABLE Table; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE v10[288]; // [rsp+B0h] [rbp-158h] BYREF

  memset(&Table, 0, sizeof(Table));
  memset(v10, 0, sizeof(v10));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)sub_1403CB110,
    (PRTL_AVL_ALLOCATE_ROUTINE)sub_1403D3350,
    (PRTL_AVL_FREE_ROUTINE)sub_1403D3330,
    0LL);
  sub_140818934(a1, a2, a3, a4, v10);
  if ( a4 )
    sub_140818934(a1, a2, a4, 0LL, v10);
  return sub_140818900(&Table);
}
