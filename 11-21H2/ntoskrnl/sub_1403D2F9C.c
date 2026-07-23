/*
 * XREFs of sub_1403D2F9C @ 0x1403D2F9C
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_1403D30D0 @ 0x1403D30D0 (sub_1403D30D0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

char __fastcall sub_1403D2F9C(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // si
  _QWORD *v4; // rdi
  char result; // al
  ULONG_PTR v6; // rsi
  bool v7; // zf
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax
  int v25[8]; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+78h] [rbp+38h] BYREF
  _QWORD *v27; // [rsp+80h] [rbp+40h] BYREF

  v27 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  sub_1403D30D0(a1, &v27);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = v27;
  if ( v27 )
  {
    v27 = (_QWORD *)*v27;
    do
    {
      sub_1403405E0((__int64)CurrentPrcb, (ULONG_PTR)(v4 - 27), (__int64)&v27);
      v4 = v27;
      ++v3;
      if ( v27 )
        v27 = (_QWORD *)*v27;
      if ( (v3 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
    }
    while ( v4 );
  }
  result = sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
  if ( CurrentIrql >= 2u )
  {
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      result = *((_BYTE *)CurrentPrcb + 13242);
      if ( !result )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) )
        {
          *((_BYTE *)CurrentPrcb + 6) = 1;
        }
        else
        {
          v25[0] = 5;
          *(_OWORD *)&v25[1] = 0LL;
          return sub_1402ADD00(v25, 0x2Fu);
        }
      }
    }
  }
  else
  {
    v6 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0);
      v12 = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        v13 = *((_QWORD *)v12 + 4375);
        if ( v13 )
        {
          if ( *((_BYTE *)v12 + 32) <= 1u )
          {
            v14 = *(_DWORD *)(v13 + 24);
            *(_DWORD *)(v13 + 24) = v14 + 1;
            if ( v14 == -1 )
              sub_140418E4C(v12);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v15 = *((_QWORD *)v12 + 4375);
        if ( v15 )
        {
          if ( *((_BYTE *)v12 + 32) <= 1u )
          {
            v16 = *(_DWORD *)(v15 + 24) - 1;
            *(_DWORD *)(v15 + 24) = v16;
            if ( !v16 )
              sub_140418E4C(v12);
          }
        }
        do
          sub_1402F32E0(&v26, v9, v10, v11);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v17 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v11) = 1;
      sub_140345C80((__int64)CurrentPrcb, v6, 0LL, v11);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v17;
      if ( *(_BYTE *)(v17 + 388) == 1 )
      {
        v18 = (unsigned int)(*(_DWORD *)(v17 + 132) - *(_DWORD *)(v17 + 436));
        *(_DWORD *)(v17 + 132) = v18 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(v17 + 388) = 2;
      *(_BYTE *)(v6 + 643) = 32;
      *(_BYTE *)(v6 + 390) = CurrentIrql;
      sub_1402B9970((__int64)CurrentPrcb, v6, v18);
      LOBYTE(v19) = CurrentIrql;
      v7 = (unsigned __int8)sub_140428A30(v6, v17, v19) == 0;
    }
    else
    {
      v7 = (*(_DWORD *)(v6 + 116) & 0x40) == 0;
    }
    if ( !v7 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((_QWORD *)v20 + 4375);
          v7 = (*(_DWORD *)(v21 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v21 + 20) &= 0xFFFF0003;
          if ( v7 )
            sub_140418E4C(v20);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v6 + 116) &= ~0x40u;
      sub_1402F1DC0(0, 0LL, 0LL);
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v22 = KeGetCurrentPrcb();
      v23 = *((_QWORD *)v22 + 4375);
      v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v7 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
      *(_DWORD *)(v23 + 20) &= v24;
      if ( v7 )
        sub_140418E4C(v22);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
