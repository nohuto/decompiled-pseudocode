/*
 * XREFs of sub_1402E40E0 @ 0x1402E40E0
 * Callers:
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_1403954A0 @ 0x1403954A0 (sub_1403954A0.c)
 *     sub_1403AD6AC @ 0x1403AD6AC (sub_1403AD6AC.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402E40E0(__int64 a1, __int64 a2, unsigned int a3, volatile signed __int64 **a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // r14
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // edx
  volatile signed __int32 *v19; // rcx
  struct _KPRCB *v20; // rcx
  __int64 v21; // rdx
  struct _KPRCB *v22; // rcx
  __int64 v23; // rdx
  struct _KPRCB *v24; // r15
  __int64 v25; // rcx
  struct _KPRCB *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  volatile signed __int32 *v48; // [rsp+20h] [rbp-48h]
  int v49; // [rsp+70h] [rbp+8h] BYREF
  int v50; // [rsp+78h] [rbp+10h] BYREF
  int v51; // [rsp+80h] [rbp+18h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 58);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = a2 + 32;
  v8 = a3;
  v10 = a3;
  v11 = 32 * (((unsigned __int64)v4 << 8) + a3 + 16LL);
  result = *(_QWORD *)(v7 + 8);
  v13 = 32 * (((v4 ^ 1LL) << 8) + a3 + 16LL);
  if ( *(_QWORD *)(v6 + 8) != v7 || *(_QWORD *)result != v7 )
    __fastfail(3u);
  *(_QWORD *)result = v6;
  *(_QWORD *)(v6 + 8) = result;
  if ( result == v6 )
  {
    *(_DWORD *)(v11 + a1 + 28) = -1;
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = *((_QWORD *)CurrentPrcb + 4375);
    if ( !(_WORD)v4 )
    {
      v51 = 0;
      v16 = (volatile signed __int32 *)(a1 + 32 * (a3 + 272LL));
      if ( v15 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v33 = *(_DWORD *)(v15 + 24);
          v34 = v33 == -1;
          result = (unsigned int)(v33 + 1);
          *(_DWORD *)(v15 + 24) = result;
          if ( v34 )
LABEL_36:
            result = sub_140418E4C(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64(v16, 0LL) )
      {
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v28 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v35 = *(_DWORD *)(v28 + 24) - 1;
            *(_DWORD *)(v28 + 24) = v35;
            if ( !v35 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
        {
          sub_1402F32E0(&v51);
          result = *(_QWORD *)v16;
        }
        while ( *(_QWORD *)v16 );
        v29 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v29 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v36 = *(_DWORD *)(v29 + 24);
            v34 = v36 == -1;
            result = (unsigned int)(v36 + 1);
            *(_DWORD *)(v29 + 24) = result;
            if ( v34 )
              goto LABEL_36;
          }
        }
      }
      goto LABEL_7;
    }
    v16 = (volatile signed __int32 *)(a1 + 32 * (a3 + 16LL));
    if ( v15 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v37 = *(_DWORD *)(v15 + 24);
        v34 = v37 == -1;
        result = (unsigned int)(v37 + 1);
        *(_DWORD *)(v15 + 24) = result;
        if ( v34 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v16, 0LL) )
    {
      v30 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v30 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v38 = *(_DWORD *)(v30 + 24) - 1;
          *(_DWORD *)(v30 + 24) = v38;
          if ( !v38 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      _mm_pause();
    }
    else if ( v16 )
    {
LABEL_7:
      if ( *(_DWORD *)(v11 + a1 + 28) == -1 && *(_DWORD *)(v13 + a1 + 28) == -1 )
      {
        v17 = qword_140D07E98[2 * *(unsigned __int8 *)(a1 - 15152)];
        if ( dword_140D05038 )
        {
          v18 = v8 & 0x3F;
          v19 = (volatile signed __int32 *)(v17 + 8LL * ((unsigned int)v8 >> 6));
        }
        else
        {
          v18 = *(unsigned __int8 *)(a1 - 15151);
          v19 = (volatile signed __int32 *)((v10 << 6) + v17);
        }
        result = v18;
        _interlockedbittestandreset64(v19, v18);
      }
      _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
      v20 = KeGetCurrentPrcb();
      v21 = *((_QWORD *)v20 + 4375);
      if ( v21 && *((_BYTE *)v20 + 32) <= 1u )
      {
        result = (unsigned int)(*(_DWORD *)(v21 + 24) - 1);
        *(_DWORD *)(v21 + 24) = result;
        if ( !(_DWORD)result )
          return sub_140418E4C(v20);
      }
      return result;
    }
    _InterlockedAnd64(*a4, 0LL);
    v22 = KeGetCurrentPrcb();
    v23 = *((_QWORD *)v22 + 4375);
    if ( v23 )
    {
      if ( *((_BYTE *)v22 + 32) <= 1u )
      {
        v39 = *(_DWORD *)(v23 + 24) - 1;
        *(_DWORD *)(v23 + 24) = v39;
        if ( !v39 )
          sub_140418E4C(v22);
      }
    }
    v24 = KeGetCurrentPrcb();
    v49 = 0;
    v25 = *((_QWORD *)v24 + 4375);
    if ( v25 )
    {
      if ( *((_BYTE *)v24 + 32) <= 1u )
      {
        v40 = *(_DWORD *)(v25 + 24);
        *(_DWORD *)(v25 + 24) = v40 + 1;
        if ( v40 == -1 )
LABEL_54:
          sub_140418E4C(v24);
      }
    }
    while ( _interlockedbittestandset64(v16, 0LL) )
    {
      v31 = *((_QWORD *)v24 + 4375);
      if ( v31 )
      {
        if ( *((_BYTE *)v24 + 32) <= 1u )
        {
          v41 = *(_DWORD *)(v31 + 24) - 1;
          *(_DWORD *)(v31 + 24) = v41;
          if ( !v41 )
            sub_140418E4C(v24);
        }
      }
      do
        sub_1402F32E0(&v49);
      while ( *(_QWORD *)v16 );
      v32 = *((_QWORD *)v24 + 4375);
      if ( v32 )
      {
        if ( *((_BYTE *)v24 + 32) <= 1u )
        {
          v42 = *(_DWORD *)(v32 + 24);
          *(_DWORD *)(v32 + 24) = v42 + 1;
          if ( v42 == -1 )
            goto LABEL_54;
        }
      }
    }
    v26 = KeGetCurrentPrcb();
    result = a1 + 32 * (v8 + 272);
    v50 = 0;
    v48 = (volatile signed __int32 *)result;
    v27 = *((_QWORD *)v26 + 4375);
    if ( v27 )
    {
      if ( *((_BYTE *)v26 + 32) <= 1u )
      {
        v43 = *(_DWORD *)(v27 + 24);
        v34 = v43 == -1;
        result = (unsigned int)(v43 + 1);
        *(_DWORD *)(v27 + 24) = result;
        if ( v34 )
LABEL_72:
          result = sub_140418E4C(v26);
      }
    }
    while ( _interlockedbittestandset64(v48, 0LL) )
    {
      v44 = *((_QWORD *)v26 + 4375);
      if ( v44 )
      {
        if ( *((_BYTE *)v26 + 32) <= 1u )
        {
          v45 = *(_DWORD *)(v44 + 24) - 1;
          *(_DWORD *)(v44 + 24) = v45;
          if ( !v45 )
            sub_140418E4C(v26);
        }
      }
      do
      {
        sub_1402F32E0(&v50);
        result = *(_QWORD *)v48;
      }
      while ( *(_QWORD *)v48 );
      v46 = *((_QWORD *)v26 + 4375);
      if ( v46 )
      {
        if ( *((_BYTE *)v26 + 32) <= 1u )
        {
          v47 = *(_DWORD *)(v46 + 24);
          v34 = v47 == -1;
          result = (unsigned int)(v47 + 1);
          *(_DWORD *)(v46 + 24) = result;
          if ( v34 )
            goto LABEL_72;
        }
      }
    }
    *a4 = (volatile signed __int64 *)v48;
    v16 = (volatile signed __int32 *)(a1 + 32 * (v8 + 16));
    goto LABEL_7;
  }
  return result;
}
