/*
 * XREFs of sub_1800B0CB8 @ 0x1800B0CB8
 * Callers:
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 * Callees:
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B0EA8 @ 0x1800B0EA8 (sub_1800B0EA8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B0CB8(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::RenderTargetState::`vftable';
  sub_18000C8D4(a1 + 8, 16LL, 8LL);
  sub_18000C8D4(a1 + 136, 16LL, 8LL);
  sub_18000C8D4(a1 + 264, 16LL, 8LL);
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 440) = 1;
  sub_1800B0EA8(a1 + 264, a2 + 1184);
  v4 = *(_QWORD *)(a2 + 1320);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a2 + 1320);
  }
  v6[0] = *(_QWORD *)(a1 + 424);
  *(_QWORD *)(a1 + 424) = *(_QWORD *)(a2 + 1312);
  v6[1] = *(_QWORD *)(a1 + 432);
  *(_QWORD *)(a1 + 432) = v4;
  sub_180010910((__int64)v6);
  return a1;
}
