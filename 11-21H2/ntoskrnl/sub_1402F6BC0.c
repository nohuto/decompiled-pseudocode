/*
 * XREFs of sub_1402F6BC0 @ 0x1402F6BC0
 * Callers:
 *     sub_1402095F0 @ 0x1402095F0 (sub_1402095F0.c)
 *     sub_140234888 @ 0x140234888 (sub_140234888.c)
 *     sub_140234B28 @ 0x140234B28 (sub_140234B28.c)
 *     sub_14023C084 @ 0x14023C084 (sub_14023C084.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_1402F0604 @ 0x1402F0604 (sub_1402F0604.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F35E0 @ 0x1402F35E0 (sub_1402F35E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402F6BC0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v5; // rbx
  unsigned __int8 v6; // r14
  __int64 v10; // r10
  char v12; // cl
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbp
  char v16; // al
  __int64 v17; // rcx
  struct _KPRCB *v18; // rcx
  __int64 v19; // r8
  __int64 result; // rax
  struct _KPRCB *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // edx
  _DWORD v40[14]; // [rsp+20h] [rbp-38h] BYREF
  int v41; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v6 = 0;
  v41 = 0;
  v10 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v10 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v32 = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 24) = v32 + 1;
      if ( v32 == -1 )
LABEL_42:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    v28 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v28 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v33 = *(_DWORD *)(v28 + 24) - 1;
        *(_DWORD *)(v28 + 24) = v33;
        if ( !v33 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v41, a2, a3, (__int64)a4);
    while ( *(_QWORD *)(v5 + 64) );
    v29 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v29 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v34 = *(_DWORD *)(v29 + 24);
        *(_DWORD *)(v29 + 24) = v34 + 1;
        if ( v34 == -1 )
          goto LABEL_42;
      }
    }
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v12 = *(_BYTE *)(v5 + 112);
    v13 = v12 & 7;
    if ( v13 == 1 || v13 == 4 )
    {
      v14 = *(_QWORD *)(v5 + 232);
      if ( v14 )
      {
        if ( (*(_BYTE *)v14 & 0x7F) == 0x15 )
        {
          *(_DWORD *)(v5 + 540) = (unsigned __int8)*(_DWORD *)(v5 + 540);
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 4LL * *(unsigned int *)(v5 + 540) + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 40));
        }
      }
      v15 = *(_QWORD *)(v5 + 712);
      if ( v15 )
      {
        v21 = KeGetCurrentPrcb();
        v40[0] = 0;
        v22 = *((_QWORD *)v21 + 4375);
        if ( v22 )
        {
          if ( *((_BYTE *)v21 + 32) <= 1u )
          {
            v35 = *(_DWORD *)(v22 + 24);
            *(_DWORD *)(v22 + 24) = v35 + 1;
            if ( v35 == -1 )
LABEL_55:
              sub_140418E4C(v21);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 32464), 0LL) )
        {
          v30 = *((_QWORD *)v21 + 4375);
          if ( v30 )
          {
            if ( *((_BYTE *)v21 + 32) <= 1u )
            {
              v36 = *(_DWORD *)(v30 + 24) - 1;
              *(_DWORD *)(v30 + 24) = v36;
              if ( !v36 )
                sub_140418E4C(v21);
            }
          }
          do
            sub_1402F32E0(v40, a2, a3, (__int64)a4);
          while ( *(_QWORD *)(v15 + 32464) );
          v31 = *((_QWORD *)v21 + 4375);
          if ( v31 )
          {
            if ( *((_BYTE *)v21 + 32) <= 1u )
            {
              v37 = *(_DWORD *)(v31 + 24);
              *(_DWORD *)(v31 + 24) = v37 + 1;
              if ( v37 == -1 )
                goto LABEL_55;
            }
          }
        }
        if ( *(_QWORD *)(v5 + 712) )
        {
          v23 = *(_QWORD *)(v5 + 216);
          v24 = *(_QWORD **)(v5 + 224);
          if ( *(_QWORD *)(v23 + 8) != v5 + 216 || *v24 != v5 + 216 )
            __fastfail(3u);
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)(v5 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 32464), 0LL);
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        if ( v26 )
        {
          if ( *((_BYTE *)v25 + 32) <= 1u )
          {
            v38 = *(_DWORD *)(v26 + 24) - 1;
            *(_DWORD *)(v26 + 24) = v38;
            if ( !v38 )
              sub_140418E4C(v25);
          }
        }
      }
      v16 = *(_BYTE *)(v5 + 388);
      if ( v16 == 1 )
      {
        *(_DWORD *)(v5 + 116) |= 2u;
      }
      else if ( v16 == 5 )
      {
        v17 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436));
        if ( *(_BYTE *)(v5 + 391) )
          *(_QWORD *)(v5 + 1000) += v17;
        else
          *(_QWORD *)(v5 + 992) += v17;
      }
      *(_BYTE *)(v5 + 388) = 7;
      *(_QWORD *)(v5 + 216) = *(_QWORD *)(a1 + 11528);
      *(_QWORD *)(a1 + 11528) = v5 + 216;
      *(_QWORD *)(v5 + 200) = a3;
      *(_QWORD *)(v5 + 976) = 0LL;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v5 + 112) & 7) == 0 )
    {
      *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 2;
      *(_QWORD *)(v5 + 200) = a3;
      *(_QWORD *)(v5 + 976) = 0LL;
      *(_BYTE *)(a2 + 17) = 0;
LABEL_12:
      v6 = 1;
      if ( a4 )
      {
        *a4 = v5;
        v27 = *(_BYTE **)(a2 + 32);
        if ( (*v27 & 0x7F) == 2 )
          sub_1402F35E0((__int64)v27, v5, a1);
      }
      goto LABEL_13;
    }
    if ( v13 == 5 )
    {
      *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 6;
    }
    else if ( v13 == 3 )
    {
      *(_BYTE *)(a2 + 17) = 2;
    }
  }
LABEL_13:
  *(_QWORD *)(v5 + 64) = 0LL;
  v18 = KeGetCurrentPrcb();
  v19 = *((_QWORD *)v18 + 4375);
  if ( v19 )
  {
    if ( *((_BYTE *)v18 + 32) <= 1u )
    {
      v39 = *(_DWORD *)(v19 + 24) - 1;
      *(_DWORD *)(v19 + 24) = v39;
      if ( !v39 )
        sub_140418E4C(v18);
    }
  }
  result = v6;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
