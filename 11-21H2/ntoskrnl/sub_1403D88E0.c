/*
 * XREFs of sub_1403D88E0 @ 0x1403D88E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 */

__int64 __fastcall sub_1403D88E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int16 *v4; // rdx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  *(_DWORD *)(a1 + 120) = 1;
  result = sub_1403A30B4(a1, (int *)&v5);
  v3 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v4 = (unsigned __int16 *)result;
      v3 = a1 + 2 * (v5 + 28LL);
    }
    else
    {
      v4 = (unsigned __int16 *)(a1 + 2 * (v5 + 28LL));
    }
    *(_QWORD *)(a1 + 88) = v3;
    sub_1403A2FA8(a1, v4);
    return 1LL;
  }
  return result;
}
