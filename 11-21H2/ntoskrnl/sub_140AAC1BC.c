/*
 * XREFs of sub_140AAC1BC @ 0x140AAC1BC
 * Callers:
 *     sub_140AAB76C @ 0x140AAB76C (sub_140AAB76C.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_1403A7AF8 @ 0x1403A7AF8 (sub_1403A7AF8.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_1403A89B4 @ 0x1403A89B4 (sub_1403A89B4.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14064D4AC @ 0x14064D4AC (sub_14064D4AC.c)
 *     sub_140AAB7B4 @ 0x140AAB7B4 (sub_140AAB7B4.c)
 *     sub_140AABA70 @ 0x140AABA70 (sub_140AABA70.c)
 *     sub_140AABCD8 @ 0x140AABCD8 (sub_140AABCD8.c)
 *     sub_140AABE28 @ 0x140AABE28 (sub_140AABE28.c)
 *     sub_140AABF48 @ 0x140AABF48 (sub_140AABF48.c)
 *     sub_140AAC700 @ 0x140AAC700 (sub_140AAC700.c)
 *     sub_140AACFEC @ 0x140AACFEC (sub_140AACFEC.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 *     sub_140AAD404 @ 0x140AAD404 (sub_140AAD404.c)
 */

__int64 __fastcall sub_140AAC1BC(__int64 a1)
{
  __int64 v1; // rdi
  int *v2; // r12
  int *v3; // r13
  __int64 v4; // rsi
  int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  _BOOL8 v10; // rcx
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // edx
  unsigned int v17; // r11d
  unsigned int v18; // r11d
  unsigned int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  int v27; // edi
  unsigned int v28; // ecx
  _QWORD *v29; // rsi
  __int64 v30; // r15
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // edx
  char v35; // [rsp+38h] [rbp-49h] BYREF
  char v36; // [rsp+39h] [rbp-48h]
  char v37; // [rsp+3Ah] [rbp-47h]
  char v38; // [rsp+3Bh] [rbp-46h]
  unsigned int v39; // [rsp+3Ch] [rbp-45h]
  unsigned int v40; // [rsp+40h] [rbp-41h]
  __int64 v41; // [rsp+48h] [rbp-39h] BYREF
  int *v42; // [rsp+50h] [rbp-31h] BYREF
  int *v43; // [rsp+58h] [rbp-29h]
  __int64 v44; // [rsp+60h] [rbp-21h] BYREF
  int *v45; // [rsp+68h] [rbp-19h] BYREF
  int *v46; // [rsp+70h] [rbp-11h] BYREF
  int v47; // [rsp+78h] [rbp-9h] BYREF
  int v48; // [rsp+7Ch] [rbp-5h]
  int v49; // [rsp+80h] [rbp-1h]
  __int64 v50; // [rsp+88h] [rbp+7h] BYREF
  __int64 v51; // [rsp+90h] [rbp+Fh] BYREF
  int *v52; // [rsp+98h] [rbp+17h] BYREF
  _OWORD v53[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  v49 = 0;
  v1 = 0LL;
  v50 = 0LL;
  v2 = 0LL;
  v51 = 0LL;
  v3 = 0LL;
  v39 = 0;
  v4 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  v5 = 0;
  v6 = 0;
  v35 = 0;
  v43 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v52 = 0LL;
  v44 = 0LL;
  memset(v53, 0, sizeof(v53));
  if ( (dword_140C0DF90 & 0x2000) != 0 )
    return (unsigned int)v5;
  if ( (dword_140C0DF90 & 0x200000) != 0 )
    goto LABEL_68;
  v7 = sub_140AABF48(qword_140C0E050);
  v8 = sub_140AABF48(qword_140C0E058);
  v9 = v8;
  if ( !v7 || !v8 )
    goto LABEL_37;
  xmmword_140C0B260 = *(_OWORD *)v7;
  xmmword_140C0B270 = *(_OWORD *)(v7 + 16);
  dword_140C0B280 = *(_DWORD *)(v7 + 32);
  xmmword_140C0B2A0 = *(_OWORD *)v8;
  xmmword_140C0B2B0 = *(_OWORD *)(v8 + 16);
  dword_140C0B2C0 = *(_DWORD *)(v8 + 32);
  sub_1403A8CB4(v7);
  sub_1403A8CB4(v9);
  sub_140AABA70(v10);
  sub_140AAB7B4();
  v36 = 0;
  v37 = 0;
  v40 = sub_1403A8368();
  sub_140AACFEC(1LL, 5LL, 0LL);
  if ( qword_140C0DFD8 )
  {
    v38 = 0;
    v11 = sub_140AABCD8((__int64)qword_140C0DFD8, &v46);
    v2 = v46;
    v5 = v11;
    if ( v11 >= 0 )
    {
      v12 = v46[2];
      if ( v40 == v12 )
      {
LABEL_8:
        v13 = sub_1403A7AF8(*v2, v2[1], v40);
        v14 = qword_140C0DFEC + dword_140C0DFF4;
        v15 = HIDWORD(qword_140C0DFEC) + dword_140C0DFF8;
        v16 = xmmword_140C0B260 + DWORD2(xmmword_140C0B260);
        v6 += ((v13 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v13 + 15) & 0xFFFFFFF0) + 32);
        a1 = DWORD1(xmmword_140C0B260);
        v17 = DWORD1(xmmword_140C0B260) + HIDWORD(xmmword_140C0B260);
        if ( (unsigned int)xmmword_140C0B260 <= (int)qword_140C0DFEC + dword_140C0DFF4
          && (unsigned int)xmmword_140C0B260 >= (unsigned int)qword_140C0DFEC
          && DWORD1(xmmword_140C0B260) >= HIDWORD(qword_140C0DFEC)
          && DWORD1(xmmword_140C0B260) <= v15 )
        {
          if ( v16 < (unsigned int)qword_140C0DFEC || v16 > v14 || v17 < HIDWORD(qword_140C0DFEC) || v17 > v15 )
            goto LABEL_49;
          v36 = 1;
        }
        v18 = xmmword_140C0B2A0 + DWORD2(xmmword_140C0B2A0);
        a1 = DWORD1(xmmword_140C0B2A0);
        v19 = DWORD1(xmmword_140C0B2A0) + HIDWORD(xmmword_140C0B2A0);
        if ( (unsigned int)xmmword_140C0B2A0 < (unsigned int)qword_140C0DFEC
          || (unsigned int)xmmword_140C0B2A0 > v14
          || DWORD1(xmmword_140C0B2A0) < HIDWORD(qword_140C0DFEC)
          || DWORD1(xmmword_140C0B2A0) > v15 )
        {
LABEL_10:
          if ( v36 )
            goto LABEL_13;
          goto LABEL_11;
        }
        if ( v18 >= (unsigned int)qword_140C0DFEC && v18 <= v14 && v19 >= HIDWORD(qword_140C0DFEC) && v19 <= v15 )
        {
          v37 = 1;
          goto LABEL_10;
        }
LABEL_49:
        v5 = -1073741823;
        goto LABEL_32;
      }
      v32 = sub_1403A7AF8(*v46, v46[1], v12);
      v46 = 0LL;
      v6 = ((v32 + 15) & 0xFFFFFFF0) + 32;
      v5 = sub_1403A89B4((__int64)v2, v40, &v46, 0);
      if ( v5 >= 0 )
      {
        *(_QWORD *)&v53[0] = v2;
        v2 = v46;
        v39 = 1;
        goto LABEL_8;
      }
    }
LABEL_37:
    v4 = v44;
LABEL_68:
    sub_140AABA70(a1);
    sub_140AAB7B4();
    v5 = sub_14064D4AC(0xFF000000);
    if ( v1 )
      sub_140AAD3E0(v1);
    if ( v50 )
      sub_140AAD3E0(v50);
    if ( v2 )
      sub_140AAD3E0(v2);
    if ( v51 )
      sub_140AAD3E0(v51);
    if ( v3 )
      sub_140AAD3E0(v3);
    if ( v4 )
      sub_140AAD3E0(v4);
    return (unsigned int)v5;
  }
  v38 = 1;
LABEL_11:
  v20 = sub_140AABE28(&v42, (__int64)&xmmword_140C0B260);
  v1 = (__int64)v42;
  v5 = v20;
  if ( v20 < 0 )
    goto LABEL_32;
  v21 = *v42;
  v22 = v42[1];
  v43 = v42;
  v23 = sub_1403A7AF8(v21, v22, v40);
  v6 += 2 * (((v23 + 15) & 0xFFFFFFF0) + 32) + ((v23 + 15) & 0xFFFFFFF0) + 32;
LABEL_13:
  if ( !v37 )
  {
    v24 = sub_140AABE28(&v52, (__int64)&xmmword_140C0B2A0);
    v3 = v52;
    v5 = v24;
    if ( v24 < 0 )
      goto LABEL_32;
    v25 = sub_1403A7AF8(*v52, v52[1], v40);
    v6 += 2 * (((v25 + 15) & 0xFFFFFFF0) + 32) + ((v25 + 15) & 0xFFFFFFF0) + 32;
  }
  v26 = qword_140C0DFEC;
  v27 = HIDWORD(qword_140C0E110);
  v42 = (int *)qword_140C0DFEC;
  if ( !v38 )
  {
    v5 = sub_140AAC700((_DWORD)v2, HIDWORD(qword_140C0E110), (unsigned int)&v45, (unsigned int)&v41, (__int64)&v35);
    if ( v5 >= 0 )
    {
      v33 = v39;
      *((_QWORD *)v53 + v39) = v2;
      v39 = v33 + 1;
      if ( v35 )
      {
        v38 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(v42) = v41 + (_DWORD)v42;
        HIDWORD(v42) += HIDWORD(v41);
        v26 = (__int64)v42;
        v2 = v45;
      }
    }
  }
  if ( !v36 )
  {
    v5 = sub_140AAC700((_DWORD)v43, v27, (unsigned int)&v45, (unsigned int)&v41, (__int64)&v35);
    if ( v5 >= 0 )
    {
      v34 = v39;
      *((_QWORD *)v53 + v39) = v43;
      v39 = v34 + 1;
      if ( v35 )
      {
        v43 = 0LL;
        v36 = 1;
      }
      else
      {
        v43 = v45;
        LODWORD(xmmword_140C0B260) = v41 + xmmword_140C0B260;
        DWORD1(xmmword_140C0B260) += HIDWORD(v41);
      }
    }
  }
  if ( !v37 )
  {
    v5 = sub_140AAC700((_DWORD)v3, v27, (unsigned int)&v45, (unsigned int)&v41, (__int64)&v35);
    if ( v5 >= 0 )
    {
      v28 = v39;
      *((_QWORD *)v53 + v39) = v3;
      v39 = v28 + 1;
      if ( v35 )
      {
        v37 = 1;
        v3 = 0LL;
      }
      else
      {
        LODWORD(xmmword_140C0B2A0) = v41 + xmmword_140C0B2A0;
        DWORD1(xmmword_140C0B2A0) += HIDWORD(v41);
        v3 = v45;
      }
    }
  }
  if ( !v38 )
  {
    v47 = v2[1];
    v48 = *v2;
    v5 = sub_140AAD404(&v47, v40, &v51);
    if ( v5 < 0 )
    {
      v1 = (__int64)v43;
      goto LABEL_32;
    }
    memset(*(void **)(v51 + 24), 0, *(unsigned int *)(v51 + 12));
  }
  v1 = (__int64)v43;
  if ( !v36 )
  {
    v47 = v43[1];
    v48 = *v43;
    v5 = sub_140AAD404(&v47, v40, &v50);
    if ( v5 < 0 )
      goto LABEL_32;
    memset(*(void **)(v50 + 24), 0, *(unsigned int *)(v50 + 12));
  }
  if ( v37 )
    goto LABEL_31;
  v47 = v3[1];
  v48 = *v3;
  v5 = sub_140AAD404(&v47, v40, &v44);
  if ( v5 >= 0 )
  {
    memset(*(void **)(v44 + 24), 0, *(unsigned int *)(v44 + 12));
LABEL_31:
    sub_140AACFEC(0LL, 5LL, 0LL);
    dword_140C0B244 = 0;
    byte_140C0B250 = v36;
    byte_140C0B251 = v37;
    byte_140C0B252 = v38;
    qword_140C0B288 = v50;
    qword_140C0B298 = v51;
    qword_140C0B2D0 = v44;
    dword_140C0B240 = 100;
    qword_140C0B248 = v26;
    qword_140C0B258 = v1;
    qword_140C0B290 = (__int64)v2;
    qword_140C0B2C8 = (__int64)v3;
    KeResetEvent(&stru_140D009C0);
    KeInitializeTimerEx(&stru_140D00980, NotificationTimer);
    KeInitializeDpc(&stru_140D00940, sub_140AACB80, 0LL);
    byte_140CE1AE1 = 1;
    sub_140AACFEC(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&stru_140D00980, 0LL, 0x1Eu, 0, &stru_140D00940);
    dword_140C0DF90 |= 0x2000u;
    dword_140C0DFAC = v6;
  }
LABEL_32:
  if ( v39 )
  {
    v29 = v53;
    v30 = v39;
    do
    {
      sub_140AAD3E0(*v29++);
      --v30;
    }
    while ( v30 );
  }
  if ( v5 < 0 )
    goto LABEL_37;
  return (unsigned int)v5;
}
