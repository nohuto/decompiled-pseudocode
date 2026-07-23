/*
 * XREFs of sub_1402EE4D4 @ 0x1402EE4D4
 * Callers:
 *     sub_140244508 @ 0x140244508 (sub_140244508.c)
 *     sub_1402EE3D8 @ 0x1402EE3D8 (sub_1402EE3D8.c)
 *     sub_140573898 @ 0x140573898 (sub_140573898.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402D0CE0 @ 0x1402D0CE0 (sub_1402D0CE0.c)
 *     sub_1402EE784 @ 0x1402EE784 (sub_1402EE784.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6ED0 @ 0x1402F6ED0 (sub_1402F6ED0.c)
 *     sub_140357840 @ 0x140357840 (sub_140357840.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402EE4D4(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v4; // di
  __int64 v7; // rcx
  __int64 v8; // r11
  char v9; // si
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  volatile signed __int32 *v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rcx
  struct _KPRCB *v19; // rsi
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // [rsp+50h] [rbp+8h] BYREF
  int v31; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v30 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v25 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v25 + 1;
        if ( v25 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v24 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v24 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v26 = *(_DWORD *)(v24 + 24) - 1;
        *(_DWORD *)(v24 + 24) = v26;
        if ( !v26 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v30);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      v8 = a1 + 648;
      *(_DWORD *)(a1 + 740) = 0;
      v9 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        v9 = 1;
        sub_1402EE784(a1 + 648);
      }
      if ( dword_140D06D38
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v9 )
        {
          LOBYTE(a3) = 2;
          sub_1402EE894(a2, v8, a3);
        }
      }
      else
      {
        v11 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v11;
        *(_BYTE *)(a1 + 193) = 1;
        sub_140224100(a1);
        v13 = *(_QWORD *)(a1 + 208);
        v14 = v13 + 17;
        v15 = v13 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v14 < 5u )
          {
            v16 = *(volatile signed __int32 **)(v14 + 15);
            sub_1402F3290(v16);
            if ( *(_BYTE *)v14 == 4 )
            {
              v17 = *(_QWORD **)(v14 - 9);
              v12 = v14 - 17;
              v18 = *(_QWORD *)(v14 - 17);
              if ( *(_QWORD *)(v18 + 8) != v14 - 17 || *v17 != v12 )
                __fastfail(3u);
              *v17 = v18;
              *(_QWORD *)(v18 + 8) = v17;
            }
            _InterlockedAnd(v16, 0xFFFFFF7F);
            *(_BYTE *)v14 = 6;
          }
          v14 += 48LL;
        }
        while ( v14 - 17 != v15 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(v12) = 1;
          v22 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)sub_140357840(a1 + 256, v12) )
          {
            v23 = *(_QWORD *)(a1 + 280);
            if ( v23 <= v22 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v22;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v22 - v23;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0
          && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
        {
          sub_1402D0CE0(*(_QWORD *)(a1 + 184));
        }
        v19 = KeGetCurrentPrcb();
        v31 = 0;
        while ( 1 )
        {
          v20 = *((_QWORD *)v19 + 4375);
          if ( v20 )
          {
            if ( *((_BYTE *)v19 + 32) <= 1u )
            {
              v27 = *(_DWORD *)(v20 + 24);
              *(_DWORD *)(v20 + 24) = v27 + 1;
              if ( v27 == -1 )
                sub_140418E4C(v19);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v28 = *((_QWORD *)v19 + 4375);
          if ( v28 )
          {
            if ( *((_BYTE *)v19 + 32) <= 1u )
            {
              v29 = *(_DWORD *)(v28 + 24) - 1;
              *(_DWORD *)(v28 + 24) = v29;
              if ( !v29 )
                sub_140418E4C(v19);
            }
          }
          do
            sub_1402F32E0(&v31);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v21 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v21 |= 4u;
        *(_BYTE *)(a1 + 112) = v21;
        if ( (v21 & 0x20) != 0 )
          sub_1402F6ED0(a2, a1, 256LL, 0LL);
      }
    }
    v4 = 1;
  }
  sub_140224100(a1);
  return v4;
}
