/*
 * XREFs of sub_14064FAD0 @ 0x14064FAD0
 * Callers:
 *     sub_140650E68 @ 0x140650E68 (sub_140650E68.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 */

__int64 __fastcall sub_14064FAD0(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  int v5; // eax
  __int64 v6; // r8
  _QWORD v8[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = *(_OWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 20);
  LOBYTE(v6) = 1;
  v8[0] = 1LL;
  *(_OWORD *)&v8[1] = v4;
  LODWORD(v8[5]) = v5;
  return sub_1406503B0(a1, v8, v6);
}
