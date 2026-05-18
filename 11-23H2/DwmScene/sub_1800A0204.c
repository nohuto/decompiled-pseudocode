/*
 * XREFs of sub_1800A0204 @ 0x1800A0204
 * Callers:
 *     sub_1800A02A4 @ 0x1800A02A4 (sub_1800A02A4.c)
 * Callees:
 *     sub_18009FFB8 @ 0x18009FFB8 (sub_18009FFB8.c)
 *     sub_1800A0184 @ 0x1800A0184 (sub_1800A0184.c)
 */

__int64 __fastcall sub_1800A0204(__int64 *a1, _DWORD *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // rdx
  __int64 result; // rax

  v6 = a1[1];
  if ( v6 == a1[2] )
    return sub_18009FFB8(a1, v6, (int)a2, a3, (__int64)a4, (__int64)a5);
  sub_1800A0184((__int64)a1, v6, a2, a3, a4, a5);
  result = a1[1];
  a1[1] = result + 56;
  return result;
}
