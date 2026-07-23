/*
 * XREFs of sub_140279DB0 @ 0x140279DB0
 * Callers:
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 * Callees:
 *     sub_14024F0F8 @ 0x14024F0F8 (sub_14024F0F8.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027A168 @ 0x14027A168 (sub_14027A168.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     sub_1403295C0 @ 0x1403295C0 (sub_1403295C0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 */

__int64 __fastcall sub_140279DB0(__int64 a1, unsigned __int64 a2, int a3, int a4, __int64 a5)
{
  int v5; // ebp
  __int64 v8; // rbx
  char v9; // al
  unsigned __int8 v10; // al
  volatile __int32 *v11; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v14; // rcx
  signed __int32 v15; // ett
  unsigned __int8 v16; // r10
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r15
  unsigned __int64 v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  char *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  KIRQL v33; // al
  __int64 v34; // r9
  int v35; // eax
  int v36; // eax
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  __int128 v38; // [rsp+28h] [rbp-50h] BYREF
  __int128 v39; // [rsp+38h] [rbp-40h]
  int v40; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  v40 = 0;
  v38 = 0LL;
  v39 = 0LL;
  if ( !a3 )
    return 0LL;
  v8 = a5;
  *(_DWORD *)(a5 + 16) = 0;
  v9 = *(_BYTE *)(v8 + 37);
  *(_QWORD *)(v8 + 24) = a1;
  if ( a4 )
  {
    *(_BYTE *)(v8 + 37) = v9 | 1;
    v32 = sub_140282AD0(a1);
    v33 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v32);
    *(_DWORD *)(v32 + 4) = 0;
    *(_BYTE *)(v8 + 36) = v33;
    sub_140352E50(a2, &v38);
    if ( !(unsigned int)sub_14024F0F8((__int64)&v38, &v40) )
      goto LABEL_56;
    if ( v40 )
    {
      if ( (*(_DWORD *)(v8 + 4) & 4) == 0 )
        goto LABEL_56;
      *(_DWORD *)(v8 + 16) = v40;
    }
    goto LABEL_16;
  }
  *(_BYTE *)(v8 + 37) = v9 & 0xFE;
  v10 = *(_BYTE *)(a1 + 184) & 7;
  if ( v10 <= 4u )
  {
    if ( v10 == 2 )
    {
      v11 = (volatile __int32 *)&unk_140C53D00;
LABEL_6:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v34 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v34 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_140461B20(v11, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v14 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v35 = *(_DWORD *)(v14 + 24);
            *(_DWORD *)(v14 + 24) = v35 + 1;
            if ( v35 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        _m_prefetchw((const void *)v11);
        v15 = *v11 & 0x7FFFFFFF;
        if ( v15 != _InterlockedCompareExchange(v11, v15 + 1, v15) )
        {
          v30 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v30 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v36 = *(_DWORD *)(v30 + 24) - 1;
              *(_DWORD *)(v30 + 24) = v36;
              if ( !v36 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140366A20(v11, CurrentIrql);
        }
      }
      if ( *((_DWORD *)v11 + 1) )
        _InterlockedExchange(v11 + 1, 0);
      v16 = CurrentIrql;
      goto LABEL_13;
    }
LABEL_5:
    v11 = (volatile __int32 *)(a1 + 192);
    goto LABEL_6;
  }
  if ( v10 == 5 )
    goto LABEL_5;
  v16 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v16 <= 0xFu )
  {
    v29 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v29 + 20) |= ~((unsigned __int8)(1LL << (v16 + 1)) - 1) & 4;
  }
LABEL_13:
  *(_BYTE *)(v8 + 36) = v16;
  v37 = 0LL;
  v17 = sub_14031D9B0(a1, a2, 0LL);
  v18 = v17;
  v19 = a2 >> 9;
  if ( v17 )
  {
    *(_QWORD *)&v38 = (v19 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v38 + 1) = (((unsigned __int64)v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)&v39 = ((*((_QWORD *)&v38 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v39 + 1) = (((unsigned __int64)v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = *((_QWORD *)&v38 + v17);
    v21 = *((_QWORD *)&v38 + v17 - 1);
    v37 = v21;
    v22 = v38;
    if ( v20 )
      goto LABEL_15;
  }
  else
  {
    v22 = (v19 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v31 = sub_14027D6E0(a1, v22, &v37);
  v21 = v37;
  v20 = v31;
LABEL_15:
  *(_QWORD *)(v8 + 40) = v20;
  if ( v21 != v22 )
  {
    if ( (*(_DWORD *)(v8 + 4) & 4) != 0 && (sub_140317A10(v21) & 0x81) == 0x81 )
    {
      do
      {
        v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v5;
      }
      while ( v22 != v21 );
      *(_DWORD *)(v8 + 16) = v5;
      return 1LL;
    }
    goto LABEL_56;
  }
LABEL_16:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    if ( *(_DWORD *)(v8 + 48) == 3 )
    {
      v28 = sub_14026DFC0(0);
LABEL_25:
      *(_QWORD *)(v8 + 24) = v28;
      return 1LL;
    }
    v24 = sub_1403295C0(a2, v18);
    if ( v24 && *(_QWORD *)(v24 + 32) >> 62 == 3 )
    {
      v26 = *(_QWORD *)(sub_1403295C0(a2, v25) + 24);
      v27 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v26 & 1) == 0 )
        v27 = v26;
      v28 = (char *)(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v27 + 60LL) & 0x3FF)) + 17024LL);
      goto LABEL_25;
    }
LABEL_56:
    sub_14027A168(v8);
    return 0LL;
  }
  return 1LL;
}
