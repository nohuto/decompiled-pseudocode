/*
 * XREFs of sub_1409680B0 @ 0x1409680B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1403D77D4 @ 0x1403D77D4 (sub_1403D77D4.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 */

__int64 __fastcall sub_1409680B0(_DWORD *a1, int a2, int a3, __int64 a4)
{
  char *v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // r9d

  if ( (a3 & 0xBFFFFFFF) != 0
    || (a4 & 0xFFFFFFFFFFDFFFFFuLL) != 0
    || !sub_1407621C0((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12, a4, 0) )
  {
    return 0LL;
  }
  v6 = sub_14026DFC0(1);
  return sub_1403D77D4((__int64)a1, v7, (__int64)v6, v8, a2);
}
