/*
 * XREFs of sub_1403A2EE0 @ 0x1403A2EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A343C @ 0x1403A343C (sub_1403A343C.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403A2EE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  sub_1403A346C();
  result = sub_1403A30B4(a1, &v7);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v6 = sub_1403A343C(a1, v7);
      sub_1403A3038(a1, v6);
    }
    else
    {
      sub_1403A3038(a1, result);
      v5 = sub_1403A343C(v3, v7);
    }
    sub_1403A2FA8(a1, v5, v4, v5);
    return 1LL;
  }
  return result;
}
