/*
 * XREFs of sub_14039CE58 @ 0x14039CE58
 * Callers:
 *     sub_14039CE24 @ 0x14039CE24 (sub_14039CE24.c)
 *     sub_1405757C0 @ 0x1405757C0 (sub_1405757C0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 */

unsigned __int8 __fastcall sub_14039CE58(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  int v6; // r8d
  unsigned __int8 result; // al

  sub_14034EE30(a2);
  v6 = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 88) = 0;
  *(_BYTE *)(a2 + 18) = 0;
  if ( v6 )
    sub_14022B568(a3, a1, v6);
  *(_QWORD *)a2 = 0LL;
  result = 1 << *(_BYTE *)(a2 + 16);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 870), result);
  return result;
}
