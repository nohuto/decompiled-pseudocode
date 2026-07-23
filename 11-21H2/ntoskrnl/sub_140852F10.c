/*
 * XREFs of sub_140852F10 @ 0x140852F10
 * Callers:
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     sub_1409B1E4C @ 0x1409B1E4C (sub_1409B1E4C.c)
 * Callees:
 *     sub_1403D683C @ 0x1403D683C (sub_1403D683C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140852F10(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  __int64 v4; // rdx
  unsigned int v5; // ebx

  v2 = (unsigned __int16 *)(a2 + 40);
  sub_1403D683C(0, a1, (unsigned __int16 *)(a2 + 40), 0);
  v5 = sub_14042A5E0(a1, v4);
  sub_1403D683C(1, a1, v2, v5);
  return v5;
}
