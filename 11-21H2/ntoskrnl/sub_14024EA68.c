/*
 * XREFs of sub_14024EA68 @ 0x14024EA68
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1403D6C20 @ 0x1403D6C20 (sub_1403D6C20.c)
 *     sub_14096AF9C @ 0x14096AF9C (sub_14096AF9C.c)
 * Callees:
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14024EA68(__int64 a1, char a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  bool v16; // zf

  v9 = sub_1402F2700(a1);
  v11 = *(unsigned __int8 *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  v12 = v9;
  if ( v11 >> 6 != a4 )
  {
    sub_140267E78(a1, a4, 1LL);
    LOBYTE(v11) = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v11 & 0xF8 | 6;
  if ( (a2 & 3) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    *(_QWORD *)(a1 + 16) = sub_1402CCC50(128LL, v10);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v16 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return result;
}
