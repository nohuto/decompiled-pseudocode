/*
 * XREFs of sub_1402B7800 @ 0x1402B7800
 * Callers:
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 *     sub_1403AD6AC @ 0x1403AD6AC (sub_1403AD6AC.c)
 * Callees:
 *     sub_1402E40E0 @ 0x1402E40E0 (sub_1402E40E0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_BOOL8 __fastcall sub_1402B7800(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r12
  unsigned int v9; // edx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  _QWORD *v17; // rsi
  struct _KPRCB *v18; // r15
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r10
  __int64 v23; // rcx
  unsigned int v24; // edx
  volatile signed __int32 *v25; // rcx
  char v26; // r11
  struct _KPRCB *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v30; // r9
  int v31; // eax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  char v36; // cl
  unsigned __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  signed __int32 v42[8]; // [rsp+0h] [rbp-78h] BYREF
  int v43; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v44; // [rsp+28h] [rbp-50h] BYREF
  __int64 v45; // [rsp+30h] [rbp-48h]
  struct _KPRCB *v46; // [rsp+38h] [rbp-40h]
  char v47; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = a4;
  v44 = 0LL;
  v47 = 0;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = 0;
  if ( !dword_140D05038 )
  {
    if ( a3 && (v31 = *(unsigned __int16 *)(a3 + 2), (unsigned __int16)v31 >= 0x800u) )
    {
      v9 = v31 - 2048;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v35 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL);
        if ( v35 )
        {
          v36 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v37, __ROR8__(v35, v36));
          v9 = dword_140D105E0[64 * *(unsigned __int8 *)(a1 + 208) + (((unsigned __int8)v37 + v36) & 0x3F)];
        }
      }
    }
  }
  v10 = *(_QWORD *)(a2 + 24);
  v11 = v9;
  *(_WORD *)(a2 + 56) = v9;
  CurrentPrcb = KeGetCurrentPrcb();
  v46 = CurrentPrcb;
  v13 = qword_140D088C0[v11] + 15360;
  v14 = *((_QWORD *)CurrentPrcb + 4375);
  v15 = (unsigned __int64)*(unsigned __int16 *)(a2 + 58) << 8;
  v45 = v13;
  v16 = v13 + 32 * (v15 + a4 + 16LL);
  v43 = 0;
  v17 = (_QWORD *)(v16 + 8);
  if ( v14 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v38 = *(_DWORD *)(v14 + 24);
      *(_DWORD *)(v14 + 24) = v38 + 1;
      if ( v38 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  v18 = v46;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
  {
    v33 = *((_QWORD *)v18 + 4375);
    if ( v33 )
    {
      if ( *((_BYTE *)v18 + 32) <= 1u )
      {
        v39 = *(_DWORD *)(v33 + 24) - 1;
        *(_DWORD *)(v33 + 24) = v39;
        if ( !v39 )
          sub_140418E4C(v18);
      }
    }
    do
      sub_1402F32E0(&v43);
    while ( *(_QWORD *)v16 );
    v34 = *((_QWORD *)v18 + 4375);
    if ( v34 )
    {
      if ( *((_BYTE *)v18 + 32) <= 1u )
      {
        v40 = *(_DWORD *)(v34 + 24);
        *(_DWORD *)(v34 + 24) = v40 + 1;
        if ( v40 == -1 )
          sub_140418E4C(v18);
      }
    }
  }
  v19 = *(_QWORD **)(v16 + 8);
  v44 = (volatile signed __int64 *)v16;
  if ( v19 == (_QWORD *)(v16 + 8) )
  {
    v5 = 6;
  }
  else
  {
    v20 = *(v19 - 1);
    if ( v10 > v20 )
    {
      v30 = (_QWORD *)(v16 + 16);
      if ( v10 - v20 <= (unsigned __int64)DesiredTime >> 2 )
      {
        v17 = v19;
        if ( v19 != (_QWORD *)*v30 )
        {
          do
          {
            v32 = (_QWORD *)*v17;
            if ( v10 <= *(_QWORD *)(*v17 - 8LL) )
              break;
            v17 = (_QWORD *)*v17;
          }
          while ( v32 != (_QWORD *)*v30 );
        }
      }
      else
      {
        v17 = (_QWORD *)*v30;
        do
        {
          if ( v10 >= *(v17 - 1) )
            break;
          v17 = (_QWORD *)v17[1];
        }
        while ( v17 != (_QWORD *)(v16 + 8) );
      }
    }
    else
    {
      v5 = v10 < v20 ? 2 : 0;
    }
    v19 = (_QWORD *)*v17;
  }
  v21 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v19[1] != v17 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v17;
  *v21 = v19;
  v19[1] = v21;
  *v17 = v21;
  if ( (v5 & 2) != 0 )
  {
    *(_QWORD *)(v16 + 24) = v10;
    _InterlockedOr(v42, 0);
    v22 = v45;
    if ( v5 >= 4 )
    {
      v23 = qword_140D07E98[2 * *(unsigned __int8 *)(v45 - 15152)];
      if ( dword_140D05038 )
      {
        v24 = v6 & 0x3F;
        v25 = (volatile signed __int32 *)(v23 + 8LL * ((unsigned int)v6 >> 6));
      }
      else
      {
        v24 = *(unsigned __int8 *)(v45 - 15151);
        v25 = (volatile signed __int32 *)((v6 << 6) + v23);
      }
      _interlockedbittestandset64(v25, v24);
    }
    if ( v10 <= MEMORY[0xFFFFF78000000008] )
    {
      if ( a5 )
      {
        v26 = 1;
        v47 = 1;
        goto LABEL_19;
      }
      LOBYTE(v5) = 1;
      sub_1402E40E0(v22, a2, (unsigned int)v6, &v44);
    }
  }
  v26 = 0;
LABEL_19:
  _InterlockedAnd64(v44, 0LL);
  v27 = KeGetCurrentPrcb();
  v28 = *((_QWORD *)v27 + 4375);
  if ( v28 )
  {
    if ( *((_BYTE *)v27 + 32) <= 1u )
    {
      v41 = *(_DWORD *)(v28 + 24) - 1;
      *(_DWORD *)(v28 + 24) = v41;
      if ( !v41 )
      {
        sub_140418E4C(v27);
        v26 = v47;
      }
    }
  }
  if ( a5 )
    *a5 = v26;
  return (v5 & 1) == 0;
}
