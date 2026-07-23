/*
 * XREFs of sub_1408534E0 @ 0x1408534E0
 * Callers:
 *     sub_1403D6AC8 @ 0x1403D6AC8 (sub_1403D6AC8.c)
 *     sub_140B246C0 @ 0x140B246C0 (sub_140B246C0.c)
 *     sub_140B247B0 @ 0x140B247B0 (sub_140B247B0.c)
 *     sub_140B248EC @ 0x140B248EC (sub_140B248EC.c)
 *     sub_140B53164 @ 0x140B53164 (sub_140B53164.c)
 *     sub_140B531EC @ 0x140B531EC (sub_140B531EC.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 */

__int64 __fastcall sub_1408534E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1, a2, a3, 8LL);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
