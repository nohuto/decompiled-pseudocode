/*
 * XREFs of sub_1402112F8 @ 0x1402112F8
 * Callers:
 *     sub_140210EA0 @ 0x140210EA0 (sub_140210EA0.c)
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 * Callees:
 *     sub_140211410 @ 0x140211410 (sub_140211410.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14062E258 @ 0x14062E258 (sub_14062E258.c)
 */

char __fastcall sub_1402112F8(_QWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v4; // r15
  _QWORD *v5; // r14
  struct _KPRCB *v6; // rdi
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  struct _KPRCB *v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r8
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  _DWORD v31[8]; // [rsp+20h] [rbp-48h] BYREF
  int v32; // [rsp+70h] [rbp+8h] BYREF
  int v33; // [rsp+78h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v5 = a1;
  do
  {
    v6 = KeGetCurrentPrcb();
    v7 = (volatile signed __int32 *)(v5 - 27);
    v5 = (_QWORD *)*v5;
    v33 = 0;
    while ( 1 )
    {
      v8 = *((_QWORD *)v6 + 4375);
      if ( v8 )
      {
        if ( *((_BYTE *)v6 + 32) <= 1u )
        {
          v16 = *(_DWORD *)(v8 + 24);
          *(_DWORD *)(v8 + 24) = v16 + 1;
          if ( v16 == -1 )
            sub_140418E4C(v6);
        }
      }
      if ( !_interlockedbittestandset64(v7 + 16, 0LL) )
        break;
      v15 = *((_QWORD *)v6 + 4375);
      if ( v15 )
      {
        if ( *((_BYTE *)v6 + 32) <= 1u )
        {
          v17 = *(_DWORD *)(v15 + 24) - 1;
          *(_DWORD *)(v15 + 24) = v17;
          if ( !v17 )
            sub_140418E4C(v6);
        }
      }
      do
        sub_1402F32E0(&v33);
      while ( *((_QWORD *)v7 + 8) );
    }
    sub_1402F69A0(v7);
    sub_140224100(v9);
    if ( (WORD2(xmmword_140D06900) & 0x200) != 0 )
    {
      LOBYTE(v11) = *((_BYTE *)v7 + 567);
      LOBYTE(v10) = *((_BYTE *)v7 + 566);
      sub_14062E258(v7, v10, v11);
    }
    LOBYTE(v12) = sub_140211410(CurrentPrcb, v7);
  }
  while ( v5 != a1 );
  if ( (unsigned __int8)v4 >= 2u )
  {
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      LOBYTE(v12) = *((_BYTE *)CurrentPrcb + 13242);
      if ( !(_BYTE)v12 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) )
        {
          *((_BYTE *)CurrentPrcb + 6) = 1;
        }
        else
        {
          v31[0] = 5;
          *(_OWORD *)&v31[1] = 0LL;
          LOBYTE(v12) = sub_1402ADD00(v31, 47LL);
        }
      }
    }
  }
  else
  {
    v13 = *((_QWORD *)CurrentPrcb + 1);
    if ( *((_QWORD *)CurrentPrcb + 2) )
    {
      sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0LL);
      v19 = KeGetCurrentPrcb();
      v32 = 0;
      while ( 1 )
      {
        v20 = *((_QWORD *)v19 + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)v19 + 32) <= 1u )
          {
            v21 = *(_DWORD *)(v20 + 24);
            *(_DWORD *)(v20 + 24) = v21 + 1;
            if ( v21 == -1 )
              sub_140418E4C(v19);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
          break;
        v22 = *((_QWORD *)v19 + 4375);
        if ( v22 )
        {
          if ( *((_BYTE *)v19 + 32) <= 1u )
          {
            v23 = *(_DWORD *)(v22 + 24) - 1;
            *(_DWORD *)(v22 + 24) = v23;
            if ( !v23 )
              sub_140418E4C(v19);
          }
        }
        do
          sub_1402F32E0(&v32);
        while ( *((_QWORD *)CurrentPrcb + 6) );
      }
      v24 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      _disable();
      LOBYTE(v18) = 1;
      sub_140345C80(CurrentPrcb, v13, 0LL, v18);
      _enable();
      *((_QWORD *)CurrentPrcb + 1) = v24;
      if ( *(_BYTE *)(v24 + 388) == 1 )
        *(_DWORD *)(v24 + 132) = *(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v24 + 388) = 2;
      *(_BYTE *)(v13 + 643) = 32;
      *(_BYTE *)(v13 + 390) = v4;
      sub_1402B9970(CurrentPrcb, v13);
      LOBYTE(v25) = v4;
      v14 = (unsigned __int8)sub_140428A30(v13, v24, v25) == 0;
    }
    else
    {
      v14 = (*(_DWORD *)(v13 + 116) & 0x40) == 0;
    }
    if ( !v14 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v14 = (*(_DWORD *)(v27 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v27 + 20) &= 0xFFFF0003;
          if ( v14 )
            sub_140418E4C(v26);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v13 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    LOBYTE(v12) = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v12) = KeGetCurrentIrql() - 2;
        if ( (unsigned __int8)v12 <= 0xDu )
        {
          v28 = KeGetCurrentPrcb();
          v29 = *((_QWORD *)v28 + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v14 = (v12 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v12;
          if ( v14 )
            LOBYTE(v12) = sub_140418E4C(v28);
        }
      }
    }
    __writecr8(v4);
  }
  return v12;
}
