/*
 * XREFs of sub_140207A84 @ 0x140207A84
 * Callers:
 *     sub_140207880 @ 0x140207880 (sub_140207880.c)
 *     sub_14057A9BC @ 0x14057A9BC (sub_14057A9BC.c)
 * Callees:
 *     sub_140208284 @ 0x140208284 (sub_140208284.c)
 *     sub_140208368 @ 0x140208368 (sub_140208368.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057A9BC @ 0x14057A9BC (sub_14057A9BC.c)
 */

char __fastcall sub_140207A84(unsigned __int16 *a1, char a2)
{
  char v2; // bl
  __int16 v3; // bp
  unsigned __int16 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  char v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  struct _KPRCB *v14; // rbx
  __int64 v15; // rcx
  struct _KPRCB *v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r14
  struct _KPRCB *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // rax
  unsigned int v31; // [rsp+20h] [rbp-58h]
  bool v32; // [rsp+80h] [rbp+8h]
  int v34; // [rsp+90h] [rbp+18h] BYREF
  int v35; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  v3 = *a1;
  v5 = a1[1];
  if ( *((_QWORD *)a1 + 12) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v34 = 0;
    v20 = qword_140D088C0[0];
    while ( 1 )
    {
      v21 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v24 = *(_DWORD *)(v21 + 24);
          *(_DWORD *)(v21 + 24) = v24 + 1;
          if ( v24 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
        break;
      v25 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v25 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v26 = *(_DWORD *)(v25 + 24) - 1;
          *(_DWORD *)(v25 + 24) = v26;
          if ( !v26 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v34);
      while ( *(_QWORD *)(v20 + 48) );
    }
    v22 = *((_QWORD *)a1 + 67);
    QuadPart = (unsigned __int64)*a1 * *(_QWORD *)(v22 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    v9 = QuadPart;
    if ( v3 == v5 )
      v6 = (unsigned __int64)*a1 * *(_QWORD *)(v22 + 8) / *(unsigned int *)(*((_QWORD *)a1 + 12) + 20LL);
    else
      v6 = *(_QWORD *)(v22 + 16);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
    v23 = KeGetCurrentPrcb();
    v8 = *((_QWORD *)v23 + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)v23 + 32) <= 1u )
      {
        LODWORD(QuadPart) = *(_DWORD *)(v8 + 24) - 1;
        *(_DWORD *)(v8 + 24) = QuadPart;
        if ( !(_DWORD)QuadPart )
          LOBYTE(QuadPart) = sub_140418E4C(v23);
      }
    }
    v2 = a2;
  }
  else
  {
    v6 = qword_140D05228;
    QuadPart = qword_140D05228 * (unsigned __int64)*a1 / (unsigned int)dword_140C2B870;
    v8 = qword_140D05228 * (unsigned __int64)*a1 % (unsigned int)dword_140C2B870;
    v9 = QuadPart;
    if ( v3 == v5 )
      v6 = qword_140D05228 * (unsigned __int64)*a1 / (unsigned int)dword_140C2B870;
  }
  v31 = dword_140D06884;
  v10 = 0LL;
  v32 = v6 == qword_140D05228;
  if ( dword_140D068E8 )
  {
    v11 = 16 * (v6 == qword_140D05228);
    do
    {
      v12 = qword_140D088C0[v10];
      v13 = (__int64)&a1[212 * (unsigned int)v10 + 64];
      if ( v12 )
      {
        v14 = KeGetCurrentPrcb();
        v35 = 0;
        while ( 1 )
        {
          v15 = *((_QWORD *)v14 + 4375);
          if ( v15 )
          {
            if ( *((_BYTE *)v14 + 32) <= 1u )
            {
              v27 = *(_DWORD *)(v15 + 24);
              *(_DWORD *)(v15 + 24) = v27 + 1;
              if ( v27 == -1 )
                sub_140418E4C(v14);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
            break;
          v18 = *((_QWORD *)v14 + 4375);
          if ( v18 )
          {
            if ( *((_BYTE *)v14 + 32) <= 1u )
            {
              v28 = *(_DWORD *)(v18 + 24) - 1;
              *(_DWORD *)(v18 + 24) = v28;
              if ( !v28 )
                sub_140418E4C(v14);
            }
          }
          do
            sub_1402F32E0(&v35);
          while ( *(_QWORD *)(v12 + 48) );
        }
        if ( !v32 && *(_BYTE *)(v12 + 33) )
        {
          v29 = v6 * v31;
          *((_QWORD *)a1 + 5) = v29;
          *((_QWORD *)a1 + 6) = v29;
        }
      }
      v2 = a2;
      LOBYTE(QuadPart) = v11 | *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v9;
      *(_QWORD *)(v13 + 16) = v6;
      *(_BYTE *)(v13 + 112) = QuadPart;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          LODWORD(QuadPart) = *((_DWORD *)a1 + 1);
          if ( (QuadPart & 2) != 0 )
          {
            sub_140208368(v13, v12);
            LOBYTE(QuadPart) = sub_140208284(v12, v13);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        v16 = KeGetCurrentPrcb();
        v8 = *((_QWORD *)v16 + 4375);
        if ( v8 )
        {
          if ( *((_BYTE *)v16 + 32) <= 1u )
          {
            LODWORD(QuadPart) = *(_DWORD *)(v8 + 24) - 1;
            *(_DWORD *)(v8 + 24) = QuadPart;
            if ( !(_DWORD)QuadPart )
              LOBYTE(QuadPart) = sub_140418E4C(v16);
          }
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < dword_140D068E8 );
  }
  if ( v2 )
  {
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    *((_QWORD *)a1 + 3) = QuadPart;
  }
  v17 = a1 + 40;
  if ( (_QWORD *)*v17 != v17 )
  {
    LOBYTE(v8) = v2;
    LOBYTE(QuadPart) = sub_14057A9BC(v17, v8);
  }
  return QuadPart;
}
