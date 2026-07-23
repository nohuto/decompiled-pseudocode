/*
 * XREFs of sub_140553244 @ 0x140553244
 * Callers:
 *     sub_140567588 @ 0x140567588 (sub_140567588.c)
 * Callees:
 *     sub_140222368 @ 0x140222368 (sub_140222368.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140417674 @ 0x140417674 (sub_140417674.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140552EE8 @ 0x140552EE8 (sub_140552EE8.c)
 *     sub_140552F34 @ 0x140552F34 (sub_140552F34.c)
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 *     sub_1405540DC @ 0x1405540DC (sub_1405540DC.c)
 *     sub_140554390 @ 0x140554390 (sub_140554390.c)
 *     sub_1405544E0 @ 0x1405544E0 (sub_1405544E0.c)
 *     sub_1405554B0 @ 0x1405554B0 (sub_1405554B0.c)
 *     sub_1405557FC @ 0x1405557FC (sub_1405557FC.c)
 *     sub_14055CC5C @ 0x14055CC5C (sub_14055CC5C.c)
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 *     sub_140593778 @ 0x140593778 (sub_140593778.c)
 *     RtlNumberOfSetBitsEx @ 0x1405E6540 (RtlNumberOfSetBitsEx.c)
 *     sub_1405FE548 @ 0x1405FE548 (sub_1405FE548.c)
 */

char __fastcall sub_140553244(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v9; // bl
  __int64 v10; // r14
  int v13; // edi
  unsigned int v15; // edx
  _DWORD *v16; // rax
  char v17; // cl
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // r10
  __int64 v23; // r8
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // rcx
  int v31; // edx
  __int64 v32; // rsi
  unsigned int v33; // r14d
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rdx
  int v38; // edi
  char v39; // [rsp+50h] [rbp-81h]
  char v40; // [rsp+51h] [rbp-80h]
  unsigned int v41; // [rsp+54h] [rbp-7Dh]
  int v43; // [rsp+70h] [rbp-61h]
  _QWORD v44[6]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-21h]
  __int64 v47; // [rsp+B8h] [rbp-19h]
  __int64 v48; // [rsp+C0h] [rbp-11h]

  v9 = 0;
  v10 = a3;
  v40 = a8 == 0;
  v43 = a3;
  v13 = 0;
  v41 = 0;
  sub_140222368();
  if ( byte_140C54D68 == 1 )
    return sub_1405554B0(a1, a2, v10, a4, a5, (__int64)a6, a7);
  if ( DWORD1(xmmword_140C4EFD8) && !byte_140C4EFD4 )
  {
    sub_140552F34(0x400000);
    return 0;
  }
  v47 = a4;
  v48 = a5;
  v45 = a2;
  v46 = v10;
  sub_140593778(a6, &v45);
  if ( !qword_140D00A80 )
    return v9;
  if ( (*(_DWORD *)(qword_140D00A80 + 1368) & 1) != 0 && *(_DWORD *)(qword_140D00A80 + 1336) == 6 )
  {
    v15 = 0;
    v16 = (_DWORD *)(qword_140D00A80 + 1372);
    while ( *v16 != a1 )
    {
      ++v15;
      ++v16;
      if ( v15 >= 8 )
        goto LABEL_14;
    }
    *(_DWORD *)(qword_140D00A80 + 1336) = 5;
  }
LABEL_14:
  if ( !a8 )
    *(_QWORD *)(qword_140D00A80 + 8) = 0LL;
  sub_14042A5E0(1LL, 0LL);
  if ( (*(_DWORD *)(qword_140D00A80 + 1368) & 2) != 0 || (v17 = 1, *(_DWORD *)(qword_140D00A80 + 1336) != 5) )
    v17 = 0;
  sub_140417674(v17);
  sub_1405FE548();
  LOBYTE(v18) = 1;
  v39 = sub_14042A5E0(v18, v19);
  sub_140552B40(32);
  v20 = 9LL;
  v21 = a4;
  v22 = a5;
  v23 = (__int64)a6;
  *(_DWORD *)(qword_140D00A80 + 24) = a1;
  v24 = a6;
  *(_QWORD *)(qword_140D00A80 + 32) = a2;
  *(_QWORD *)(qword_140D00A80 + 40) = v10;
  *(_QWORD *)(qword_140D00A80 + 48) = a4;
  *(_QWORD *)(qword_140D00A80 + 56) = a5;
  v25 = (_OWORD *)(qword_140D00A80 + 64);
  do
  {
    *v25 = *v24;
    v25[1] = v24[1];
    v25[2] = v24[2];
    v25[3] = v24[3];
    v25[4] = v24[4];
    v25[5] = v24[5];
    v25[6] = v24[6];
    v25 += 8;
    v26 = v24[7];
    v24 += 8;
    *(v25 - 1) = v26;
    --v20;
  }
  while ( v20 );
  *v25 = *v24;
  v25[1] = v24[1];
  v25[2] = v24[2];
  v25[3] = v24[3];
  v25[4] = v24[4];
  *(_QWORD *)(qword_140D00A80 + 1296) = &unk_140C02190;
  *(_QWORD *)(qword_140D00A80 + 1304) = &qword_140C1BF80;
  *(_QWORD *)(qword_140D00A80 + 1312) = &PsLoadedModuleList;
  *(_QWORD *)(qword_140D00A80 + 1320) = qword_140D069A8;
  *(_QWORD *)(qword_140D00A80 + 16) = &qword_140C2B810;
  *(_QWORD *)(qword_140D00A80 + 1416) = &qword_140C2B820;
  *(_BYTE *)(qword_140D00A80 + 1432) = 4;
  if ( a8 )
    v27 = *(_QWORD *)(*(_QWORD *)(a7 + 184) + 40LL);
  else
    v27 = __readcr3();
  *(_QWORD *)(qword_140D00A80 + 1344) = v27 & 0xFFFFFFFFFFFFF000uLL;
  v28 = *(_QWORD *)(qword_140D00A80 + 1328);
  if ( v28 )
    goto LABEL_27;
  if ( v39 == 1 )
  {
    if ( a8 )
      goto LABEL_39;
LABEL_27:
    if ( v39 == 1 )
      goto LABEL_30;
  }
  v29 = *(_QWORD *)(qword_140D00A80 + 1360);
  if ( v29 )
  {
    *(_QWORD *)(qword_140D00A80 + 1328) = v29 + 12316;
    *(_QWORD *)(qword_140D00A80 + 8) = 0LL;
    goto LABEL_33;
  }
LABEL_30:
  if ( !v28 && !a8 )
    *(_QWORD *)(qword_140D00A80 + 1328) = *(_QWORD *)(qword_140D00A80 + 1360) + 0x2000LL;
LABEL_33:
  v30 = *(void **)(qword_140D00A80 + 1328);
  if ( qword_140C4E8D0 )
  {
    if ( qword_140C4E8D0 != v30 )
    {
      memmove(v30, qword_140C4E8D0, *((unsigned int *)qword_140C4E8D0 + 1));
LABEL_38:
      v22 = a5;
      v23 = (__int64)a6;
    }
LABEL_39:
    v31 = *(_DWORD *)(qword_140D00A80 + 1368) & 2;
    if ( v31 && *(_DWORD *)(qword_140D00A80 + 1336) == 6 && *(_QWORD *)(qword_140D00A80 + 8) )
    {
      *(_DWORD *)(qword_140D00A80 + 1368) |= 4u;
      v13 = sub_14055CC5C(a1, a2, v10, a4, v22, v23, a7);
      goto LABEL_52;
    }
    v32 = *(_QWORD *)(qword_140D00A80 + 8);
    if ( !v32 )
    {
LABEL_51:
      v21 = a4;
LABEL_52:
      if ( v13 >= 0 )
        v13 = sub_14042A5E0(qword_140D00A80, a8);
      if ( v13 != -1073741267 )
        goto LABEL_62;
      if ( (*(_DWORD *)(qword_140D00A80 + 1368) & 4) != 0 )
      {
        sub_140552B40(39);
        *(_DWORD *)(qword_140D00A80 + 1368) |= 8u;
        v13 = sub_14055CC5C(a1, a2, v10, v21, a5, (__int64)a6, a7);
        if ( v13 < 0 )
          goto LABEL_62;
        v35 = sub_14042A5E0(qword_140D00A80, a8);
        v36 = 38;
      }
      else
      {
        if ( !*(_QWORD *)(qword_140D00A80 + 1328) )
          goto LABEL_62;
        *(_DWORD *)(qword_140D00A80 + 1404) |= 0x400u;
        sub_140553164();
        qword_140C4E8D0 = 0LL;
        v13 = sub_1405540DC(a1, a2, v10, v21, a5, (__int64)a6, a7, v40);
        if ( v13 < 0 )
          goto LABEL_62;
        v35 = sub_14042A5E0(qword_140D00A80, a8);
        v36 = 35;
      }
      v13 = v35;
      sub_140552B40(v36);
LABEL_62:
      if ( (dword_140D01108 & 1) != 0 && v13 < 0 || (dword_140D01108 & 2) != 0 && !v39 )
      {
        sub_140552B40(36);
        if ( (int)sub_14042A5E0(0LL, v37) >= 0 )
        {
          if ( qword_140D00A80 )
          {
            *(_DWORD *)(qword_140D00A80 + 1404) |= 0x1000u;
            sub_140553164();
          }
          while ( 1 )
          {
            KeStallExecutionProcessor(0xF4240u);
            ++dword_140C4E8D8;
          }
        }
      }
      else if ( v13 >= 0 )
      {
        if ( v39 == 1 || !*(_QWORD *)(qword_140D00A80 + 1360) )
          return 1;
        sub_140552EE8();
        v38 = sub_1405557FC(*(PVOID *)(qword_140D00A80 + 1360));
        if ( qword_140D00A80 )
        {
          *(_DWORD *)(qword_140D00A80 + 1404) |= 0x10000000u;
          sub_140553164();
        }
        if ( v38 >= 0 )
          return 1;
      }
      return v9;
    }
    v44[5] = 0LL;
    v33 = 1;
    v45 = *(_QWORD *)(v32 + 48);
    v46 = v32 + 56;
    v44[2] = &v45;
    v44[0] = sub_140552F60;
    v44[1] = sub_140552800;
    v44[3] = v32;
    v44[4] = 0LL;
    v34 = *(_DWORD *)(qword_140D00A80 + 1336);
    if ( v34 == 6 )
    {
      v41 = a9 != 0;
    }
    else
    {
      if ( v34 != 5 || !v31 )
        goto LABEL_50;
      v41 = 2;
    }
    v33 = 0;
LABEL_50:
    sub_140554390(a1);
    sub_140552B40(33);
    sub_140593388(v44, v33, v41);
    sub_1405544E0(a1);
    sub_140552B40(34);
    LODWORD(v10) = v43;
    *(_QWORD *)(v32 + 40) = RtlNumberOfSetBitsEx(&v45);
    goto LABEL_51;
  }
  v13 = sub_1405540DC(a1, a2, v10, a4, a5, (__int64)a6, a7, v40);
  if ( v13 >= 0 )
    goto LABEL_38;
  return v9;
}
