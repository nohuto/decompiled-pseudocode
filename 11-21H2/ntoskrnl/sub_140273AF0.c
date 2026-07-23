/*
 * XREFs of sub_140273AF0 @ 0x140273AF0
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140239C2C @ 0x140239C2C (sub_140239C2C.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140339CA0 @ 0x140339CA0 (sub_140339CA0.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_14059C8C8 @ 0x14059C8C8 (sub_14059C8C8.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_1405A3E3C @ 0x1405A3E3C (sub_1405A3E3C.c)
 *     sub_1405A7464 @ 0x1405A7464 (sub_1405A7464.c)
 * Callees:
 *     sub_140273EE0 @ 0x140273EE0 (sub_140273EE0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140273AF0(unsigned __int64 a1, __int64 a2)
{
  _BYTE *v2; // r14
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // si
  unsigned __int64 v12; // rdx
  ULONG_PTR *v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  char v16; // al
  _BYTE *i; // rsi
  __int64 v19; // r9
  unsigned int v20; // edi
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  __int64 v27; // r9
  int v28; // edx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v31; // r8
  int v32; // eax
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+70h] [rbp+18h] BYREF

  v2 = (_BYTE *)a2;
  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v4 = *v3;
    do
    {
      if ( (*v3 & 1) == 0 || (v4 & 0x200) != 0 )
        return 0LL;
      v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
    }
    while ( v5 > qword_140C50840 || (*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v6 = 48 * v5 - 0x220000000000LL;
    if ( v2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        *(_DWORD *)(v19 + 20) |= a2;
      }
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v33);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
    }
    else
    {
      v34 = 0;
      CurrentIrql = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v34);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
    }
    v8 = *v3;
    if ( (*v3 & 1) == 0 || (v8 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v31 = *((_QWORD *)CurrentPrcb + 4375);
              v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v24 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
              *(_DWORD *)(v31 + 20) &= v32;
              if ( v24 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      return 0LL;
    }
    if ( v5 == ((v8 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = *((_QWORD *)v22 + 4375);
            a2 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = ((unsigned int)a2 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= a2;
            if ( v24 )
              sub_140418E4C(v22);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  v9 = *(_QWORD *)(v6 + 40);
  if ( (v9 & 0x10000000000LL) != 0 || (v9 & 0x20000000000000LL) != 0 )
    goto LABEL_25;
  a2 = *(unsigned __int16 *)(v6 + 32);
  v10 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)a2 )
  {
    if ( (_WORD)a2 == 1 )
    {
      if ( !v10 && (*(_BYTE *)(v6 + 34) & 8) == 0 )
        goto LABEL_25;
    }
    else if ( (_WORD)a2 != 2 || !v10 || (*(_BYTE *)(v6 + 34) & 8) == 0 )
    {
      goto LABEL_25;
    }
  }
  v11 = 0;
  if ( v9 < 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0
    || (v12 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL, v12 <= 0xFFFFF6BFFFFFFF78uLL)
    && v12 >= 0xFFFFF68000000000uLL
    && (*(_BYTE *)(v6 + 35) & 0x20) != 0 )
  {
    v11 = 1;
    v13 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v9 >> 43) & 0x3FF));
    if ( !(unsigned int)sub_14032A4B0(v13, 1LL, 4LL) )
      goto LABEL_26;
  }
  else
  {
    v13 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)v9 >> 43) & 0x3FF));
  }
  if ( v13 == &StartContext )
  {
    a2 = (__int64)KeGetCurrentPrcb();
    v14 = *(_DWORD *)(a2 + 34460);
    while ( v14 )
    {
      if ( v14 == -1 )
        break;
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 34460), v14 - 1, v14);
      if ( v15 == v14 )
        goto LABEL_25;
    }
  }
  if ( !(unsigned int)sub_14028DC40(v13, 1LL, 0xFFFFFFFFLL) )
  {
    if ( v11 )
      sub_14028CE10(v13, 1LL);
    goto LABEL_26;
  }
LABEL_25:
  ++*(_WORD *)(v6 + 32);
LABEL_26:
  if ( CurrentIrql == 17 )
  {
    LOBYTE(a2) = 17;
    sub_140273EE0(v6, a2);
  }
  else
  {
    *v2 = CurrentIrql;
    v16 = *(_BYTE *)(v6 + 34);
    for ( i = (_BYTE *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL); (v16 & 0x20) != 0; v16 = *(_BYTE *)(v6 + 34) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = *((_QWORD *)v26 + 4375);
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v24 )
              sub_140418E4C(v26);
          }
        }
      }
      __writecr8(CurrentIrql);
      v20 = 0;
      while ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
      {
        if ( (++v20 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && (unsigned __int8)sub_14039EA10() )
          sub_14039D930(v20);
        else
          _mm_pause();
      }
      sub_1402F2700(v6);
    }
    *(_BYTE *)(v6 + 34) = v16 | 0x20;
    if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 && (*i & 0x20) == 0 )
      sub_14033A510(i, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v6;
}
