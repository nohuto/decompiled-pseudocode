/*
 * XREFs of sub_140565F08 @ 0x140565F08
 * Callers:
 *     ExQueueDpcEventWait @ 0x14063E340 (ExQueueDpcEventWait.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F0AF8 @ 0x1402F0AF8 (sub_1402F0AF8.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140565F08(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 v5; // rdi
  ULONG_PTR v6; // r12
  unsigned __int8 CurrentIrql; // si
  char v9; // bp
  __int64 *v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf

  v4 = a4;
  *(_WORD *)(a3 + 16) = 1028;
  v5 = a3;
  *(_QWORD *)(a3 + 24) = a2;
  v6 = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  v9 = 0;
  sub_1402F3290((volatile signed __int32 *)a1, a2, a3, a4);
  if ( *(int *)(a1 + 4) <= 0 || (sub_1402F0AF8(a1), v9 = 1, v4) )
  {
    v10 = *(__int64 **)(a1 + 16);
    if ( *v10 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)v5 = a1 + 8;
    *(_QWORD *)(v5 + 8) = v10;
    *v10 = v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_BYTE *)(v5 + 17) = 5;
    sub_140345190(v6, a1, v5, 0LL, 0);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    sub_1402B0820((__int64)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  }
  return v9;
}
