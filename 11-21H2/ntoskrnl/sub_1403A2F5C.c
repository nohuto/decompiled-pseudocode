/*
 * XREFs of sub_1403A2F5C @ 0x1403A2F5C
 * Callers:
 *     sub_1403A2580 @ 0x1403A2580 (sub_1403A2580.c)
 *     sub_1403A28B0 @ 0x1403A28B0 (sub_1403A28B0.c)
 *     sub_1403A2A10 @ 0x1403A2A10 (sub_1403A2A10.c)
 *     sub_1403CFB60 @ 0x1403CFB60 (sub_1403CFB60.c)
 *     sub_1405362A0 @ 0x1405362A0 (sub_1405362A0.c)
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_1403A2F5C(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = *(unsigned int *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 120);
  if ( (unsigned int)v1 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v3 )
    longjmp((_JBTYPE *)(a1 + 160), 16);
  v4 = v3 + v1 + 1;
  v5 = *(unsigned __int16 *)(a1 + 60);
  *(_DWORD *)(a1 + 40) = v4;
  v6 = sub_1403A3520(v5, v1);
  sub_1403A2FA8(a1, v6, v7, v8);
  return *(unsigned int *)(a1 + 108);
}
