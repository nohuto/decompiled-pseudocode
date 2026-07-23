/*
 * XREFs of sub_140507CF0 @ 0x140507CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14051D5E4 @ 0x14051D5E4 (sub_14051D5E4.c)
 */

__int64 __fastcall sub_140507CF0(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  char v6; // bp
  unsigned __int8 v7; // al
  ULONG_PTR *v8; // r12
  unsigned __int64 v9; // r13
  ULONG_PTR *v10; // r8
  ULONG_PTR *v11; // rax
  ULONG_PTR *v12; // r15
  ULONG_PTR *v13; // rdi
  int v14; // r14d
  _DWORD *v15; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  ULONG_PTR *v24; // [rsp+80h] [rbp+18h]
  ULONG_PTR *v25; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int16)a3[1];
  if ( *a3 && v4 >= 0x20 )
  {
    memset(a3, 0, v4 - 4);
    v5 = 0;
    v6 = 1;
    v7 = sub_140252344(&qword_140C4BEE8);
    v8 = (ULONG_PTR *)qword_140C4DE70;
    v9 = v7;
    while ( v8 != &qword_140C4DE70 )
    {
      v24 = v8;
      v10 = v8;
      v8 = (ULONG_PTR *)*v8;
      v11 = v10 + 31;
      v12 = (ULONG_PTR *)v10[31];
      v25 = v10 + 31;
      while ( v12 != v11 )
      {
        v13 = v12;
        v12 = (ULONG_PTR *)*v12;
        if ( *((_DWORD *)v13 + 7) != -1 )
        {
          v14 = *((_DWORD *)v13 + 5);
          if ( v14 < *((_DWORD *)v13 + 6) )
          {
            do
            {
              v15 = (_DWORD *)(v13[5] + 56LL * (unsigned int)(v14 - *((_DWORD *)v13 + 5)));
              if ( (v15[3] & 1) != 0 )
              {
                *((_DWORD *)a3 + 4) = *((_DWORD *)v13 + 7) + v14 - *((_DWORD *)v13 + 5);
                a3[2] = 0;
                *((_DWORD *)a3 + 2) = v15[2];
                *((_DWORD *)a3 + 3) = *v15;
                *((_QWORD *)a3 + 3) = v10[44];
                v6 = sub_14042A5E0(a2, a3);
                if ( !v6 )
                  goto LABEL_16;
                v10 = v24;
              }
              ++v14;
            }
            while ( v14 < *((_DWORD *)v13 + 6) );
            v11 = v25;
          }
        }
      }
    }
LABEL_16:
    KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v6 && byte_140C54BB0 )
      return (unsigned int)sub_14051D5E4(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
