/*
 * XREFs of sub_1402E2D20 @ 0x1402E2D20
 * Callers:
 *     sub_140244E70 @ 0x140244E70 (sub_140244E70.c)
 *     sub_140256998 @ 0x140256998 (sub_140256998.c)
 *     sub_14025DC0C @ 0x14025DC0C (sub_14025DC0C.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     KeSetTimer @ 0x1402E2C40 (KeSetTimer.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_14035FC04 @ 0x14035FC04 (sub_14035FC04.c)
 *     sub_140389160 @ 0x140389160 (sub_140389160.c)
 *     sub_14038B9A0 @ 0x14038B9A0 (sub_14038B9A0.c)
 *     sub_1403A4428 @ 0x1403A4428 (sub_1403A4428.c)
 *     sub_1403BA9B4 @ 0x1403BA9B4 (sub_1403BA9B4.c)
 *     sub_1403CFC88 @ 0x1403CFC88 (sub_1403CFC88.c)
 *     sub_1403D2BFC @ 0x1403D2BFC (sub_1403D2BFC.c)
 *     sub_14053D2E4 @ 0x14053D2E4 (sub_14053D2E4.c)
 *     sub_14053DA58 @ 0x14053DA58 (sub_14053DA58.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 *     sub_14058B784 @ 0x14058B784 (sub_14058B784.c)
 *     sub_1405C614C @ 0x1405C614C (sub_1405C614C.c)
 *     sub_1405CFBF0 @ 0x1405CFBF0 (sub_1405CFBF0.c)
 *     sub_1406157E0 @ 0x1406157E0 (sub_1406157E0.c)
 *     sub_140615930 @ 0x140615930 (sub_140615930.c)
 *     sub_14069FED8 @ 0x14069FED8 (sub_14069FED8.c)
 *     sub_1406E18A0 @ 0x1406E18A0 (sub_1406E18A0.c)
 *     sub_1407D4F98 @ 0x1407D4F98 (sub_1407D4F98.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_1407F32E0 @ 0x1407F32E0 (sub_1407F32E0.c)
 *     sub_1407FFF4C @ 0x1407FFF4C (sub_1407FFF4C.c)
 *     sub_14081CFDC @ 0x14081CFDC (sub_14081CFDC.c)
 *     sub_140832270 @ 0x140832270 (sub_140832270.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_1408553A0 @ 0x1408553A0 (sub_1408553A0.c)
 *     sub_14086448C @ 0x14086448C (sub_14086448C.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 *     sub_1409194E0 @ 0x1409194E0 (sub_1409194E0.c)
 *     sub_14092BDD0 @ 0x14092BDD0 (sub_14092BDD0.c)
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 *     sub_1409A332C @ 0x1409A332C (sub_1409A332C.c)
 *     sub_1409A3B04 @ 0x1409A3B04 (sub_1409A3B04.c)
 *     sub_140A48D9C @ 0x140A48D9C (sub_140A48D9C.c)
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 *     sub_140A5B0D0 @ 0x140A5B0D0 (sub_140A5B0D0.c)
 *     sub_140A6F010 @ 0x140A6F010 (sub_140A6F010.c)
 *     sub_140A95A04 @ 0x140A95A04 (sub_140A95A04.c)
 *     sub_140A9CF88 @ 0x140A9CF88 (sub_140A9CF88.c)
 *     sub_140A9D3E0 @ 0x140A9D3E0 (sub_140A9D3E0.c)
 *     sub_140B23CDC @ 0x140B23CDC (sub_140B23CDC.c)
 * Callees:
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_1402E40E0 @ 0x1402E40E0 (sub_1402E40E0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057AAF8 @ 0x14057AAF8 (sub_14057AAF8.c)
 */

__int64 __fastcall sub_1402E2D20(unsigned __int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  char v6; // r14
  __int64 v8; // rsi
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int8 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r12
  struct _KPRCB *v16; // rdx
  volatile signed __int32 *v17; // r12
  __int64 v18; // rcx
  struct _KPRCB *v19; // r14
  char v20; // al
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // ax
  volatile signed __int32 v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r12
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct _KPRCB *v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v42; // [rsp+34h] [rbp-5Dh] BYREF
  int v43; // [rsp+38h] [rbp-59h] BYREF
  int v44; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-51h]
  int v46; // [rsp+44h] [rbp-4Dh]
  volatile signed __int32 *v47; // [rsp+48h] [rbp-49h] BYREF
  __int128 v48; // [rsp+50h] [rbp-41h]
  __int64 v49; // [rsp+60h] [rbp-31h]
  __int64 v50; // [rsp+68h] [rbp-29h]
  unsigned __int64 v51; // [rsp+70h] [rbp-21h] BYREF
  struct _KPRCB *v52; // [rsp+78h] [rbp-19h]
  __int64 v53; // [rsp+80h] [rbp-11h]
  __int64 v54; // [rsp+88h] [rbp-9h]
  _QWORD v55[2]; // [rsp+90h] [rbp-1h] BYREF

  v6 = a4;
  v46 = a3;
  v8 = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(qword_140D06E28 ^ a5), qword_140D06CC8);
  v53 = a5;
  CurrentIrql = KeGetCurrentIrql();
  v54 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v31 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v31 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v51 = 0LL;
  v11 = 0;
  v47 = 0LL;
  v42 = 0;
  while ( 1 )
  {
    v43 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        sub_1402F32E0(&v43);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v12 = *(unsigned __int8 *)(a1 + 2);
    v13 = *(unsigned __int16 *)(a1 + 56);
    v14 = (unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8;
    v45 = *(unsigned __int8 *)(a1 + 2);
    v15 = v12 + 16 + v14;
    v16 = KeGetCurrentPrcb();
    v17 = (volatile signed __int32 *)(qword_140D088C0[v13] + 15360 + 32 * v15);
    v50 = qword_140D088C0[v13] + 15360;
    v18 = *((_QWORD *)v16 + 4375);
    v52 = v16;
    v44 = 0;
    if ( v18 )
    {
      if ( *((_BYTE *)v16 + 32) <= 1u )
      {
        v36 = *(_DWORD *)(v18 + 24);
        *(_DWORD *)(v18 + 24) = v36 + 1;
        if ( v36 == -1 )
          sub_140418E4C(v16);
      }
    }
    v19 = v52;
    while ( _interlockedbittestandset64(v17, 0LL) )
    {
      v32 = *((_QWORD *)v19 + 4375);
      if ( v32 )
      {
        if ( *((_BYTE *)v19 + 32) <= 1u )
        {
          v37 = *(_DWORD *)(v32 + 24) - 1;
          *(_DWORD *)(v32 + 24) = v37;
          if ( !v37 )
            sub_140418E4C(v19);
        }
      }
      do
        sub_1402F32E0(&v44);
      while ( *(_QWORD *)v17 );
      v33 = *((_QWORD *)v19 + 4375);
      if ( v33 )
      {
        if ( *((_BYTE *)v19 + 32) <= 1u )
        {
          v38 = *(_DWORD *)(v33 + 24);
          *(_DWORD *)(v33 + 24) = v38 + 1;
          if ( v38 == -1 )
            sub_140418E4C(v19);
        }
      }
    }
    v20 = *(_BYTE *)(a1 + 3);
    v6 = a4;
    v47 = v17;
    if ( v20 >= 0 )
    {
      sub_1402E40E0(v50, a1, v45, &v47);
      _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
      v21 = KeGetCurrentPrcb();
      v22 = *((_QWORD *)v21 + 4375);
      if ( v22 )
      {
        if ( *((_BYTE *)v21 + 32) <= 1u )
        {
          v40 = *(_DWORD *)(v22 + 24) - 1;
          *(_DWORD *)(v22 + 24) = v40;
          if ( !v40 )
            sub_140418E4C(v21);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)a1, 0xBFFFFFFF);
      goto LABEL_11;
    }
    _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
    v34 = KeGetCurrentPrcb();
    v35 = *((_QWORD *)v34 + 4375);
    if ( v35 )
    {
      if ( *((_BYTE *)v34 + 32) <= 1u )
      {
        v39 = *(_DWORD *)(v35 + 24) - 1;
        *(_DWORD *)(v35 + 24) = v39;
        if ( !v39 )
          sub_140418E4C(v34);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v50 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFu);
LABEL_11:
      v11 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v42 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      sub_1402F32E0(&v42);
  }
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 && v11 )
  {
    v51 = a1;
    v55[0] = &v51;
    v55[1] = 8LL;
    sub_14035EDE4((unsigned int)v55, 1, 1073872896, 3925, 1538);
  }
  v24 = 0;
  if ( !dword_140D06A20 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32)
      || (v23 = *((_QWORD *)KeGetCurrentThread() + 23), (*(_DWORD *)(v23 + 1124) & 0x1000) == 0)
      || (*(_DWORD *)(v23 + 2172) & 0x4000000) != 0 )
    {
      v24 = 1;
    }
  }
  *(_WORD *)(a1 + 58) = v24;
  *(_DWORD *)(a1 + 60) = v46;
  v49 = 0LL;
  *(_QWORD *)(a1 + 48) = v8;
  v25 = *(_DWORD *)a1;
  v48 = 0LL;
  LODWORD(v48) = v25;
  BYTE1(v48) = v6;
  if ( a2 >= 0 )
  {
    BYTE1(v48) = v6 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v48;
      *(_QWORD *)(a1 + 24) = 0LL;
LABEL_31:
      sub_1402A7FE0((__int64)CurrentPrcb, a1, 0LL);
      goto LABEL_23;
    }
    v6 = BYTE1(v48);
  }
  v26 = 0LL;
  if ( (v6 & 0xFC) != 0 )
    v26 = (unsigned __int8)(v6 & 0xFC) << 16;
  BYTE3(v48) |= 0x40u;
  v27 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  v28 = (unsigned __int64)(v26 + v27) >> 18;
  BYTE2(v48) = v28;
  *(_DWORD *)a1 = v48;
  *(_DWORD *)(a1 + 4) = 0;
  v29 = v53;
  if ( !sub_1402B7800((__int64)CurrentPrcb, a1, v53, (unsigned __int8)v28, 0LL) )
    goto LABEL_31;
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
    sub_14057AAF8(a1, v29, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_23:
  sub_1402B0820((__int64)CurrentPrcb, 0, 1, 0, v54);
  return v11;
}
