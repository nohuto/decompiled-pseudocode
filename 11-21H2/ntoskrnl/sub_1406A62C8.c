/*
 * XREFs of sub_1406A62C8 @ 0x1406A62C8
 * Callers:
 *     sub_1406A6C04 @ 0x1406A6C04 (sub_1406A6C04.c)
 * Callees:
 *     sub_1406A633C @ 0x1406A633C (sub_1406A633C.c)
 *     sub_1406A6ECC @ 0x1406A6ECC (sub_1406A6ECC.c)
 *     sub_1406AC298 @ 0x1406AC298 (sub_1406AC298.c)
 */

__int64 *__fastcall sub_1406A62C8(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v6; // rdi
  __int64 v7; // rax

  v6 = (__int64 *)sub_1406A633C(*(_QWORD *)(a1 + 16), 4096LL);
  if ( v6 )
  {
    v7 = sub_1406A6ECC(a1, a3);
    *a2 = v7;
    if ( v7 )
    {
      *v6 = v7;
      return v6;
    }
    sub_1406AC298(*(_QWORD *)(a1 + 16), v6, 4096LL);
  }
  return 0LL;
}
