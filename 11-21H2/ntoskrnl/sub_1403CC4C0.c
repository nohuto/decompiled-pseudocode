/*
 * XREFs of sub_1403CC4C0 @ 0x1403CC4C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403CC4C0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  sub_1403A346C(a1);
  result = sub_1403A30B4(a1, &v4);
  if ( result )
  {
    *(_DWORD *)(a1 + 108) = 1;
    sub_1403A3038(a1, (unsigned __int16 *)result);
    result = v3;
    *(_DWORD *)(a1 + 124) += v4;
  }
  return result;
}
