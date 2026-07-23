/*
 * XREFs of sub_140B52548 @ 0x140B52548
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_14023B3C8 @ 0x14023B3C8 (sub_14023B3C8.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403C2B24 @ 0x1403C2B24 (sub_1403C2B24.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405B1910 @ 0x1405B1910 (sub_1405B1910.c)
 */

__int64 __fastcall sub_140B52548(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  ULONG_PTR BugCheckParameter4; // r13
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v14; // r11
  int v15; // eax
  bool v16; // zf
  ULONG_PTR v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]

  result = (unsigned int)dword_140C54F84;
  v4 = BugCheckParameter3;
  BugCheckParameter4 = a3;
  if ( (dword_140C54F84 & 8) != 0 && BugCheckParameter3 )
  {
    do
    {
      v7 = *((unsigned int *)sub_1402C1550(BugCheckParameter2) + 2);
      v18 = 0LL;
      v17 = BugCheckParameter2;
      sub_14023B3C8((__int64)&StartContext, (__int64)sub_140B524A0, (__int64)&v17, v7);
      v8 = v18;
      if ( !v18 )
        KeBugCheckEx(0x1Au, 0x3030312uLL, BugCheckParameter2, v4, BugCheckParameter4);
      if ( *(_QWORD *)(v18 + 24) != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x3030313uLL, BugCheckParameter2, *(_QWORD *)(v18 + 24), 0LL);
      v9 = *(_QWORD *)(v18 + 40);
      result = *(int *)(v9 + 48);
      if ( (unsigned int)result <= 3 && (_DWORD)result != 2 )
        KeBugCheckEx(0x1Au, 0x3030314uLL, BugCheckParameter2, *(_QWORD *)(v18 + 40), *(int *)(v9 + 48));
      v10 = 168LL * *((int *)qword_14003BE90 + BugCheckParameter4) + 23168 + 24512 * v7 + qword_140C54F90;
      if ( v10 != v9 )
      {
        v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 16));
        sub_1405B1910((__int64)&StartContext, (_RTL_RB_TREE *)v9, v8);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 16));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = *((_QWORD *)CurrentPrcb + 4375);
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
              *(_DWORD *)(v14 + 20) &= v15;
              if ( v16 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        *(_QWORD *)(v8 + 40) = v10;
        result = sub_1403C2B24((__int64)&StartContext, v10, v8);
      }
      BugCheckParameter2 += 512LL;
      v4 -= 512LL;
    }
    while ( v4 );
  }
  return result;
}
