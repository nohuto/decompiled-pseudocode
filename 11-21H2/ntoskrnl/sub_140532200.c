/*
 * XREFs of sub_140532200 @ 0x140532200
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14052266C @ 0x14052266C (sub_14052266C.c)
 *     sub_14052268C @ 0x14052268C (sub_14052268C.c)
 *     sub_1405226CC @ 0x1405226CC (sub_1405226CC.c)
 *     sub_140532404 @ 0x140532404 (sub_140532404.c)
 *     sub_1405336FC @ 0x1405336FC (sub_1405336FC.c)
 */

__int64 __fastcall sub_140532200(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  char v6; // r14
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h]
  unsigned __int64 v20; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v6 = 0;
  if ( a2 >> 9 >= dword_140C49C74 || (a2 & 0x1FF) + a3 > 0x200 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = sub_140532404(a2);
    if ( *(_QWORD *)v7 == a1 )
    {
      byte_140C49C38 = sub_140252344(&qword_140C49C30);
      v8 = *(_DWORD *)(v7 + 48) == a3;
      *(_DWORD *)(v7 + 48) -= a3;
      if ( v8 )
      {
        sub_1405336FC(a1, *(unsigned int *)(v7 + 52), &xmmword_140C49C40);
        v6 = 1;
        v19 = *(_OWORD *)(v7 + 24);
        v18 = *(_OWORD *)(v7 + 8);
        v9 = *(_QWORD *)(v7 + 40);
        *(_OWORD *)v7 = 0LL;
        *(_OWORD *)(v7 + 16) = 0LL;
        *(_OWORD *)(v7 + 32) = 0LL;
        *(_QWORD *)(v7 + 48) = 0LL;
        v20 = v9;
      }
      v10 = (unsigned __int8)byte_140C49C38;
      KeReleaseSpinLockFromDpcLevel(&qword_140C49C30);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = (unsigned int)(v10 + 1);
            v14 = *((_QWORD *)CurrentPrcb + 4375);
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v8 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v8 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
      if ( v6 )
      {
        if ( *((_QWORD *)&v18 + 1) == *((_QWORD *)&xmmword_140C49C40 + 1) )
          sub_14052266C(v11, 0LL, 0LL, 0LL, 0LL);
        sub_1405226CC(v11, *((void **)&v18 + 1), v19, 1u);
        sub_14052268C(v16, v20);
      }
    }
    else
    {
      return (unsigned int)-1073741594;
    }
  }
  return v3;
}
