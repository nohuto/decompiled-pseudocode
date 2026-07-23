/*
 * XREFs of sub_1405353C0 @ 0x1405353C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_1405353C0(__int64 a1)
{
  int v2; // esi
  __int64 result; // rax
  int v4; // ebx
  int v5; // edx
  __int64 v6; // rcx
  int *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = *(unsigned __int8 *)(a1 + 81);
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  result = sub_1403A30B4(a1, (int *)&v9);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 142) )
      longjmp((_JBTYPE *)(a1 + 160), 11);
    sub_1403A2FA8(a1, (unsigned __int16 *)result);
    v4 = *(_DWORD *)(a1 + 120);
    v5 = *(_DWORD *)(a1 + 128) + 1;
    *(_DWORD *)(a1 + 120) = 1;
    v7 = sub_1403D75CC(v6, v4 + v5);
    sub_1403A3038(a1, (unsigned __int16 *)v7);
    *(_WORD *)(a1 + 2LL * (unsigned int)(v2 - 6) + 56) = *(_WORD *)(a1 + 104);
    result = 1LL;
    v8 = v9 + 6LL;
    *(_DWORD *)(a1 + 120) = v4;
    *(_QWORD *)(a1 + 88) = a1 + 4 * v8;
  }
  return result;
}
