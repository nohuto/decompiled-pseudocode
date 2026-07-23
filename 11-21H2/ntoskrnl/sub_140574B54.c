/*
 * XREFs of sub_140574B54 @ 0x140574B54
 * Callers:
 *     sub_140574A7C @ 0x140574A7C (sub_140574A7C.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140574B54(unsigned __int64 a1, _QWORD *a2, int *a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // r15
  char v6; // r12
  __int64 v8; // rsi
  int *v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KPRCB *v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  struct _KPRCB *v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r14
  unsigned int v38; // eax
  __int64 v39; // rdi
  char v40; // al
  int v41; // edx
  __int64 v42; // rdx
  struct _KPRCB *v43; // rcx
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  int v49; // [rsp+20h] [rbp-28h]
  int v50; // [rsp+24h] [rbp-24h]
  int v51; // [rsp+28h] [rbp-20h] BYREF
  int v52; // [rsp+2Ch] [rbp-1Ch] BYREF
  __int64 v53; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v54; // [rsp+38h] [rbp-10h] BYREF
  unsigned __int64 v55; // [rsp+90h] [rbp+48h]
  int v56; // [rsp+98h] [rbp+50h]

  v4 = 0;
  v54 = 0LL;
  v5 = 0LL;
  v56 = -1;
  v6 = 0;
  v50 = 0;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  if ( a1 )
  {
    v11 = 0x140000000uLL;
    v12 = 1LL;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v51 = 0;
      _BitScanForward64(&v14, v10);
      v15 = v10 ^ (1LL << v14);
      v16 = (unsigned int)v14 + (*(unsigned __int8 *)(v8 + 208) << 6);
      v55 = v15;
      v17 = *((_QWORD *)CurrentPrcb + 4375);
      v49 = dword_140D105E0[v16];
      v18 = qword_140D088C0[v49];
      v53 = v18;
      if ( v17 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v19 = *(_DWORD *)(v17 + 24);
          *(_DWORD *)(v17 + 24) = v19 + 1;
          if ( v19 == -1 )
LABEL_6:
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 48), 0LL) )
      {
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v21 = *(_DWORD *)(v20 + 24) - 1;
            *(_DWORD *)(v20 + 24) = v21;
            if ( !v21 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v51, v15, v12, v11);
        while ( *(_QWORD *)(v18 + 48) );
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v22 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v23 = *(_DWORD *)(v22 + 24);
            *(_DWORD *)(v22 + 24) = v23 + 1;
            if ( v23 == -1 )
              goto LABEL_6;
          }
        }
      }
      v8 = a4;
      v24 = *(_QWORD *)(v18 + 8);
      if ( (*(_BYTE *)(v18 + 35) & 1) != 0 && !*(_QWORD *)(v18 + 16) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
      v43 = KeGetCurrentPrcb();
      v46 = *((_QWORD *)v43 + 4375);
      if ( v46 )
      {
        v12 = 1LL;
        if ( *((_BYTE *)v43 + 32) > 1u )
          goto LABEL_73;
        v47 = *(_DWORD *)(v46 + 24) - 1;
        *(_DWORD *)(v46 + 24) = v47;
        if ( v47 )
          goto LABEL_73;
        goto LABEL_71;
      }
LABEL_72:
      v12 = 1LL;
LABEL_73:
      v10 = v55;
      v11 = 0x140000000uLL;
      if ( !v55 )
      {
        v9 = a3;
        v4 = v50;
        goto LABEL_75;
      }
    }
    if ( *(_BYTE *)(v18 + 13241) )
      goto LABEL_64;
    v25 = *(_DWORD *)(v24 + 80);
    if ( v25 <= *(_DWORD *)(v24 + 84) )
      v25 = *(_DWORD *)(v24 + 84);
    if ( v25 < dword_140D05308 || !sub_140308640(*(_QWORD *)(v18 + 8), v18, 0) )
      goto LABEL_64;
    if ( a2 )
    {
      if ( (*(_DWORD *)(v24 + 120) & 0x1000) == 0 )
      {
        v5 |= 1LL << v49;
        if ( v56 == -1 || *(char *)(v24 + 195) > v56 )
        {
          v6 = 1;
          v56 = *(char *)(v24 + 195);
          v50 = v49;
        }
      }
LABEL_64:
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
      v43 = KeGetCurrentPrcb();
      v44 = *((_QWORD *)v43 + 4375);
      if ( !v44 )
        goto LABEL_72;
      if ( *((_BYTE *)v43 + 32) > 1u )
        goto LABEL_72;
      v45 = *(_DWORD *)(v44 + 24) - 1;
      *(_DWORD *)(v44 + 24) = v45;
      if ( v45 )
        goto LABEL_72;
LABEL_71:
      sub_140418E4C((__int64)v43);
      goto LABEL_72;
    }
    _InterlockedAdd16((volatile signed __int16 *)(v24 + 868), 1u);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 48), 0LL);
    v28 = KeGetCurrentPrcb();
    v29 = *((_QWORD *)v28 + 4375);
    if ( v29 )
    {
      if ( *((_BYTE *)v28 + 32) <= 1u )
      {
        v30 = *(_DWORD *)(v29 + 24) - 1;
        *(_DWORD *)(v29 + 24) = v30;
        if ( !v30 )
          sub_140418E4C((__int64)v28);
      }
    }
    v31 = KeGetCurrentPrcb();
    v52 = 0;
    while ( 1 )
    {
      v32 = *((_QWORD *)v31 + 4375);
      if ( v32 )
      {
        if ( *((_BYTE *)v31 + 32) <= 1u )
        {
          v33 = *(_DWORD *)(v32 + 24);
          *(_DWORD *)(v32 + 24) = v33 + 1;
          if ( v33 == -1 )
            sub_140418E4C((__int64)v31);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v24 + 64), 0LL) )
        break;
      v34 = *((_QWORD *)v31 + 4375);
      if ( v34 )
      {
        if ( *((_BYTE *)v31 + 32) <= 1u )
        {
          v35 = *(_DWORD *)(v34 + 24) - 1;
          *(_DWORD *)(v34 + 24) = v35;
          if ( !v35 )
            sub_140418E4C((__int64)v31);
        }
      }
      do
        sub_1402F32E0(&v52, v29, v26, v27);
      while ( *(_QWORD *)(v24 + 64) );
    }
    sub_140344DD0(v24, (__int64)&v53, (volatile signed __int32 **)&v54, v27);
    _InterlockedAdd16((volatile signed __int16 *)(v24 + 868), 0xFFFFu);
    if ( *(_BYTE *)(v24 + 388) != 2 )
      goto LABEL_58;
    v37 = v53;
    if ( *(_BYTE *)(v53 + 13241) )
      goto LABEL_58;
    v36 = *(unsigned int *)(v24 + 80);
    v38 = *(_DWORD *)(v24 + 84);
    if ( (unsigned int)v36 <= v38 )
      v36 = v38;
    if ( (unsigned int)v36 < dword_140D05308 )
      goto LABEL_58;
    v39 = v53;
    if ( !sub_140308640(v24, v53, 0) )
    {
LABEL_59:
      sub_14035D0F8(v36, v39, v54);
      sub_140224100(v24);
      goto LABEL_72;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(v24 + 120), 0xCu) )
    {
LABEL_58:
      v39 = v53;
      goto LABEL_59;
    }
    v39 = v53;
    *(_BYTE *)(v37 + 13241) = 1;
    v40 = *(_BYTE *)(a4 + 12761);
    if ( !v40 )
    {
      *(_BYTE *)(a4 + 12761) = 1;
      *(_DWORD *)(a4 + 12764) = *(_DWORD *)(v39 + 36);
LABEL_57:
      v6 = 1;
      goto LABEL_59;
    }
    if ( v40 == 1 )
    {
      v41 = *(_DWORD *)(a4 + 12764);
      if ( v41 == *(_DWORD *)(v39 + 36) )
        goto LABEL_57;
      *(_BYTE *)(a4 + 12761) = 2;
      KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 12768), v41);
    }
    v36 = *(unsigned __int8 *)(v39 + 208);
    v42 = *(_QWORD *)(v39 + 200);
    if ( *(_WORD *)(a4 + 12768) <= (unsigned __int16)v36 )
    {
      if ( *(_WORD *)(a4 + 12770) <= (unsigned __int16)v36 )
        goto LABEL_57;
      *(_WORD *)(a4 + 12768) = v36 + 1;
    }
    *(_QWORD *)(a4 + 8 * v36 + 12776) |= v42;
    goto LABEL_57;
  }
LABEL_75:
  sub_140340300((unsigned __int8 *)(v8 + 12760));
  if ( a2 )
    *a2 = v5;
  if ( v9 )
    *v9 = v4;
  return v6;
}
