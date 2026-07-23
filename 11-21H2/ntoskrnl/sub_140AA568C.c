/*
 * XREFs of sub_140AA568C @ 0x140AA568C
 * Callers:
 *     sub_140AA3FF0 @ 0x140AA3FF0 (sub_140AA3FF0.c)
 *     sub_140AA4030 @ 0x140AA4030 (sub_140AA4030.c)
 *     sub_140AA4070 @ 0x140AA4070 (sub_140AA4070.c)
 *     sub_140AA4090 @ 0x140AA4090 (sub_140AA4090.c)
 *     sub_140AA4180 @ 0x140AA4180 (sub_140AA4180.c)
 *     sub_140AA4360 @ 0x140AA4360 (sub_140AA4360.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA568C(unsigned __int8 a1)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax
  ULONG_PTR v3; // rdi

  v1 = a1;
  result = KeGetCurrentIrql();
  v3 = (unsigned __int8)result;
  if ( (unsigned __int8)result > a1 )
    result = sub_140A8C924(0xC4u, 0x30uLL, (unsigned __int8)result, a1, 0LL);
  if ( (unsigned __int8)v1 > 0xFu )
    return sub_140A8C924(0xC4u, 0x30uLL, v3, v1, 0LL);
  return result;
}
