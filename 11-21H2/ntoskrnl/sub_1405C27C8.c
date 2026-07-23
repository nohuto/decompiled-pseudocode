/*
 * XREFs of sub_1405C27C8 @ 0x1405C27C8
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405C27C8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rbp
  char v8; // cl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf

  v6 = sub_1402F2700(a1);
  *(_QWORD *)a1 = 0LL;
  v7 = v6;
  v8 = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = (a3 >> 3) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(a1 + 34) = v8 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
