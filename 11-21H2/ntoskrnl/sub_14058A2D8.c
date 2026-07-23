/*
 * XREFs of sub_14058A2D8 @ 0x14058A2D8
 * Callers:
 *     sub_1405E2630 @ 0x1405E2630 (sub_1405E2630.c)
 * Callees:
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_14058A2D8(ULONG_PTR **a1, __int64 a2, ULONG_PTR *a3)
{
  int v4; // ebp
  ULONG_PTR *i; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  LOBYTE(a2) = 1;
  v13 = 0;
  for ( i = sub_140264ED0(a1, a2, &v13); v4; --v4 )
  {
    v6 = 48 * *a3 - 0x220000000000LL;
    v7 = (unsigned __int8)sub_1402F2700(v6);
    *(_WORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
    sub_14033C300(v6, 0);
    if ( _InterlockedDecrement64((volatile signed __int64 *)i + 54) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)i, 0LL, 0LL);
    sub_1402C6EB0(*a3, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    ++a3;
  }
  if ( v13 )
    sub_1403606C4(i[22]);
}
