/*
 * XREFs of sub_14038DB80 @ 0x14038DB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

__int64 __fastcall sub_14038DB80(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v2 = sub_140317A10(a2);
  v5 = v2;
  if ( (v2 & 1) != 0 && (v2 & 0x80u) == 0LL )
  {
    v4 = sub_140317A10((unsigned __int64)&v5);
    PoSetHiberRange(0LL, 0x14000u, (PVOID)((v4 >> 12) & 0xFFFFFFFFFFLL), 1uLL, 0x706B6D4Du);
  }
  return 0LL;
}
