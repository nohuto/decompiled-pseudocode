/*
 * XREFs of sub_140AA47B0 @ 0x140AA47B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA47B0(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v3; // r8

  result = sub_1406021F8(*(_QWORD *)(a1 + 32), 8uLL);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !*(_QWORD *)(v3 - 48) )
    return sub_140A8C924(0xC4u, 0x3FuLL, v3, 1uLL, 0LL);
  return result;
}
