/*
 * XREFs of sub_140457A42 @ 0x140457A42
 * Callers:
 *     sub_140458C22 @ 0x140458C22 (sub_140458C22.c)
 *     sub_140458D38 @ 0x140458D38 (sub_140458D38.c)
 *     sub_140458E94 @ 0x140458E94 (sub_140458E94.c)
 *     sub_140458FD4 @ 0x140458FD4 (sub_140458FD4.c)
 *     sub_140504048 @ 0x140504048 (sub_140504048.c)
 *     sub_140504198 @ 0x140504198 (sub_140504198.c)
 *     sub_140504520 @ 0x140504520 (sub_140504520.c)
 *     sub_140504644 @ 0x140504644 (sub_140504644.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140456CC6 @ 0x140456CC6 (sub_140456CC6.c)
 *     sub_140457742 @ 0x140457742 (sub_140457742.c)
 *     sub_140513C1C @ 0x140513C1C (sub_140513C1C.c)
 *     sub_14051416C @ 0x14051416C (sub_14051416C.c)
 */

void __fastcall sub_140457A42(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  unsigned __int8 CurrentIrql; // bl
  char *v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // r12
  unsigned int v16; // edx
  _QWORD *i; // rcx
  __int64 v18; // r9
  char *v19; // rdi
  __int64 v20; // rcx
  int v21; // r15d
  unsigned int v22; // esi
  _QWORD *v23; // r12
  unsigned int v24; // r15d
  const void *v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v28; // r8
  int v29; // eax
  bool v30; // zf
  int v31; // [rsp+48h] [rbp-70h]
  int v32; // [rsp+50h] [rbp-68h]
  _OWORD v33[3]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v34; // [rsp+88h] [rbp-30h]
  char v35; // [rsp+C8h] [rbp+10h]

  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v13 = *(char **)(a2 + 24);
  else
    v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( v13 )
  {
    v35 = 0;
    v14 = a3 & 0xFFF;
    v15 = (v14 + (unsigned __int64)a5 + 4095) >> 12;
    v31 = v15;
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v14 = (unsigned int)CurrentIrql + 1;
          v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v18 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v35 = 1;
      }
      sub_140456CC6(v14, a4, v15, (__int64)v33);
    }
    else
    {
      v16 = 0;
      for ( i = a4; v16 < (unsigned int)v15; ++v16 )
      {
        if ( (i[6] & 0xFFFFFFFFFFFFF000uLL) == 0 )
          KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
        i = (_QWORD *)i[1];
      }
    }
    v19 = &v13[a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32)];
    v32 = (int)v19;
    v20 = (unsigned __int16)v19 & 0xFFF;
    v21 = (int)v19;
    if ( !*(_BYTE *)(a1 + 437) && !a6 )
    {
      sub_14051416C(a1, (_DWORD)v19, (_DWORD)a4, a5, 0, a8);
      v20 = (unsigned __int16)v19 & 0xFFF;
    }
    if ( a5 )
    {
      v22 = a5;
      v23 = a4;
      do
      {
        v24 = v22;
        if ( v22 >= 4096 - (int)v20 )
          v24 = 4096 - v20;
        v25 = (const void *)((v23[6] & 0xFFFFFFFFFFFFF000uLL) + (unsigned int)v20);
        if ( !a7 )
        {
          if ( a6 )
            sub_14042A5E0(v25, v19);
          else
            memmove(v19, v25, v24);
        }
        v23 = (_QWORD *)v23[1];
        v20 = 0LL;
        v19 += v24;
        v22 -= v24;
      }
      while ( v22 );
      LODWORD(v15) = v31;
      v21 = v32;
    }
    if ( !*(_BYTE *)(a1 + 437) && a6 )
      sub_14051416C(a1, v21, (_DWORD)a4, a5, a6, a8);
    if ( CurrentIrql <= 2u )
      sub_140457742(v20, (__int64)a4, v15, (__int64)v33);
    if ( v35 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v28 = *((_QWORD *)CurrentPrcb + 4375);
            v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
            *(_DWORD *)(v28 + 20) &= v29;
            if ( v30 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    sub_140513C1C(a1, a2, a3, (_DWORD)a4, a5, a6, a7, a8);
  }
}
