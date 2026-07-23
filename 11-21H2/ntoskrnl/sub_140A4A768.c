/*
 * XREFs of sub_140A4A768 @ 0x140A4A768
 * Callers:
 *     sub_14098C2AC @ 0x14098C2AC (sub_14098C2AC.c)
 *     sub_14098C45C @ 0x14098C45C (sub_14098C45C.c)
 *     sub_140A49448 @ 0x140A49448 (sub_140A49448.c)
 *     sub_140A68674 @ 0x140A68674 (sub_140A68674.c)
 *     sub_140A6927C @ 0x140A6927C (sub_140A6927C.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_14038BB00 @ 0x14038BB00 (sub_14038BB00.c)
 *     sub_14038BCE0 @ 0x14038BCE0 (sub_14038BCE0.c)
 *     sub_14038BF18 @ 0x14038BF18 (sub_14038BF18.c)
 *     sub_140397278 @ 0x140397278 (sub_140397278.c)
 *     sub_14039734C @ 0x14039734C (sub_14039734C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_1407D6CBC @ 0x1407D6CBC (sub_1407D6CBC.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_1407FF67C @ 0x1407FF67C (sub_1407FF67C.c)
 *     sub_1407FF72C @ 0x1407FF72C (sub_1407FF72C.c)
 *     sub_1407FF7F4 @ 0x1407FF7F4 (sub_1407FF7F4.c)
 *     sub_140808994 @ 0x140808994 (sub_140808994.c)
 *     sub_1408089C4 @ 0x1408089C4 (sub_1408089C4.c)
 *     sub_140808AEC @ 0x140808AEC (sub_140808AEC.c)
 *     sub_140808C74 @ 0x140808C74 (sub_140808C74.c)
 *     sub_140944824 @ 0x140944824 (sub_140944824.c)
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 *     sub_14098C1E4 @ 0x14098C1E4 (sub_14098C1E4.c)
 *     sub_140A49130 @ 0x140A49130 (sub_140A49130.c)
 *     sub_140A4ACD0 @ 0x140A4ACD0 (sub_140A4ACD0.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A52EBC @ 0x140A52EBC (sub_140A52EBC.c)
 *     sub_140A5B810 @ 0x140A5B810 (sub_140A5B810.c)
 *     sub_140A6A3E0 @ 0x140A6A3E0 (sub_140A6A3E0.c)
 *     MmIsVerifierEnabled @ 0x140A7BDF0 (MmIsVerifierEnabled.c)
 *     sub_140AAB76C @ 0x140AAB76C (sub_140AAB76C.c)
 */

__int64 __fastcall sub_140A4A768(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r13
  int v17; // r14d
  __int64 v18; // r12
  _DWORD *v19; // r15
  __int64 v20; // r8
  int v22; // r15d
  _DWORD *v23; // r14
  unsigned int i; // esi
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rsi
  char *v28; // rdx
  __int64 v29; // r8
  char *v30; // r9
  unsigned int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r10
  char v34; // [rsp+30h] [rbp-30h]
  int v35; // [rsp+34h] [rbp-2Ch] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-28h] BYREF
  ULONG VerifierFlags; // [rsp+40h] [rbp-20h] BYREF
  LARGE_INTEGER *p_Interval; // [rsp+48h] [rbp-18h] BYREF
  __int64 v39; // [rsp+50h] [rbp-10h]

  v6 = (char *)qword_140C22750;
  v34 = *(_BYTE *)(a1 + 25);
  v4 = v34;
  *(_BYTE *)qword_140C22750 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 112) = 0;
  *((_QWORD *)v6 + 57) = 0LL;
  *(_WORD *)(v6 + 465) = 0;
  v6[467] = 0;
  v6[464] = v34;
  DWORD1(xmmword_140C22740) = 0;
  v7 = (*(_DWORD *)a1 & 0xF) << 16;
  DWORD1(xmmword_140C22740) = v7;
  if ( v34 )
  {
    v26 = v7 | 0x1100;
  }
  else
  {
    DWORD1(xmmword_140C22740) = v7 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v8 = DWORD1(xmmword_140C22740) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
    DWORD1(xmmword_140C22740) = v8;
    if ( *(_DWORD *)(a1 + 16) != 5 )
      goto LABEL_3;
    v26 = (byte_140C204D0 != 0 ? 0x400000 : 0) | v8;
  }
  DWORD1(xmmword_140C22740) = v26;
LABEL_3:
  v9 = *(_DWORD *)(a1 + 16);
  LOBYTE(xmmword_140C22740) = 1;
  DWORD2(xmmword_140C22740) = v9;
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    Interval.QuadPart = *((unsigned int *)v6 + 1);
    BYTE6(Interval.QuadPart) = *(_BYTE *)(a1 + 26);
    BYTE5(Interval.QuadPart) = *(_BYTE *)(a1 + 24);
    p_Interval = &Interval;
    BYTE4(Interval.QuadPart) = v34;
    v39 = 8LL;
    sub_14035EDE4((__int64)&p_Interval, 1u, 0x80008000, 0x1224u, 0x401802u);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 && (*(_DWORD *)(a1 + 20) & 0x4000000) == 0 )
    v6[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v6[467] = 1;
  v10 = *(_DWORD *)(a1 + 20);
  if ( (v10 & 0x8000000) != 0 )
  {
    DWORD1(xmmword_140C22740) |= 0x200000u;
    v10 = *(_DWORD *)(a1 + 20);
  }
  v11 = v10 & 0x4000000;
  v35 = v11;
  if ( v11 )
    DWORD1(xmmword_140C22740) |= 0x800000u;
  if ( v34 )
  {
LABEL_38:
    v6[464] = v4;
    if ( !v4 )
      goto LABEL_39;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    sub_1407FF67C(1);
  if ( *((int *)v6 + 112) >= 0 )
  {
    sub_140A49130((__int64)v6);
    sub_1407FF72C(*(_BYTE *)(a1 + 26) == 3, (DWORD1(xmmword_140C22740) >> 8) & 0xF, WORD2(xmmword_140C22740) >> 12);
    v12 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v12 = 14LL;
    sub_140A4B974(v12);
    v15 = *(_DWORD *)(a1 + 16);
    if ( v15 == 4 )
    {
      if ( (_BYTE)byte_140C22C98 || *(_QWORD *)&qword_140C227F0 )
        v16 = 4LL;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
      if ( (unsigned int)(v15 - 2) <= 1 && *v6 == 2 )
        sub_14039734C(1u);
    }
    v17 = 4;
    v18 = 4LL;
    v19 = v6 + 352;
    while ( 1 )
    {
      if ( v17 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v11 )
      {
        if ( dword_140C227E8 == 5 )
          sub_140808994();
        sub_1407FF7F4(0);
        VerifierFlags = 0;
        MmIsVerifierEnabled(&VerifierFlags);
        if ( (dword_140C22278 & 0x80u) != 0 || (VerifierFlags & 2) != 0 )
        {
          v27 = 2LL;
          do
          {
            sub_140A5B810(2LL);
            sub_140A5B810(3LL);
            sub_140A5B810(3LL);
            --v27;
          }
          while ( v27 );
          sub_140A5B810(4LL);
          v11 = v35;
        }
        _InterlockedExchange(&dword_140C0BB24, 0);
        if ( *(_BYTE *)(a1 + 24) )
        {
          sub_140551D58(0LL, 1);
          if ( (dword_140C23508 & 0x10) != 0 )
            sub_140983EF0((PVOID *)1, v28, v29, v30);
          sub_140A6A3E0(1LL);
        }
        else
        {
          sub_1407D6F54(1u);
          v6[468] = 1;
        }
      }
      LOBYTE(v13) = *v6;
      LOBYTE(v14) = 1;
      sub_140A4ACD0((unsigned int)v17, 0LL, v13, v14);
      if ( *v19 )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v6 + 7) = 0LL;
        sub_14038BCE0((__int64)v6, (__int64)&v6[64 * v17 + 64 + 8 * v17]);
      }
      LOBYTE(v20) = *v6;
      sub_140A4ACD0((unsigned int)v17, 0LL, v20, 0LL);
      if ( *((int *)v6 + 112) < 0 )
        break;
      --v17;
      --v18;
      v19 -= 18;
      if ( v18 < v16 )
      {
        v4 = v34;
        goto LABEL_32;
      }
    }
    v34 = 1;
    v4 = 1;
    if ( !*((_QWORD *)v6 + 57) || *(_DWORD *)(a1 + 12) != 1 )
      goto LABEL_105;
    v31 = sub_14038BF18(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
    if ( v31 == 7 )
    {
      v32 = **((_QWORD **)v6 + 7);
    }
    else if ( *(int *)(a1 + 20) < 0 )
    {
LABEL_105:
      if ( v11 )
        sub_14098C1E4(*((_QWORD *)v6 + 57));
LABEL_32:
      if ( *v6 == 2 && v11 )
        sub_140397278();
      sub_140256CA0(&stru_140037220);
      if ( *(_BYTE *)(a1 + 26) == 3 )
        sub_140A4B974(12LL);
      goto LABEL_37;
    }
    sub_140944824(v31, v32, v33);
    goto LABEL_105;
  }
LABEL_37:
  if ( (dword_140C22278 & 0x20000) == 0 || *(_BYTE *)(a1 + 26) != 2 )
    goto LABEL_38;
  DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
  v34 = 1;
  *((_DWORD *)v6 + 112) = -1073741823;
  v6[464] = 1;
LABEL_51:
  v6[466] = 1;
  *v6 = 2;
  *((_DWORD *)v6 + 1) = 1;
  if ( *(_BYTE *)(a1 + 26) != 2
    || (sub_140256CA0(&stru_140037198), qword_140C22CD8 = KeQueryPerformanceCounter(0LL).QuadPart, *v6 == 2) )
  {
    if ( v11 )
      sub_14039734C(1u);
  }
  v22 = v35;
  v23 = v6 + 64;
  for ( i = 0; (int)i <= 4; ++i )
  {
    if ( byte_140C223A8 && !i )
    {
      if ( byte_140C22C00 )
        qword_140C22EA0 = KeQueryPerformanceCounter(0LL).QuadPart;
      if ( byte_140C547E0 )
      {
        sub_140AAB76C();
        byte_140C54905 = 0;
        byte_140C54904 = 0;
      }
    }
    LOBYTE(a3) = *v6;
    LOBYTE(a4) = 1;
    sub_140A4ACD0(i, 1LL, a3, a4);
    if ( v23[1] < *v23 )
      sub_14038BB00(v6, (__int64)&v6[64 * i + 64 + 8 * i]);
    LOBYTE(v25) = *v6;
    sub_140A4ACD0(i, 1LL, v25, 0LL);
    if ( i == 1 && *(_BYTE *)(a1 + 26) == 2 && !v22 )
    {
      if ( v6[468] )
      {
        v6[468] = 0;
        sub_1407D6CBC();
      }
      if ( byte_140C223A8 )
      {
        if ( qword_140C22800 && *(_QWORD *)(qword_140C22800 + 216) )
          sub_140A52EBC();
        sub_140808AEC(
          *(_BYTE *)(*(_QWORD *)(qword_140C22800 + 200) + 1084LL),
          *(_BYTE *)(*(_QWORD *)(qword_140C22800 + 200) + 1085LL),
          *(_DWORD *)(*(_QWORD *)(qword_140C22800 + 200) + 1080LL),
          *(_QWORD *)(*(_QWORD *)(qword_140C22800 + 200) + 1072LL));
      }
      if ( dword_140C227E8 == 5 )
        sub_1408089C4();
      sub_1407FF7F4(1);
      _InterlockedExchange(&dword_140C0BB24, 1);
      if ( (dword_140CF7060 & 4) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
      }
    }
    v23 += 18;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
  {
    sub_140397278();
    qword_140C22CE0 = KeQueryPerformanceCounter(0LL).QuadPart;
    sub_140808C74();
    sub_140A4B974(36LL);
    if ( (dword_140CF7060 & 8) != 0 )
    {
      Interval.QuadPart = -50000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
    }
  }
  v4 = v34;
  *v6 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
LABEL_39:
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v35 = *((_DWORD *)v6 + 112);
    v39 = 4LL;
    p_Interval = (LARGE_INTEGER *)&v35;
    sub_14035EDE4((__int64)&p_Interval, 1u, 0x80008000, 0x1225u, 0x401802u);
  }
  if ( v4 && *(_BYTE *)(a1 + 26) == 2 )
    sub_1407FF67C(0);
  DWORD1(xmmword_140C22740) &= ~0x800000u;
  LOBYTE(xmmword_140C22740) = 0;
  return *((unsigned int *)v6 + 112);
}
