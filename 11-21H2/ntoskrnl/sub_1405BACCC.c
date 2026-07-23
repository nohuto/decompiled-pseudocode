/*
 * XREFs of sub_1405BACCC @ 0x1405BACCC
 * Callers:
 *     sub_1405BA768 @ 0x1405BA768 (sub_1405BA768.c)
 *     sub_1405BAF60 @ 0x1405BAF60 (sub_1405BAF60.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405BACCC(__int64 a1, __int64 a2)
{
  BOOL v3; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // r14d
  bool v14; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9

  v3 = 1;
  v4 = 48 * a2 - 0x220000000000LL;
  v5 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  v6 = (__int64)(v5 << 25) >> 16 << 25 >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL )
    v3 = v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v7 = (unsigned __int8)sub_1402F2700(v4);
  sub_140336AD8(v4);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      sub_140273FD0(v4, v8, v9, v10);
      goto LABEL_18;
    }
    v11 = (unsigned __int64 *)(sub_1402CC7C0(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                             + 8 * ((v5 >> 3) & 0x1FF));
    if ( (sub_140317A10((unsigned __int64)v11) & 1) != 0 )
      goto LABEL_16;
    v12 = sub_1402CBD10(v5, a2, -2147483644);
    v13 = 0;
    if ( sub_140317A80((unsigned __int64)v11) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v14 = (v12 & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v14 = (v12 & 1) == 0;
LABEL_12:
        if ( !v14 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    *v11 = v12;
    if ( v13 )
      sub_1402294F0((__int64)v11, v12);
LABEL_16:
    sub_1402BEDD0((unsigned __int64)v11, 0x11u);
  }
LABEL_18:
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v14 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
