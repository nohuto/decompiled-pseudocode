/*
 * XREFs of sub_1405803C8 @ 0x1405803C8
 * Callers:
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232E74 @ 0x140232E74 (sub_140232E74.c)
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     sub_14028D2D8 @ 0x14028D2D8 (sub_14028D2D8.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033C4D0 @ 0x14033C4D0 (sub_14033C4D0.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_140394B24 @ 0x140394B24 (sub_140394B24.c)
 *     sub_140394BE8 @ 0x140394BE8 (sub_140394BE8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045D5EA @ 0x14045D5EA (sub_14045D5EA.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_14059A410 @ 0x14059A410 (sub_14059A410.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

unsigned __int64 __fastcall sub_1405803C8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // r13
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  char v17; // al
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  signed __int32 v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbx
  int v34; // r14d
  bool v35; // zf
  __int64 *v36; // r14
  __int16 v37; // r13
  int v38; // edi
  __int64 v39; // rdx
  __int16 v40; // ax
  __int64 v41; // r14
  int v42; // r9d
  __int16 v43; // bx
  unsigned int v44; // eax
  char v45; // bl
  __int64 v46; // r13
  int v47; // eax
  int v48; // eax
  unsigned __int8 v49; // al
  unsigned __int8 v50; // bl
  struct _KPRCB *v51; // r10
  __int64 v52; // r9
  int v53; // eax
  NTSTATUS v54; // edi
  char v55; // al
  unsigned __int64 v56; // rbx
  unsigned __int8 v57; // al
  unsigned __int8 v58; // di
  struct _KPRCB *v59; // r9
  __int64 v60; // r8
  int v61; // eax
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rbx
  int v64; // esi
  bool v65; // zf
  _WORD v67[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v68; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h]
  __int64 v70; // [rsp+58h] [rbp-B0h]
  __int64 v71; // [rsp+60h] [rbp-A8h]
  __int128 v72; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v73; // [rsp+78h] [rbp-90h]
  _QWORD *v74; // [rsp+80h] [rbp-88h]
  _BYTE BugCheckParameter2[448]; // [rsp+88h] [rbp-80h] BYREF

  v68 = 0;
  LOBYTE(v67[0]) = 0;
  v72 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = *(unsigned __int16 *)(a1 + 1838);
  v7 = (_QWORD *)(a1 + 1432);
  v74 = (_QWORD *)(a1 + 1432);
  v70 = *(_QWORD *)(qword_140C51F48 + 8 * v6);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v10 = sub_140315D60((ULONG_PTR)v7, v67, 0);
    v11 = sub_140317A10((unsigned __int64)v7);
    if ( (v11 & 0x800) == 0 )
      break;
    LOBYTE(v67[0]) = CurrentIrql;
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(v10 + 34) & 7) == 6 )
    {
      v18 = *(_QWORD *)(v10 + 24) ^ ((*(_QWORD *)(v10 + 24) + 1LL) ^ *(_QWORD *)(v10 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_19:
      *(_QWORD *)(v10 + 24) = v18;
      v19 = sub_14033C2A0(v10);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v35 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v35 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v19 )
        sub_1402E20D0(v70, v19, 0);
      goto LABEL_93;
    }
    if ( (sub_140326870(v10, 0) & 3) == 0 )
    {
      v17 = *(_BYTE *)(v10 + 34);
      ++*(_WORD *)(v10 + 32);
      *(_BYTE *)(v10 + 34) = v17 & 0xF8 | 6;
      v18 = *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_19;
    }
    sub_1403941B0(v10, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v35 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v35 )
            sub_140418E4C((__int64)v14);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v35 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v27;
        if ( v35 )
          sub_140418E4C((__int64)v25);
      }
    }
  }
  __writecr8(CurrentIrql);
  sub_140339C20(0LL, a5, (__int64)&v72);
  v28 = _InterlockedExchangeAdd((volatile signed __int32 *)v72, 1u);
  v29 = v70;
  v30 = DWORD2(v72) & v28 | HIDWORD(v72);
  while ( 1 )
  {
    v31 = sub_1403250B0(v29, v30, 0x200u);
    v12 = v31;
    if ( v31 != -1 )
      break;
    sub_1405B8348(v29);
  }
  v32 = 48 * v31 - 0x220000000000LL;
  v33 = sub_1402E4D28(v31, (v11 >> 5) & 0x1F);
  v34 = 0;
  if ( sub_140317A80((unsigned __int64)v7) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v34 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v35 = (v33 & 1) == 0;
        goto LABEL_44;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v35 = (v33 & 1) == 0;
LABEL_44:
      if ( !v35 )
        v33 |= 0x8000000000000000uLL;
    }
  }
  *v7 = v33;
  if ( v34 )
    sub_1402294F0((__int64)v7, v33);
  sub_14027CCE4(v12, 0xFFFFF6FB7DBEDF68uLL, v12, 2560);
  v36 = (__int64 *)(v32 + 16);
  *(_QWORD *)(v32 + 16) = v11;
  v73 = 0xFFFFF6FB7DBED000uLL;
  v37 = 56;
  v38 = 0;
  LOWORD(v69) = 56;
  v71 = 0LL;
  while ( 1 )
  {
    sub_14033C4D0((__int64)BugCheckParameter2, 0);
    v39 = *v36;
    *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
    v40 = sub_140232E74(v70, v39);
    v41 = (unsigned __int8)HIBYTE(*(_WORD *)v36) >> 4;
    v43 = v42 ^ (v42 ^ (v40 << 8)) & 0x100;
    *(_DWORD *)&BugCheckParameter2[192] = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)(v40 << 8)) & 0x100;
    v44 = sub_1402E76C0(v32 + 16);
    *(_QWORD *)&BugCheckParameter2[96] = (v43 & 0x100) != 0
                                       ? v44 | ((unsigned __int64)(unsigned int)v41 << 60)
                                       : (unsigned __int64)v44 << 12;
    sub_14036C868(v32, 0xFFFF800000000030uLL, 0);
    v45 = 0;
    *(_QWORD *)&BugCheckParameter2[304] = v73;
    *(_WORD *)&BugCheckParameter2[282] = 16386;
    *(_QWORD *)&BugCheckParameter2[272] = 0LL;
    *(_WORD *)&BugCheckParameter2[280] = v37;
    *(_DWORD *)&BugCheckParameter2[316] = v38;
    *(_DWORD *)&BugCheckParameter2[312] = 4096;
    *(_DWORD *)&BugCheckParameter2[184] = 4096;
    *(_QWORD *)&BugCheckParameter2[320] = v12;
    v46 = *(_QWORD *)(v70 + 8 * v41 + 16736);
    if ( _bittest16((const signed __int16 *)(v46 + 204), 0xBu) )
    {
      sub_14059A410(*(_QWORD *)(v70 + 8 * v41 + 16736), BugCheckParameter2);
    }
    else
    {
      if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = 0;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        v47 = sub_140394BE8(&BugCheckParameter2[96], (unsigned __int64)&BugCheckParameter2[272]);
      }
      else
      {
        v47 = sub_140342C50(
                *(PFILE_OBJECT *)(v46 + 56),
                (__int64)&BugCheckParameter2[272],
                &BugCheckParameter2[96],
                (__int64)&BugCheckParameter2[32],
                (__int64)&BugCheckParameter2[80],
                0,
                0LL);
      }
      if ( v47 < 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = v47;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        KeSetEvent((PRKEVENT)&BugCheckParameter2[32], 0, 0);
      }
    }
    KeWaitForSingleObject(&BugCheckParameter2[32], WrPageIn, 0, 0, 0LL);
    v48 = *(_DWORD *)&BugCheckParameter2[192];
    v68 = 0;
    if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
    {
      sub_140394B24((ULONG_PTR)BugCheckParameter2, &v68);
      LOBYTE(v67[0]) = sub_1402F2700(v32);
      if ( HIWORD(v68) )
        v68 = (unsigned __int16)v68 | ((HIWORD(v68) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v49 = KeGetCurrentIrql(), v49 <= 0xFu) )
      {
        v50 = v67[0];
        if ( LOBYTE(v67[0]) <= 0xFu && v49 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = *((_QWORD *)v51 + 4375);
          v50 = v67[0];
          v53 = ~(unsigned __int16)(-1LL << (LOBYTE(v67[0]) + 1));
          v35 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
          *(_DWORD *)(v52 + 20) &= v53;
          if ( v35 )
            sub_140418E4C((__int64)v51);
        }
      }
      else
      {
        v50 = v67[0];
      }
      __writecr8(v50);
      v45 = v68;
      v48 = *(_DWORD *)&BugCheckParameter2[192];
    }
    v54 = *(_DWORD *)&BugCheckParameter2[80];
    if ( *(int *)&BugCheckParameter2[80] >= 0 && *(_QWORD *)(v46 + 216) )
    {
      *(_DWORD *)&BugCheckParameter2[192] = v48 | 0x400000;
      v54 = sub_14045D5EA(BugCheckParameter2);
    }
    if ( (BugCheckParameter2[282] & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)&BugCheckParameter2[296], (PMDL)&BugCheckParameter2[272]);
    sub_14036C868(v32, 0LL, 0);
    if ( v54 >= 0 )
      break;
    if ( !sub_14028D2D8(v54, 0x1000uLL) )
    {
      sub_14058DCA8(1LL);
      KeBugCheckEx(0x77u, v54, v54, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
    }
    if ( (v45 & 1) != 0 )
    {
      v38 = v71;
      v36 = (__int64 *)(v32 + 16);
      v37 = v69;
      if ( (v45 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14003BE60);
    v38 = v71;
    v36 = (__int64 *)(v32 + 16);
    v37 = v69;
  }
  if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
  {
    sub_14058DCA8(1LL);
    KeBugCheckEx(0x77u, 2uLL, v54, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
  }
  v55 = sub_1402F2700(v32);
  v56 = *(_QWORD *)(v32 + 16);
  LOBYTE(v67[0]) = v55;
  *(_QWORD *)(v32 + 16) = sub_1402CCC50(128LL);
  *(_BYTE *)(v32 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v57 = KeGetCurrentIrql(), v57 <= 0xFu) )
  {
    v58 = v67[0];
    if ( LOBYTE(v67[0]) <= 0xFu && v57 >= 2u )
    {
      v59 = KeGetCurrentPrcb();
      v60 = *((_QWORD *)v59 + 4375);
      v58 = v67[0];
      v61 = ~(unsigned __int16)(-1LL << (LOBYTE(v67[0]) + 1));
      v35 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
      *(_DWORD *)(v60 + 20) &= v61;
      if ( v35 )
        sub_140418E4C((__int64)v59);
    }
  }
  else
  {
    v58 = v67[0];
  }
  __writecr8(v58);
  sub_1402E20D0(v70, v56, 0);
  v7 = v74;
LABEL_93:
  v62 = sub_1402CBD10(0xFFFFF6FB7DBEDF68uLL, v12, -2147483644);
  v63 = v62;
  v64 = 0;
  if ( sub_140317A80((unsigned __int64)v7) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v64 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_101;
      v65 = (v62 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_101;
      v65 = (v62 & 1) == 0;
    }
    if ( !v65 )
      v63 = v62 | 0x8000000000000000uLL;
  }
LABEL_101:
  *v7 = v63;
  if ( v64 )
    sub_1402294F0((__int64)v7, v63);
  return v62;
}
