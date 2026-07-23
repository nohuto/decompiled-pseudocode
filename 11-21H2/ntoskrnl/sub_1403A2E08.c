/*
 * XREFs of sub_1403A2E08 @ 0x1403A2E08
 * Callers:
 *     sub_1403A2850 @ 0x1403A2850 (sub_1403A2850.c)
 *     sub_1403A29F0 @ 0x1403A29F0 (sub_1403A29F0.c)
 *     sub_1403D0EC0 @ 0x1403D0EC0 (sub_1403D0EC0.c)
 *     sub_140536120 @ 0x140536120 (sub_140536120.c)
 *     sub_1405361F0 @ 0x1405361F0 (sub_1405361F0.c)
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_1403A2E08(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  __int64 v5; // rdx

  v2 = *(_DWORD *)(a1 + 120);
  v5 = (unsigned int)(*(_DWORD *)(a1 + 40) - v2 - 1);
  if ( (unsigned int)v5 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v2 )
    longjmp((_JBTYPE *)(a1 + 160), 15);
  *(_DWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 88) = sub_1403A3520(*(unsigned __int16 *)(a1 + 60), v5);
  return sub_1403A2E60(a1, a2);
}
