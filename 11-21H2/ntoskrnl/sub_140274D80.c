/*
 * XREFs of sub_140274D80 @ 0x140274D80
 * Callers:
 *     sub_14024501C @ 0x14024501C (sub_14024501C.c)
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 *     sub_1403C49DC @ 0x1403C49DC (sub_1403C49DC.c)
 *     sub_14045BDA0 @ 0x14045BDA0 (sub_14045BDA0.c)
 *     sub_140596EA0 @ 0x140596EA0 (sub_140596EA0.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

char __fastcall sub_140274D80(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // r8^7

  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    return (*(_BYTE *)(48
                     * (((unsigned __int64)sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 1) & 7;
  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
      v7 = HIBYTE(*(_QWORD *)v2);
      if ( (v6 & 0x20) == 0 )
        v7 = HIBYTE(v3);
      HIBYTE(v3) = v7;
      if ( (v6 & 0x42) != 0 )
        HIBYTE(v3) = v7;
    }
  }
  return HIBYTE(v3) & 0xF;
}
