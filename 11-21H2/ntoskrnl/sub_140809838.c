/*
 * XREFs of sub_140809838 @ 0x140809838
 * Callers:
 *     sub_140806FC0 @ 0x140806FC0 (sub_140806FC0.c)
 *     sub_1408081E0 @ 0x1408081E0 (sub_1408081E0.c)
 *     sub_1408091FC @ 0x1408091FC (sub_1408091FC.c)
 *     sub_1408095C4 @ 0x1408095C4 (sub_1408095C4.c)
 *     sub_140995888 @ 0x140995888 (sub_140995888.c)
 *     sub_1409959F8 @ 0x1409959F8 (sub_1409959F8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_14039A8F4 @ 0x14039A8F4 (sub_14039A8F4.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405D03D0 @ 0x1405D03D0 (sub_1405D03D0.c)
 *     sub_1405D0450 @ 0x1405D0450 (sub_1405D0450.c)
 *     sub_1407ED930 @ 0x1407ED930 (sub_1407ED930.c)
 *     sub_140809614 @ 0x140809614 (sub_140809614.c)
 *     sub_140809E5C @ 0x140809E5C (sub_140809E5C.c)
 *     sub_14080A040 @ 0x14080A040 (sub_14080A040.c)
 *     sub_14080A52C @ 0x14080A52C (sub_14080A52C.c)
 *     sub_14081B500 @ 0x14081B500 (sub_14081B500.c)
 *     sub_140997C84 @ 0x140997C84 (sub_140997C84.c)
 */

void __fastcall sub_140809838(int a1, unsigned int a2)
{
  char *v4; // r13
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // eax
  int v10; // esi
  int v11; // edi
  __int64 v12; // r8
  char LowPart; // si
  int v14; // r15d
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 *i; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  LARGE_INTEGER v38; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C8h]
  _OWORD v40[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+70h] [rbp-98h] BYREF
  __int128 v43; // [rsp+80h] [rbp-88h]
  _BYTE v44[336]; // [rsp+98h] [rbp-70h] BYREF

  memset(v44, 0, 0x144uLL);
  memset(v40, 0, sizeof(v40));
  v42 = 0LL;
  v43 = 0LL;
  sub_1402D66A8((ULONG_PTR)&qword_140C1FF60);
  v4 = (char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048;
  v5 = ((_BYTE)dword_140C20048 + 1) & 7;
  dword_140C20048 = ((_BYTE)dword_140C20048 + 1) & 7;
  v6 = 13 * (v5 + 2);
  v7 = KeQueryInterruptTimePrecise(&v38);
  v41 = -2500000LL;
  v8 = v7;
  v9 = sub_1407ED930(v40, (__int64)&v41);
  v10 = DWORD2(v40[0]);
  v11 = HIDWORD(v40[0]);
  *((_QWORD *)v4 + 3) = v8;
  v38.LowPart = v9 != 258;
  *((_DWORD *)v4 + 9) = a2;
  *((_DWORD *)v4 + 11) = v11;
  *((_DWORD *)v4 + 13) = v10;
  memset((char *)&qword_140C1FF80[v6] + 4, 0, 0x64uLL);
  LODWORD(qword_140C1FF80[v6]) = a1;
  v12 = *((_QWORD *)v4 + 1);
  qword_140C1FF80[v6 + 2] = v8;
  qword_140C1FF80[v6 + 1] = v12 + 1;
  LOBYTE(qword_140C1FF80[v6 + 7]) = v40[0];
  LODWORD(qword_140C1FF80[v6 + 4]) = a2;
  LODWORD(qword_140C1FF80[v6 + 5]) = v11;
  LODWORD(qword_140C1FF80[v6 + 6]) = v10;
  if ( *(_DWORD *)v4 == 1 )
  {
    LowPart = v38.LowPart;
  }
  else
  {
    if ( *(_DWORD *)v4 != 2 )
    {
      LowPart = v38.LowPart;
      goto LABEL_4;
    }
    sub_14080A040(&qword_1400377F8, &xmmword_140010DE8);
    LowPart = v38.LowPart;
    LOBYTE(v35) = v38.LowPart;
    sub_140997C84(v4, v40, v35, 0LL);
  }
  if ( byte_140C5AC3C )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        goto LABEL_4;
      sub_14081B500(4LL, 6LL);
      sub_1405D0450();
    }
  }
  else if ( a1 == 2 )
  {
    goto LABEL_4;
  }
  if ( *(_DWORD *)v4 == 1 )
    ++qword_140C1FF80[v6 + 1];
  if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140C54214 = 1, a1 != 3) )
  {
    if ( a2 >= 0x1000000 || (dword_140C21E30 = 2, (a2 & 0xFFFFFF) != 0x35) )
      dword_140C21E30 = 17;
  }
  else
  {
    dword_140C21E30 = dword_140C227D4;
  }
  sub_14039A8F4(0, a2);
  sub_140809614(v18, (__int64 *)&xmmword_140010DE8, qword_140C1FF80[v6 + 1], (__int64)v40, v44);
  if ( !byte_140C1FF98 )
  {
    v19 = 2LL;
    v20 = &unk_140C21E60;
    v21 = v44;
    do
    {
      v22 = v21[1];
      *v20 = *v21;
      v23 = v21[2];
      v20[1] = v22;
      v24 = v21[3];
      v20[2] = v23;
      v25 = v21[4];
      v20[3] = v24;
      v26 = v21[5];
      v20[4] = v25;
      v27 = v21[6];
      v20[5] = v26;
      v28 = v21[7];
      v21 += 8;
      v20[6] = v27;
      v20 += 8;
      *(v20 - 1) = v28;
      --v19;
    }
    while ( v19 );
    v29 = *v21;
    v38.QuadPart = 0LL;
    v30 = v21[1];
    v39 = -1LL;
    *v20 = v29;
    v31 = v21[2];
    v20[1] = v30;
    v32 = v21[3];
    v33 = *((_QWORD *)v21 + 8);
    v20[2] = v31;
    v20[3] = v32;
    *((_QWORD *)v20 + 8) = v33;
    KeSetTimer2((__int64)&unk_140C1FFA0, -50000000LL, 0LL, (__int64)&v38);
    v34 = qword_140C1FF80[v6 + 1] - 2;
    byte_140C1FF98 = 1;
    qword_140C1FF90 = v34;
  }
  sub_14080A040(&qword_140011C28, &xmmword_140010DE8);
LABEL_4:
  sub_140809E5C(v4, &qword_140C1FF80[v6]);
  v14 = a1 - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_10;
    sub_14039AD4C((__int64)&v42);
    qword_140C1FF80[v6 + 8] = v43;
    LOBYTE(v36) = 1;
    LOBYTE(v37) = LowPart;
    qword_140C1FF80[v6 + 9] = *((_QWORD *)&v42 + 1);
    sub_140997C84(&qword_140C1FF80[v6], v40, v37, v36);
    v16 = &qword_1400377F8;
  }
  else
  {
    if ( byte_140C5AC3C && (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
    {
      sub_14081B500(3LL, 6LL);
      sub_1405D03D0(a2 == 23);
    }
    sub_14039A8F4(1, a2);
    sub_140809614(v15, (__int64 *)&qword_140011C30, qword_140C1FF80[v6 + 1], (__int64)v40, v44);
    if ( !byte_140C1FF98 )
      sub_14080A52C();
    v16 = &qword_140011C28;
  }
  sub_14080A040(v16, &qword_140011C30);
LABEL_10:
  for ( i = (__int64 *)qword_140C1FF80[0]; i != qword_140C1FF80; i = (__int64 *)*i )
    sub_14042A5E0(LODWORD(qword_140C1FF80[v6]), qword_140C1FF80[v6 + 1]);
  sub_1402935D0((ULONG_PTR)&qword_140C1FF60);
}
