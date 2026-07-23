/*
 * XREFs of sub_1407EE90C @ 0x1407EE90C
 * Callers:
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     sub_1403699FC @ 0x1403699FC (sub_1403699FC.c)
 *     sub_140369AC4 @ 0x140369AC4 (sub_140369AC4.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403C0FF4 @ 0x1403C0FF4 (sub_1403C0FF4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1405D3EA0 @ 0x1405D3EA0 (sub_1405D3EA0.c)
 *     sub_1405DF088 @ 0x1405DF088 (sub_1405DF088.c)
 *     sub_1405DF230 @ 0x1405DF230 (sub_1405DF230.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     sub_1407EE6D0 @ 0x1407EE6D0 (sub_1407EE6D0.c)
 *     sub_1407EEBA8 @ 0x1407EEBA8 (sub_1407EEBA8.c)
 *     sub_1407EEC68 @ 0x1407EEC68 (sub_1407EEC68.c)
 *     sub_1407EEF7C @ 0x1407EEF7C (sub_1407EEF7C.c)
 *     sub_1407EEFE4 @ 0x1407EEFE4 (sub_1407EEFE4.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_140819CB8 @ 0x140819CB8 (sub_140819CB8.c)
 *     sub_1408556F0 @ 0x1408556F0 (sub_1408556F0.c)
 *     sub_1409899DC @ 0x1409899DC (sub_1409899DC.c)
 *     sub_1409910B0 @ 0x1409910B0 (sub_1409910B0.c)
 *     sub_1409913FC @ 0x1409913FC (sub_1409913FC.c)
 *     sub_140991530 @ 0x140991530 (sub_140991530.c)
 *     sub_140994918 @ 0x140994918 (sub_140994918.c)
 *     sub_14099510C @ 0x14099510C (sub_14099510C.c)
 *     sub_140995690 @ 0x140995690 (sub_140995690.c)
 *     sub_14099DAA8 @ 0x14099DAA8 (sub_14099DAA8.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1407EE90C(int *a1, int a2)
{
  int v2; // eax
  BOOL v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i v8; // xmm1
  int v9; // edx
  __int64 v10; // r9
  int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // eax
  int v14; // ebx
  __int64 v15; // r14
  __int64 v16; // rsi
  char *v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned int v20; // r13d
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // ecx
  int v26; // eax
  char *v27; // rdx
  unsigned int v28; // ecx
  const CHAR *v29; // rdx
  unsigned int v30; // r8d
  unsigned __int8 v31; // r9
  unsigned __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  char v37; // [rsp+40h] [rbp-49h]
  unsigned int v38; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v40; // [rsp+4Ch] [rbp-3Dh] BYREF
  int Buffer; // [rsp+50h] [rbp-39h] BYREF
  int v42; // [rsp+54h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+60h] [rbp-29h] BYREF
  int v44[4]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v45[2]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int *v46; // [rsp+90h] [rbp+7h] BYREF
  __int64 v47; // [rsp+98h] [rbp+Fh]

  v2 = *a1;
  v40 = 0;
  Buffer = 0;
  v37 = 0;
  v42 = v2 & 1;
  v5 = !(v2 & 1);
  v39 = v5;
  sub_140A48330((_DWORD)a1);
  if ( sub_1403699FC(v5) )
  {
    LOBYTE(v7) = 1;
    sub_1408556F0(v7, 0LL);
    sub_1402D6220(4u);
    sub_1409899DC(v5);
    sub_140819CB8(2LL);
    sub_1403C0FF4();
    sub_14099DAA8();
    if ( v5 )
      qword_140D048A0 = 0LL;
    v37 = 1;
  }
  if ( byte_140C229B8 )
  {
    sub_1407525EC(&stru_140011F38, 4u, &dword_140C229B4);
    v23 = qword_140C229C0;
    v24 = 0LL;
    v6 = 0LL;
    while ( (__int64 *)v23 != &qword_140C229C0 )
    {
      v25 = *(_DWORD *)(v23 + 104);
      if ( v25 == 2 )
      {
        v6 = (unsigned int)(v6 + 1);
      }
      else if ( v25 == 4 )
      {
        v24 = (unsigned int)(v24 + 1);
      }
      v23 = *(_QWORD *)v23;
    }
    v7 = (unsigned int)dword_140C229B4;
    if ( dword_140C0CFF0 == -1 || dword_140C0CFF0 != dword_140C229B4 )
    {
      dword_140C0CFF0 = dword_140C229B4;
      sub_1409913FC((unsigned int)dword_140C229B4, v6, v24, &qword_140C229C0);
    }
    v37 = 1;
  }
  sub_140A47CF8(v7, v6);
  sub_1407EE6D0(a1, v5, &v40);
  if ( ((unk_140C229E0 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140C229B8 )
  {
    sub_1402D6220(8u);
    byte_140C229B8 = 0;
  }
  v8 = *(__m128i *)a1;
  v9 = 0;
  HIDWORD(qword_140C229EC) = a2;
  v10 = (unsigned int)_mm_cvtsi128_si32(v8);
  if ( a2 != -1 )
    v9 = a2;
  unk_140C229E0 = v8;
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    v10,
    v8.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)),
    _mm_srli_si128(v8, 8).m128i_i32[1],
    v9);
  if ( HIDWORD(qword_140C22A00) )
    sub_140995690();
  sub_140369AC4(0);
  if ( qword_140C22A00 && (unsigned __int8)sub_140994918(&unk_140C22AC8, 1LL) && (dword_140C22ACC[0] & 2) == 0 )
  {
    sub_1402D6254(64);
    sub_1402D62A8();
  }
  sub_140A48330(v11);
  v38 = 0;
  v12 = 0;
  v13 = 0;
  v14 = dword_140C229B4 != 0 ? 3 : 0;
  do
  {
    v15 = v13;
    v16 = 3LL * v13;
    v17 = (char *)&unk_140C22AC8 + 24 * v13;
    if ( (unsigned __int8)sub_1407EEC68(v17) )
    {
      v26 = dword_140C22ACC[2 * v16];
      if ( dword_140C095B8[v15] != v26 )
      {
        v27 = (char *)qword_140C231B8 + 96;
        dword_140C095B8[v15] = v26;
        sub_1409910B0(v17, &v27[8 * v16], &v38);
        v12 = v38;
        if ( dword_140C22ACC[6 * v38] == 128 )
        {
          sub_140991530(0x140000000LL + 24LL * v38 + 12724936, (char *)qword_140C231B8 + 24 * v38 + 96, &v38);
          v12 = v38;
        }
      }
      if ( !byte_140C22AC0 )
        sub_1407FEC6C(
          0x140000000LL + 24LL * v12 + 12724936,
          8,
          (_DWORD)qword_140C231B8 + 104 + 24 * v12,
          *((_DWORD *)qword_140C231B8 + 6 * v12 + 29),
          1);
      if ( v14 == 3 )
      {
        if ( v12 )
        {
          if ( v12 == 1 )
            v14 = 2;
        }
        else
        {
          v14 = 1;
        }
      }
    }
    else
    {
      dword_140C095B8[v15] = -1;
      dword_140C22ACC[2 * v16] &= 0xFFFFFFFC;
      sub_1407EEBA8(&v38, v17);
      v12 = v38;
    }
    ++v12;
    v19 = 0x140000000uLL;
    v38 = v12;
    v13 = v12;
  }
  while ( v12 < 4 );
  v20 = v39;
  if ( dword_140C22A1C != v14 )
  {
    Buffer = v14;
    ZwUpdateWnfStateData(&stru_1400377D0, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v28 = dword_140C03A00;
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v29 = "PoBatteryLevelCritical";
        }
        else if ( v14 == 2 )
        {
          v29 = "PoBatteryLevelLow";
        }
        else
        {
          v29 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v29 = "PoBatteryLevelUnknown";
      }
      sub_1403699D0((__int64)v45, v29);
      v39 = v30;
      v46 = &v39;
      v47 = 4LL;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14003133D, 0LL, 0LL, 4u, &v43);
      v28 = dword_140C03A00;
    }
    if ( (unsigned int)(v14 - 1) <= 1 != (unsigned int)(dword_140C22A1C - 1) <= 1
      && v28 > 5
      && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v39 = v31;
      v45[1] = 4LL;
      v45[0] = &v39;
      v38 = v14;
      v46 = &v38;
      v47 = 4LL;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140031381, 0LL, 0LL, 4u, &v43);
    }
    dword_140C22A1C = v14;
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    BYTE10(xmmword_140C54798) = BYTE10(xmmword_140C54798) & 0x3F | ((_BYTE)v14 << 6);
    sub_1403697C8(1);
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
  }
  if ( v37 )
    sub_1405D3EA0();
  sub_140A47CF8(v19, v18);
  sub_1402D66A8((ULONG_PTR)&xmmword_140C22B70);
  xmmword_140C22B80 = 0LL;
  BYTE7(xmmword_140C22B80) = dword_140C22A18;
  xmmword_140C22B90 = 0LL;
  LOBYTE(xmmword_140C22B80) = unk_140C229E0 & 1;
  if ( dword_140C229B4 )
  {
    BYTE1(xmmword_140C22B80) = 1;
    BYTE2(xmmword_140C22B80) = (unk_140C229E0 & 4) != 0;
    DWORD2(xmmword_140C22B80) = HIDWORD(qword_140C22A00);
    HIDWORD(xmmword_140C22B80) = unk_140C229E4;
    *(_QWORD *)&xmmword_140C22B90 = qword_140C229EC;
    *((_QWORD *)&xmmword_140C22B90 + 1) = unk_140C22A08;
    BYTE3(xmmword_140C22B80) = byte_140C22B28 != 0 || (unk_140C229E0 & 2) != 0;
  }
  sub_1407EEFE4();
  sub_1402935D0((ULONG_PTR)&xmmword_140C22B70);
  if ( v40 )
  {
    v38 = (dword_140C22B2C + 500) / 0x3E8u;
    sub_1407525EC(&stru_14003A6C0, 4u, &v38);
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    HIBYTE(xmmword_140C54798) ^= (HIBYTE(xmmword_140C54798) ^ v38) & 0x7F;
    sub_1403697C8(1);
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
    LODWORD(v32) = 0;
    v33 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C22B2C != -1 )
      v32 = (MEMORY[0xFFFFF78000000008] - qword_140C22B30 + 5000) / 0x2710uLL;
    if ( byte_140C5AC3C )
    {
      sub_1405DF230(&v43, v38);
      sub_1405DF230(v44, v40);
      sub_1405DF230(v45, v42);
      sub_1405DF230(&v46, v32);
      sub_1405DF088(v35, v34, v36, (__int64)&v43);
    }
    sub_14099510C(v38, v40, v20, (unsigned int)v32);
    qword_140C22B30 = v33;
  }
  LOBYTE(v21) = v37;
  return sub_1407EEF7C(v21);
}
