/*
 * XREFs of sub_140294110 @ 0x140294110
 * Callers:
 *     sub_140421050 @ 0x140421050 (sub_140421050.c)
 *     sub_140421230 @ 0x140421230 (sub_140421230.c)
 *     sub_140421380 @ 0x140421380 (sub_140421380.c)
 *     sub_1404214D0 @ 0x1404214D0 (sub_1404214D0.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_1402595B0 @ 0x1402595B0 (sub_1402595B0.c)
 *     sub_1402943C0 @ 0x1402943C0 (sub_1402943C0.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_1405794F8 @ 0x1405794F8 (sub_1405794F8.c)
 *     sub_14057A428 @ 0x14057A428 (sub_14057A428.c)
 */

char __fastcall sub_140294110(__int64 a1, char a2)
{
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  char v9; // r14
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rax
  volatile signed __int32 *v15; // r14
  struct _KPRCB *v16; // r13
  __int64 v17; // rcx
  char v18; // al
  volatile signed __int64 *v19; // rcx
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F && !dword_140D06A38 )
  {
    if ( dword_140C2B994 == 4 )
    {
      sub_14057A428(1LL, 0LL);
    }
    else if ( (unsigned int)(dword_140C2B994 - 1) <= 1 )
    {
      sub_1402595B0();
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v9 = sub_14042A5E0(a1, *(_QWORD *)(a1 + 48));
    return v9 != 0;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( !v4
    || !*(_BYTE *)(v4 + 16)
    || (v22 = dword_140D0E5E0[HIDWORD(KeGetPcr()[1].LockArray)],
        ((unsigned int)(*(_QWORD *)v4 >> (v22 & 0x3F)) & (v22 >> 6 == *(unsigned __int16 *)(v4 + 8))) != 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = *((_QWORD *)CurrentPrcb + 1458);
    *(_BYTE *)(a1 + 224) = 1;
    *((_QWORD *)CurrentPrcb + 1458) = a1 + 176;
    v7 = __rdtsc();
    *(_QWORD *)(a1 + 184) = v7;
    v8 = v7;
    if ( a2 )
    {
      v15 = *(volatile signed __int32 **)(a1 + 72);
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_14045A310(*(_QWORD *)(a1 + 72));
        v18 = sub_14042A5E0(a1, *(_QWORD *)(a1 + 48));
      }
      else
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        if ( v17 )
        {
          if ( *((_BYTE *)v16 + 32) <= 1u )
          {
            v25 = *(_DWORD *)(v17 + 24);
            *(_DWORD *)(v17 + 24) = v25 + 1;
            if ( v25 == -1 )
              sub_140418E4C(v16);
          }
        }
        if ( _interlockedbittestandset64(v15, 0LL) )
        {
          v24 = *((_QWORD *)v16 + 4375);
          if ( v24 )
          {
            if ( *((_BYTE *)v16 + 32) <= 1u )
            {
              v26 = *(_DWORD *)(v24 + 24) - 1;
              *(_DWORD *)(v24 + 24) = v26;
              if ( !v26 )
                sub_140418E4C(v16);
            }
          }
          sub_140211E70(v15);
        }
        v18 = sub_14042A5E0(a1, *(_QWORD *)(a1 + 48));
      }
      v9 = v18;
      v19 = *(volatile signed __int64 **)(a1 + 72);
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        sub_14056E8CC(v19, retaddr);
      else
        _InterlockedAnd64(v19, 0LL);
      v20 = KeGetCurrentPrcb();
      v21 = *((_QWORD *)v20 + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)v20 + 32) <= 1u )
        {
          v27 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v27;
          if ( !v27 )
            sub_140418E4C(v20);
        }
      }
    }
    else
    {
      v9 = sub_14042A5E0(a1, *(_QWORD *)(a1 + 48));
    }
    v10 = __rdtsc();
    v11 = *((_DWORD *)CurrentPrcb + 8123);
    v12 = v10 - *(_QWORD *)(a1 + 184);
    if ( v11 != *(_DWORD *)(a1 + 232) )
    {
      *(_DWORD *)(a1 + 232) = v11;
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_QWORD *)(a1 + 248) = 0LL;
      *(_QWORD *)(a1 + 256) = 0LL;
      *(_QWORD *)(a1 + 264) = 0LL;
    }
    *(_QWORD *)(a1 + 176) += v12;
    *(_QWORD *)(a1 + 240) += v12;
    ++*(_QWORD *)(a1 + 192);
    ++*(_QWORD *)(a1 + 248);
    if ( v6 != 1 )
    {
      v14 = v10 - v8;
      if ( *(_BYTE *)(v6 + 48) )
        *(_QWORD *)(v6 + 8) += v14;
      else
        *(_QWORD *)(v6 + 32) += v14;
    }
    *((_QWORD *)CurrentPrcb + 1458) = v6;
    *(_BYTE *)(a1 + 224) = 0;
    if ( CurrentPrcb == (struct _KPRCB *)qword_140C2AAB0 && *((_BYTE *)CurrentPrcb + 32) == 2 )
    {
      if ( *((_BYTE *)CurrentPrcb + 13242) )
        sub_1405794F8(*(_QWORD *)(a1 + 136));
    }
    return v9 != 0;
  }
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 272));
  sub_1402943C0(FirstSetRightGroupAffinity);
  return 2;
}
