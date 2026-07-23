/*
 * XREFs of sub_1403725A0 @ 0x1403725A0
 * Callers:
 *     ntoskrnl_4 @ 0x1402D5B80 (ntoskrnl_4.c)
 *     sub_1403C0F20 @ 0x1403C0F20 (sub_1403C0F20.c)
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 *     sub_1407D53D0 @ 0x1407D53D0 (sub_1407D53D0.c)
 *     sub_140822D70 @ 0x140822D70 (sub_140822D70.c)
 *     sub_1408292C0 @ 0x1408292C0 (sub_1408292C0.c)
 * Callees:
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     sub_1403725F4 @ 0x1403725F4 (sub_1403725F4.c)
 */

__int64 __fastcall sub_1403725A0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  sub_1403588EC(a1, a2, a3, a5 | 2);
  v7 = *a4;
  *(_BYTE *)(a1 + 2) = v7;
  v8 = a4[2];
  *(_BYTE *)(a1 + 3) = a4[2];
  result = sub_1403725F4(v7, v8);
  if ( !(_BYTE)result )
    __fastfail(5u);
  return result;
}
