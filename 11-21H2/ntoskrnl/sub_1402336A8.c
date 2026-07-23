/*
 * XREFs of sub_1402336A8 @ 0x1402336A8
 * Callers:
 *     sub_1402D0500 @ 0x1402D0500 (sub_1402D0500.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 * Callees:
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 */

_BOOL8 __fastcall sub_1402336A8(__int64 a1, __int64 a2)
{
  int v2; // r8d
  bool v4; // zf
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  if ( (v2 & 0x70) == 0x20
    && (v2 & 0xF80) != 0x80
    && (sub_140319600(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 4LL, &v6), v6) )
  {
    v4 = (*(_BYTE *)(v6 + 32) & 0xA) == 10;
  }
  else
  {
    v4 = (*(_DWORD *)(a1 + 48) & 0x280) == 640;
  }
  return !v4;
}
