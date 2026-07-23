/*
 * XREFs of sub_1403D0D90 @ 0x1403D0D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403D0D90(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  sub_1403A346C(a1);
  result = sub_1403A30B4(a1, &v3);
  if ( result )
  {
    *(_DWORD *)(a1 + 108) = *(_BYTE *)(a1 + 28) & 0x1F;
    sub_1403A3038(a1, (unsigned __int16 *)result);
    *(_DWORD *)(a1 + 124) += v3;
    return 1LL;
  }
  return result;
}
