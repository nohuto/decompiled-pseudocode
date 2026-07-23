/*
 * XREFs of sub_1405792C0 @ 0x1405792C0
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405792C0(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  memset(a1, 0, 0x4CuLL);
  *a1 = 3;
  *((_BYTE *)a1 + 5) = *((_BYTE *)CurrentPrcb + 33112);
  *((_BYTE *)a1 + 6) = KeGetEffectiveIrql();
  *((_QWORD *)a1 + 1) = qword_140D01150;
  a1[4] = dword_140C2B1C0;
  *((_BYTE *)a1 + 20) = *((_BYTE *)CurrentPrcb + 32422) != 0;
  *((_BYTE *)a1 + 22) = *((_BYTE *)CurrentPrcb + 32);
  *((_BYTE *)a1 + 23) = (*((_BYTE *)CurrentPrcb + 13242) != 0) | *((_BYTE *)a1 + 23) & 0xFE;
  a1[8] = *((_DWORD *)CurrentPrcb + 9);
  a1[9] = KiBugCheckData;
  *((_QWORD *)a1 + 5) = qword_140C2BD88;
  *((_OWORD *)a1 + 3) = xmmword_140C2BD90;
  *((_QWORD *)a1 + 8) = qword_140C2BDA0;
  result = (unsigned int)dword_140D0195C;
  a1[18] = dword_140D0195C;
  return result;
}
