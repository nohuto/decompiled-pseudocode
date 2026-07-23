/*
 * XREFs of sub_14026C744 @ 0x14026C744
 * Callers:
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140597FAC @ 0x140597FAC (sub_140597FAC.c)
 * Callees:
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14026C744(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  int v6; // r14d
  int v9; // eax
  __int64 result; // rax

  v6 = a3;
  memset((void *)(a5 + 24), 0, 0x70uLL);
  sub_140352E50(a2, a5 + 24);
  if ( (a1 & 0x40) != 0 )
  {
    *(_DWORD *)(a5 + 80) |= 0x20u;
    a1 &= ~2uLL;
  }
  *(_QWORD *)(a5 + 8) = a1;
  v9 = *(_DWORD *)(a5 + 80) ^ (v6 << 6);
  *(_QWORD *)a5 = a2;
  result = v9 & 0x40;
  *(_DWORD *)(a5 + 80) ^= result;
  *(_QWORD *)(a5 + 16) = a4;
  return result;
}
