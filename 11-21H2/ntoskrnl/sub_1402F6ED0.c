/*
 * XREFs of sub_1402F6ED0 @ 0x1402F6ED0
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402EB9D0 @ 0x1402EB9D0 (sub_1402EB9D0.c)
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F5FD0 @ 0x1402F5FD0 (sub_1402F5FD0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402F6ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10
  __int64 v5; // rbx
  int v6; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a2 + 112);
  v5 = a2;
  LOBYTE(a2) = 0;
  v6 = v4 & 7;
  if ( v6 == 1 || v6 == 4 )
  {
    v9 = *(_QWORD *)(v5 + 232);
    if ( v9 )
    {
      if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(v5 + 540) = (unsigned __int8)*(_DWORD *)(v5 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 4LL * *(unsigned int *)(v5 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 40));
      }
    }
    v10 = *(_QWORD *)(v5 + 712);
    if ( v10 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = 0;
      v12 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v12 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v12 + 24);
          *(_DWORD *)(v12 + 24) = v22 + 1;
          if ( v22 == -1 )
LABEL_37:
            sub_140418E4C(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 32464), 0LL) )
      {
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v23 = *(_DWORD *)(v20 + 24) - 1;
            *(_DWORD *)(v20 + 24) = v23;
            if ( !v23 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v26, a2, a3, a4);
        while ( *(_QWORD *)(v10 + 32464) );
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v21 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v24 = *(_DWORD *)(v21 + 24);
            *(_DWORD *)(v21 + 24) = v24 + 1;
            if ( v24 == -1 )
              goto LABEL_37;
          }
        }
      }
      if ( *(_QWORD *)(v5 + 712) )
      {
        v13 = *(_QWORD *)(v5 + 216);
        v14 = *(_QWORD **)(v5 + 224);
        if ( *(_QWORD *)(v13 + 8) != v5 + 216 || *v14 != v5 + 216 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *(_QWORD *)(v5 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 32464), 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = *((_QWORD *)v15 + 4375);
      if ( v16 )
      {
        if ( *((_BYTE *)v15 + 32) <= 1u )
        {
          v25 = *(_DWORD *)(v16 + 24) - 1;
          *(_DWORD *)(v16 + 24) = v25;
          if ( !v25 )
            sub_140418E4C(v15);
        }
      }
    }
    v17 = *(_BYTE *)(v5 + 388);
    if ( v17 == 1 )
    {
      *(_DWORD *)(v5 + 116) |= 2u;
    }
    else if ( v17 == 5 )
    {
      v18 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436));
      if ( *(_BYTE *)(v5 + 391) )
        *(_QWORD *)(v5 + 1000) += v18;
      else
        *(_QWORD *)(v5 + 992) += v18;
    }
    *(_BYTE *)(v5 + 388) = 7;
    *(_QWORD *)(v5 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = v5 + 216;
    *(_QWORD *)(v5 + 200) = a3;
    *(_QWORD *)(v5 + 976) = 0LL;
    goto LABEL_18;
  }
  if ( !a4 )
    return (unsigned __int8)a2;
  if ( (v4 & 7) == 0 )
  {
    *(_BYTE *)(v5 + 112) = v4 & 0xF8 | 2;
    *(_QWORD *)(v5 + 200) = a3;
    *(_QWORD *)(v5 + 976) = 0LL;
    *(_BYTE *)(a4 + 17) = 0;
LABEL_18:
    LOBYTE(a2) = 1;
    return (unsigned __int8)a2;
  }
  if ( v6 == 5 )
  {
    *(_BYTE *)(v5 + 112) = v4 & 0xF8 | 6;
  }
  else if ( v6 == 3 )
  {
    *(_BYTE *)(a4 + 17) = 2;
  }
  return (unsigned __int8)a2;
}
