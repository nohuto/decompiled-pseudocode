/*
 * XREFs of sub_1402EF710 @ 0x1402EF710
 * Callers:
 *     sub_1402EEAA8 @ 0x1402EEAA8 (sub_1402EEAA8.c)
 *     sub_1402EF5FC @ 0x1402EF5FC (sub_1402EF5FC.c)
 *     sub_14035F27C @ 0x14035F27C (sub_14035F27C.c)
 *     sub_140573898 @ 0x140573898 (sub_140573898.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14025C08C @ 0x14025C08C (sub_14025C08C.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     sub_1402F6ED0 @ 0x1402F6ED0 (sub_1402F6ED0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140357790 @ 0x140357790 (sub_140357790.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14057AAF8 @ 0x14057AAF8 (sub_14057AAF8.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

char __fastcall sub_1402EF710(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // r12
  _QWORD *v10; // rsi
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int8 v16; // r15
  unsigned __int8 i; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 *v20; // rcx
  int v21; // edi
  struct _KPRCB *v22; // rsi
  __int64 v23; // rcx
  unsigned int v24; // edi
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdi
  _QWORD *v34; // r15
  unsigned __int8 CurrentIrql; // cl
  __int64 v36; // r9
  struct _KPRCB *v37; // r13
  __int64 v38; // rbp
  __int64 v39; // r8
  int v40; // ecx
  _QWORD *v41; // rdx
  int v43; // [rsp+80h] [rbp+8h] BYREF
  __int64 v44; // [rsp+88h] [rbp+10h]
  unsigned int v45; // [rsp+90h] [rbp+18h] BYREF
  int v46; // [rsp+98h] [rbp+20h] BYREF

  v44 = a2;
  v4 = a2;
  v45 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v43 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v28 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v28 + 1;
        if ( v28 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v15 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v15 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v29 = *(_DWORD *)(v15 + 24) - 1;
        *(_DWORD *)(v15 + 24) = v29;
        if ( !v29 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v43);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
  {
    if ( !a3 )
    {
      *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
      sub_140224100(a1);
      v16 = *(_BYTE *)(a1 + 587);
      for ( i = 0; i < v16; ++i )
      {
        v18 = *(_QWORD *)(a1 + 208) + 48LL * i;
        if ( *(_BYTE *)(v18 + 17) == 6 )
        {
          v19 = *(_QWORD *)(v18 + 32);
          *(_BYTE *)(v18 + 17) = 4;
          sub_1402F3290(v19);
          if ( *(int *)(v19 + 4) > 0 || (*(_BYTE *)v19 & 0x7F) == 2 )
          {
            _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
            *(_BYTE *)(v18 + 17) = 5;
            a3 = 1;
            break;
          }
          v20 = *(__int64 **)(v19 + 16);
          if ( *v20 != v19 + 8 )
LABEL_88:
            __fastfail(3u);
          *(_QWORD *)v18 = v19 + 8;
          *(_QWORD *)(v18 + 8) = v20;
          *v20 = v18;
          *(_QWORD *)(v19 + 16) = v18;
          _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
        }
      }
      v21 = 0;
      if ( _bittest((const signed __int32 *)(a1 + 116), 0x11u) && !a3 )
      {
        v26 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 256) |= 0x40000080u;
        if ( (unsigned int)sub_140357790(a1 + 256, v26, 0LL, &v45) )
        {
          if ( sub_1402B7800(v4, a1 + 256, 0LL, v45, 0LL) )
          {
            if ( _bittest((_DWORD *)&xmmword_140D06900 + 2, 0x11u) )
            {
              LOBYTE(v27) = 1;
              sub_14057AAF8(a1 + 256, 0LL, v27);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
            }
          }
          else
          {
            sub_1402A7FE0(v4, a1 + 256, 0LL);
          }
          v21 = 1;
        }
        else
        {
          a3 = 1;
          v21 = 0;
        }
      }
      v22 = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v23 = *((_QWORD *)v22 + 4375);
        if ( v23 )
        {
          if ( *((_BYTE *)v22 + 32) <= 1u )
          {
            v30 = *(_DWORD *)(v23 + 24);
            *(_DWORD *)(v23 + 24) = v30 + 1;
            if ( v30 == -1 )
              sub_140418E4C(v22);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v31 = *((_QWORD *)v22 + 4375);
        if ( v31 )
        {
          if ( *((_BYTE *)v22 + 32) <= 1u )
          {
            v32 = *(_DWORD *)(v31 + 24) - 1;
            *(_DWORD *)(v31 + 24) = v32;
            if ( !v32 )
              sub_140418E4C(v22);
          }
        }
        do
          sub_1402F32E0(&v46);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v24 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v21 << 9) & 0xFFFDFFFF;
      v25 = *(_BYTE *)(a1 + 112) & 0xE7;
      *(_DWORD *)(a1 + 116) = v24;
      if ( v25 != 5 || (unsigned int)sub_14025C08C(a1, (v24 & 0x10) != 0, *(_BYTE *)(a1 + 391), 0) )
      {
        a3 = 1;
      }
      else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        a3 = 1;
      }
    }
    *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 5 )
        sub_1402F6ED0(v4, a1, 256LL, 0LL);
    }
    else
    {
      sub_1402EE894(v4, a1 + 648, 2);
    }
  }
  LOBYTE(v8) = sub_140224100(a1);
  v9 = (_DWORD *)(a1 + 736);
  v10 = (_QWORD *)(a1 + 744);
  v11 = *(_QWORD **)(a1 + 744);
  if ( v11 != (_QWORD *)(a1 + 744) )
  {
    while ( 1 )
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
      v13 = *((_BYTE *)v12 + 16);
      if ( v13 == 1 )
        break;
      if ( v13 != 2 )
      {
        if ( v13 == 4 )
        {
          *((_BYTE *)v12 + 17) = 5;
          v9[1] = 0;
          LOBYTE(v8) = KeInsertQueueDpc((PRKDPC)v12[3], v9, v12);
          goto LABEL_18;
        }
        v14 = 256LL;
        goto LABEL_17;
      }
      *((_BYTE *)v12 + 17) = 5;
      v33 = v12[3];
      *v12 = 0LL;
      v34 = (_QWORD *)(v33 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v36 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v36 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v37 = KeGetCurrentPrcb();
      v38 = *((_QWORD *)v37 + 1);
      if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
      {
        LOBYTE(v39) = sub_14056B1E4(*((_QWORD *)v37 + 1));
        sub_14062DA60(v38, v12, v39);
      }
      sub_1402F3290(v33);
      if ( (_QWORD *)*v34 == v34
        || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
        || *(_QWORD *)(v38 + 232) == v33 && *(_BYTE *)(v38 + 643) == 15
        || (LOBYTE(v8) = sub_1402F6A70(v37, v33, v12), !(_BYTE)v8) )
      {
        v40 = *(_DWORD *)(v33 + 4);
        *(_DWORD *)(v33 + 4) = v40 + 1;
        v8 = v33 + 24;
        v41 = *(_QWORD **)(v33 + 32);
        if ( *v41 != v33 + 24 )
          goto LABEL_88;
        *v12 = v8;
        v12[1] = v41;
        *v41 = v12;
        *(_QWORD *)(v33 + 32) = v12;
        if ( !v40 && (_QWORD *)*v34 != v34 )
          LOBYTE(v8) = sub_14035B550(v37, v33);
      }
      else
      {
        *v12 = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
      v4 = v44;
LABEL_18:
      if ( v11 == v10 )
        goto LABEL_9;
    }
    v14 = *((unsigned __int16 *)v12 + 9);
LABEL_17:
    LOBYTE(v8) = sub_1402F6BC0(v4, v12, v14, 0LL);
    goto LABEL_18;
  }
LABEL_9:
  v10[1] = v10;
  *v10 = v10;
  return v8;
}
