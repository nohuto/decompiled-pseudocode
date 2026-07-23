/*
 * XREFs of sub_140207CCC @ 0x140207CCC
 * Callers:
 *     sub_1402077B0 @ 0x1402077B0 (sub_1402077B0.c)
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 *     sub_14057A9BC @ 0x14057A9BC (sub_14057A9BC.c)
 * Callees:
 *     sub_140208284 @ 0x140208284 (sub_140208284.c)
 *     sub_140208368 @ 0x140208368 (sub_140208368.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A9BC @ 0x14057A9BC (sub_14057A9BC.c)
 */

char __fastcall sub_140207CCC(unsigned __int16 *a1, char a2)
{
  char v2; // bl
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r13
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  char v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  struct _KPRCB *v14; // rbx
  __int64 v15; // rcx
  struct _KPRCB *v16; // rcx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KPRCB *v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v32; // [rsp+20h] [rbp-58h]
  bool v33; // [rsp+80h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v35 = 0;
    v21 = qword_140D088C0[0];
    while ( 1 )
    {
      v22 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v22 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v26 = *(_DWORD *)(v22 + 24);
          *(_DWORD *)(v22 + 24) = v26 + 1;
          if ( v26 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 48), 0LL) )
        break;
      v27 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v27 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v28 = *(_DWORD *)(v27 + 24) - 1;
          *(_DWORD *)(v27 + 24) = v28;
          if ( !v28 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v35);
      while ( *(_QWORD *)(v21 + 48) );
    }
    v23 = *((_QWORD *)a1 + 67);
    v7 = *(_QWORD *)(v23 + 16) * (unsigned __int64)a1[1] * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = (unsigned __int64)*a1 * *(_QWORD *)(v23 + 8) / 0x2710;
    v9 = *(_QWORD *)(v23 + 16) * (unsigned __int64)a1[1] / 0x2710;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 48), 0LL);
    v24 = KeGetCurrentPrcb();
    v25 = *((_QWORD *)v24 + 4375);
    if ( v25 )
    {
      if ( *((_BYTE *)v24 + 32) <= 1u )
      {
        LODWORD(v7) = *(_DWORD *)(v25 + 24) - 1;
        *(_DWORD *)(v25 + 24) = v7;
        if ( !(_DWORD)v7 )
          LOBYTE(v7) = sub_140418E4C(v24);
      }
    }
    v2 = a2;
  }
  else
  {
    v4 = (qword_140D05228 * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v5 = qword_140D05228 * a1[1];
    v6 = v4;
    v7 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v6 >> 11;
    v9 = v5 / 0x2710;
  }
  v32 = dword_140D06884;
  v10 = 0LL;
  v33 = v9 == qword_140D05228;
  if ( dword_140D068E8 )
  {
    v11 = 16 * (v9 == qword_140D05228);
    do
    {
      v12 = qword_140D088C0[v10];
      v13 = (__int64)&a1[212 * (unsigned int)v10 + 64];
      if ( v12 )
      {
        v14 = KeGetCurrentPrcb();
        v36 = 0;
        while ( 1 )
        {
          v15 = *((_QWORD *)v14 + 4375);
          if ( v15 )
          {
            if ( *((_BYTE *)v14 + 32) <= 1u )
            {
              v29 = *(_DWORD *)(v15 + 24);
              *(_DWORD *)(v15 + 24) = v29 + 1;
              if ( v29 == -1 )
                sub_140418E4C(v14);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
            break;
          v19 = *((_QWORD *)v14 + 4375);
          if ( v19 )
          {
            if ( *((_BYTE *)v14 + 32) <= 1u )
            {
              v30 = *(_DWORD *)(v19 + 24) - 1;
              *(_DWORD *)(v19 + 24) = v30;
              if ( !v30 )
                sub_140418E4C(v14);
            }
          }
          do
            sub_1402F32E0(&v36);
          while ( *(_QWORD *)(v12 + 48) );
        }
        if ( !v33 && *(_BYTE *)(v12 + 33) )
        {
          v18 = v9 * v32;
          *((_QWORD *)a1 + 5) = v18;
          *((_QWORD *)a1 + 6) = v18;
        }
      }
      v2 = a2;
      LOBYTE(v7) = v11 | *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      *(_QWORD *)(v13 + 16) = v9;
      *(_BYTE *)(v13 + 112) = v7;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          LODWORD(v7) = *((_DWORD *)a1 + 1);
          if ( (v7 & 2) != 0 )
          {
            sub_140208368(v13, v12);
            LOBYTE(v7) = sub_140208284(v12, v13);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        v16 = KeGetCurrentPrcb();
        *((_QWORD *)&v7 + 1) = *((_QWORD *)v16 + 4375);
        if ( *((_QWORD *)&v7 + 1) )
        {
          if ( *((_BYTE *)v16 + 32) <= 1u )
          {
            LODWORD(v7) = *(_DWORD *)(*((_QWORD *)&v7 + 1) + 24LL) - 1;
            *(_DWORD *)(*((_QWORD *)&v7 + 1) + 24LL) = v7;
            if ( !(_DWORD)v7 )
              LOBYTE(v7) = sub_140418E4C(v16);
          }
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < dword_140D068E8 );
  }
  if ( v2 )
  {
    *(LARGE_INTEGER *)&v7 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v7;
  }
  v17 = a1 + 40;
  if ( (_QWORD *)*v17 != v17 )
  {
    BYTE8(v7) = v2;
    LOBYTE(v7) = sub_14057A9BC(v17, *((_QWORD *)&v7 + 1));
  }
  return v7;
}
