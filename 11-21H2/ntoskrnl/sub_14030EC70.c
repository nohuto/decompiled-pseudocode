/*
 * XREFs of sub_14030EC70 @ 0x14030EC70
 * Callers:
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402B2E40 @ 0x1402B2E40 (sub_1402B2E40.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140373E1C @ 0x140373E1C (sub_140373E1C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

unsigned __int64 __fastcall sub_14030EC70(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  int v8; // r10d
  unsigned __int64 v9; // rax
  int v10; // edx
  volatile signed __int32 *v11; // rsi
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  volatile __int32 *v16; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v19; // rcx
  signed __int32 v20; // ett
  unsigned __int8 v21; // r14
  int v22; // eax
  unsigned __int64 v23; // r12
  unsigned int v24; // ecx
  unsigned int v25; // edx
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  int v29; // esi
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  __int64 v35; // r8
  int v36; // eax
  bool v37; // zf
  struct _KPRCB *v38; // rcx
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  __int64 v42; // r9
  int v43; // edx
  __int16 v44[2]; // [rsp+50h] [rbp-28h] BYREF
  int v45; // [rsp+54h] [rbp-24h] BYREF
  int v46; // [rsp+58h] [rbp-20h] BYREF
  int v47; // [rsp+5Ch] [rbp-1Ch] BYREF
  int v48; // [rsp+60h] [rbp-18h] BYREF
  int v49; // [rsp+64h] [rbp-14h] BYREF
  _QWORD v50[2]; // [rsp+68h] [rbp-10h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+40h]
  __int16 v54; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v55; // [rsp+D8h] [rbp+60h]

  v55 = a4;
  v4 = 0;
  v5 = a1;
  v6 = a3;
  v7 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v45 = 0;
  v8 = a2;
  v48 = 0;
  v9 = ((v7 << 12) | 0xFFF) + 1;
  v50[0] = 0LL;
  v47 = 0;
  v46 = 0;
  v49 = 0;
  v54 = 0;
  v44[0] = 0;
  if ( a3 > v9 || !a3 )
    v6 = v9;
  v10 = v6 - 1;
  v11 = (volatile signed __int32 *)&unk_140C53D00;
  v12 = *((_QWORD *)KeGetCurrentThread() + 23);
  v13 = *(_BYTE *)(v12 + 1848);
  v14 = v12 + 1664;
  v15 = v13 & 7;
  if ( v15 <= 4u )
  {
    if ( v15 == 2 )
    {
      v16 = (volatile __int32 *)&unk_140C53D00;
LABEL_7:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v10 = v6 - 1;
        *(_DWORD *)(a4 + 20) |= (-1LL << (CurrentIrql + 1)) & 4;
        LODWORD(a4) = v55;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_140461B20(v16, CurrentIrql);
        LODWORD(a4) = v55;
        v10 = v6 - 1;
        v8 = a2;
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v19 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v31 = *(_DWORD *)(v19 + 24);
            *(_DWORD *)(v19 + 24) = v31 + 1;
            if ( v31 == -1 )
            {
              sub_140418E4C(CurrentPrcb);
              LODWORD(a4) = v55;
              v10 = v6 - 1;
              v8 = a2;
            }
          }
        }
        _m_prefetchw((const void *)v16);
        v20 = *v16 & 0x7FFFFFFF;
        if ( v20 != _InterlockedCompareExchange(v16, v20 + 1, v20) )
        {
          v30 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v30 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v32 = *(_DWORD *)(v30 + 24) - 1;
              *(_DWORD *)(v30 + 24) = v32;
              if ( !v32 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140366A20(v16, CurrentIrql);
          LODWORD(a4) = v55;
          v10 = v6 - 1;
          v8 = a2;
        }
        v5 = a1;
      }
      if ( *((_DWORD *)v16 + 1) )
        _InterlockedExchange(v16 + 1, 0);
      v21 = CurrentIrql;
      goto LABEL_15;
    }
LABEL_6:
    v16 = (volatile __int32 *)(v14 + 192);
    goto LABEL_7;
  }
  if ( v15 == 5 )
    goto LABEL_6;
  v21 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v21 <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v10 = v6 - 1;
    *(_DWORD *)(a4 + 20) |= (-1LL << (v21 + 1)) & 4;
    LODWORD(a4) = v55;
  }
LABEL_15:
  *(_DWORD *)(v5 + 32) = sub_140318330(
                           v8,
                           v10,
                           v21,
                           a4,
                           0LL,
                           (__int64)&v45,
                           (__int64)&v46,
                           (__int64)&v54,
                           (__int64)v50,
                           (__int64)&v47);
  if ( v45 )
    v22 = v46 | dword_140016150[v45];
  else
    v22 = 0;
  *(_DWORD *)(v5 + 36) = v22;
  v23 = v50[0];
  *(_WORD *)(v5 + 20) = v54;
  if ( v23 < v6 )
  {
    v29 = v55;
    do
    {
      if ( (unsigned int)sub_140318330(
                           v23,
                           (int)v6 - 1,
                           v21,
                           v29,
                           v5,
                           (__int64)&v48,
                           (__int64)&v49,
                           (__int64)v44,
                           (__int64)v50,
                           (__int64)&v47) != *(_DWORD *)(v5 + 32)
        || v48 != v45
        || v44[0] != v54
        || v49 != v46 )
      {
        break;
      }
      v23 = v50[0];
      if ( (++v4 & 0x1F) == 0 && (unsigned int)sub_1403531F0(v14) || KeShouldYieldProcessor() )
      {
        sub_1402B0CE0(v14, v21);
        sub_1402CF4F0(v14);
      }
    }
    while ( v23 < v6 );
    v11 = (volatile signed __int32 *)&unk_140C53D00;
  }
  v24 = *(_DWORD *)(v14 + 184);
  v25 = HIBYTE(v24);
  if ( (v24 & 7) <= 4 || (LOBYTE(v25) = HIBYTE(v24), (v24 & 7) == 5) )
  {
    if ( (*(_DWORD *)(v14 + 188) & 3) != 0 || (v25 & 0x10) != 0 )
    {
      sub_140373E1C(v14, v21);
      LOBYTE(v24) = *(_BYTE *)(v14 + 184);
    }
    if ( (v24 & 7) != 2 )
      v11 = (volatile signed __int32 *)(v14 + 192);
    sub_1402B2E40(v14, 1u);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14063D8E0(v11, retaddr);
    }
    else
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
    }
    v26 = KeGetCurrentPrcb();
    v27 = *((_QWORD *)v26 + 4375);
    if ( v27 )
    {
      if ( *((_BYTE *)v26 + 32) <= 1u )
      {
        v39 = *(_DWORD *)(v27 + 24) - 1;
        *(_DWORD *)(v27 + 24) = v39;
        if ( !v39 )
          sub_140418E4C(v26);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && v21 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = *((_QWORD *)v41 + 4375);
          v43 = ~(unsigned __int16)(-1LL << (v21 + 1));
          v37 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
          *(_DWORD *)(v42 + 20) &= v43;
          if ( v37 )
          {
            v38 = v41;
            goto LABEL_78;
          }
        }
      }
    }
  }
  else if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v33 = KeGetCurrentIrql();
      if ( v33 <= 0xFu && v21 <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = *((_QWORD *)v34 + 4375);
        v36 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v37 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
        *(_DWORD *)(v35 + 20) &= v36;
        if ( v37 )
        {
          v38 = v34;
LABEL_78:
          sub_140418E4C(v38);
        }
      }
    }
  }
  __writecr8(v21);
  return v23;
}
