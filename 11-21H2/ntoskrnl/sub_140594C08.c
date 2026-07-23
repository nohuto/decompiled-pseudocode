/*
 * XREFs of sub_140594C08 @ 0x140594C08
 * Callers:
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 * Callees:
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140594F80 @ 0x140594F80 (sub_140594F80.c)
 */

void __fastcall sub_140594C08(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // r9d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned __int8 CurrentIrql; // si
  __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v27; // r8
  int v28; // eax
  bool v29; // zf
  int v30; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0;
  v6 = a6;
  if ( a4 != 1 && (*(_BYTE *)(a4 + 184) & 7) == 0 )
  {
    v10 = *a1;
    v11 = a6 & 0xFFFFFFFFFFE00000uLL;
    if ( v10 && v11 == v10 )
      goto LABEL_42;
    if ( a6 - 1 <= 0x7FFFFFFEFFFELL && v11 == a6 && *a5 + a5[1] - a6 >= 0x200000 )
    {
      *a1 = 0LL;
      if ( v6 >= a1[3] && v6 <= a1[4] )
      {
LABEL_16:
        v18 = *(_QWORD *)(a2 + 88);
        if ( v18 )
        {
          if ( v18 == a1[1]
            && *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4)) + 2) == *((_DWORD *)a1 + 10) - 1 )
          {
            *a1 = v6;
            goto LABEL_42;
          }
          sub_140594F80(a1, a2, a3, 0LL);
        }
        a1[1] = 0LL;
        if ( *((_DWORD *)a1 + 4) || (v19 = sub_14026A784(a3, 512LL, 1024LL, 6u), (*((_DWORD *)a1 + 4) = v19 >= 0) != 0) )
        {
          v20 = *((_DWORD *)a1 + 10);
          if ( v20 )
            v21 = v20 - 1;
          else
            v21 = *(_DWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 33364);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v24 = sub_140267060(a3, v6, 1u, v21, 1u, 4, 0LL);
          *(_QWORD *)(a2 + 88) = v24;
          if ( v24 )
            sub_1402C6AA0(v24, 1, 2, 1, 0LL, 0LL, 0LL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v25 = KeGetCurrentIrql();
              if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v27 = *((_QWORD *)CurrentPrcb + 4375);
                v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
                *(_DWORD *)(v27 + 20) &= v28;
                if ( v29 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          a1[1] = *(_QWORD *)(a2 + 88);
          *a1 = v6;
        }
        goto LABEL_42;
      }
      v12 = sub_14030E7C0(v6, 2, &v30);
      v13 = v12;
      if ( !v12 )
        goto LABEL_42;
      v14 = *(_DWORD *)(v12 + 48);
      if ( (v14 & 0x70) == 0
        && (v14 & 0x200000) != 0
        && (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12) | 0xFFF)
         + 1
         - v6 >= 0x200000
        && ((v14 >> 12) & 0x7F) != 0
        && (unsigned int)sub_14033D7D0((v14 >> 7) & 0x1F) == 1 )
      {
        v17 = *(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32);
        a1[4] = v16;
        a1[3] = v17 << 12;
        *((_DWORD *)a1 + 10) = v15;
        sub_14030EA70((char *)v13);
        goto LABEL_16;
      }
      sub_14030EA70((char *)v13);
    }
    else
    {
      *a1 = 0LL;
    }
LABEL_42:
    if ( !*a1 )
      sub_140594F80(a1, a2, a3, 0LL);
  }
}
