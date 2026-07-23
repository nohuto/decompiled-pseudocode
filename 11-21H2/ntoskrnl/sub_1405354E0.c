/*
 * XREFs of sub_1405354E0 @ 0x1405354E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 */

__int64 __fastcall sub_1405354E0(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  result = sub_1403A30B4(a1, &v3);
  if ( result )
  {
    sub_1403A3038(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
