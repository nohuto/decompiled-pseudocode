/*
 * XREFs of sub_1403C3290 @ 0x1403C3290
 * Callers:
 *     sub_1403CB284 @ 0x1403CB284 (sub_1403CB284.c)
 *     sub_140B0681C @ 0x140B0681C (sub_140B0681C.c)
 * Callees:
 *     sub_1402287C8 @ 0x1402287C8 (sub_1402287C8.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1403C3290(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  volatile signed __int32 *v6; // r14
  unsigned __int64 v7; // r15
  int v8; // ebx
  unsigned __int8 v9; // al
  char v10; // cl
  unsigned __int64 v11; // rbp
  char v12; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf

  if ( a2 )
  {
    v2 = sub_1402CCC50(128LL);
    v4 = 48 * v3 - 0x220000000000LL;
    v6 = 0LL;
    v7 = v4 + 48 * v5;
    v8 = -1;
    do
    {
      if ( v8 != *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4)) + 2) )
      {
        if ( v6 )
        {
          sub_1402287C8(v6, 0);
          v6 = 0LL;
        }
        v8 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4)) + 2);
      }
      v9 = sub_1402F2700(v4);
      v10 = *(_BYTE *)(v4 + 34);
      *(_QWORD *)(v4 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(v4 + 34) = v10 & 0xC7;
      v11 = v9;
      *(_BYTE *)(v4 + 35) &= ~0x20u;
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 16) = v2;
      sub_14033C300(v4, 0);
      *(_BYTE *)(v4 + 35) |= 0x10u;
      sub_14033C3E0(v4, 0LL);
      v12 = *(_BYTE *)(v4 + 34);
      if ( (v12 & 0xC0) != 0x40 )
      {
        sub_140267E78(v4, 1u, 3);
        v12 = *(_BYTE *)(v4 + 34);
      }
      *(_QWORD *)(v4 + 8) = -8LL;
      *(_BYTE *)(v4 + 34) = v12 & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
      *(_QWORD *)v4 = v6;
      v6 = (volatile signed __int32 *)v4;
      v4 += 48LL;
    }
    while ( v4 < v7 );
    sub_1402287C8(v6, 0);
  }
}
