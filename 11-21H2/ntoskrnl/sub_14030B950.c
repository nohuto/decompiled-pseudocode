/*
 * XREFs of sub_14030B950 @ 0x14030B950
 * Callers:
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140973534 @ 0x140973534 (sub_140973534.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403106E0 @ 0x1403106E0 (sub_1403106E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14030B950(__int64 a1, __int64 a2, int a3)
{
  char v4; // si
  unsigned __int64 v6; // r14
  int v7; // edi
  signed __int32 v8; // eax
  int v9; // r9d
  int v10; // esi
  int v11; // edx
  unsigned int v12; // ecx
  signed __int32 v13; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // zf

  v4 = a2;
  v6 = (unsigned __int8)sub_1403106E0(a1, a2);
  v7 = v4 & 2;
  if ( (v4 & 2) != 0 )
    sub_1402ED128(3);
  v8 = *(_DWORD *)(a1 + 48);
  v9 = v4 & 1;
  v10 = v4 & 4;
  v11 = a3 & 1;
  do
  {
    v12 = v8;
    if ( v9 )
    {
      v11 = a3 & 1;
      v12 = v8 & 0xFFFFFFF7 | (8 * v11);
    }
    if ( v7 )
      v12 = (4 * v11) | v12 & 0xFFFFFFFB;
    else
      v11 = a3 & 1;
    if ( v10 )
      v12 ^= (v12 ^ (a3 << 23)) & 0x1800000;
    v13 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v12, v8);
  }
  while ( v13 != v8 );
  if ( v7 )
    sub_1402806E0(3, 0x11u);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0xFFFFFFFC);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v17 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
