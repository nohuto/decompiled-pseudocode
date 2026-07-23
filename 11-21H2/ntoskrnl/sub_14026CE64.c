/*
 * XREFs of sub_14026CE64 @ 0x14026CE64
 * Callers:
 *     sub_1402697F0 @ 0x1402697F0 (sub_1402697F0.c)
 *     sub_14026CB78 @ 0x14026CB78 (sub_14026CB78.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 * Callees:
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 */

__int64 __fastcall sub_14026CE64(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 16 * a2;
  v6 = *(_DWORD *)(a1 + 24) & 2;
  if ( !v6 )
    v5 = a2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -a3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), -a3);
  v7 = 16 * a3;
  if ( (v6 & 2) == 0 )
    v7 = a3;
  v8 = *(unsigned int *)(a1 + 28);
  v9 = (((v4 + 8 * v5) << 25) + (v7 << 28)) >> 16;
  if ( a4 )
    v8 = 13LL;
  return sub_14026DAB0((v4 + 8 * v5) << 25 >> 16, v9, v8);
}
