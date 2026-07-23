/*
 * XREFs of sub_1402947A0 @ 0x1402947A0
 * Callers:
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_140578730 @ 0x140578730 (sub_140578730.c)
 * Callees:
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402947A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  char v5; // al
  unsigned int v6; // eax
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  bool v17; // zf
  struct _KPRCB *v18; // r10
  __int64 v19; // r9
  int v21; // [rsp+48h] [rbp+10h] BYREF
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 390);
  v5 = *(_BYTE *)(a2 + 112);
  if ( (v5 & 0x38) != 0 )
  {
    if ( (v5 & 0x18) != 0 )
    {
      if ( (v5 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      v22 = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = 0;
      while ( 1 )
      {
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v8 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v9 = *(_DWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 24) = v9 + 1;
            if ( v9 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v10 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v11 = *(_DWORD *)(v10 + 24) - 1;
            *(_DWORD *)(v10 + 24) = v11;
            if ( !v11 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v21);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        sub_14035C3FC(a1, &v22, a3);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v12 = KeGetCurrentPrcb();
      v13 = *((_QWORD *)v12 + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)v12 + 32) <= 1u )
        {
          v14 = *(_DWORD *)(v13 + 24) - 1;
          *(_DWORD *)(v13 + 24) = v14;
          if ( !v14 )
            sub_140418E4C(v12);
        }
      }
      LOBYTE(a3) = v3;
      LOBYTE(v6) = sub_140344800(a1, &v22, a3);
    }
    else
    {
      LOBYTE(a2) = 1;
      sub_140294824(a1, a2);
      sub_1402F1DC0(0LL, 0LL, 0LL);
      LOBYTE(v6) = dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          LOBYTE(v6) = KeGetCurrentIrql() - 2;
          if ( (unsigned __int8)v6 <= 0xDu )
          {
            v15 = KeGetCurrentPrcb();
            v16 = *((_QWORD *)v15 + 4375);
            v17 = (*(_DWORD *)(v16 + 20) & 0xFFFF0001) == 0;
            v6 = *(_DWORD *)(v16 + 20) & 0xFFFF0001;
            *(_DWORD *)(v16 + 20) = v6;
            if ( v17 )
              LOBYTE(v6) = sub_140418E4C(v15);
          }
        }
      }
      __writecr8(0LL);
    }
  }
  else if ( (_BYTE)a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 390);
    LOBYTE(v6) = sub_140294824(a1, a2);
  }
  else
  {
    LOBYTE(v6) = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v6) = KeGetCurrentIrql();
        if ( (unsigned __int8)v6 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v6 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v17 = (v6 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v6;
          if ( v17 )
            LOBYTE(v6) = sub_140418E4C(v18);
        }
      }
    }
    __writecr8(v3);
  }
  return v6;
}
