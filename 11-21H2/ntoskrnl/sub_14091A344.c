/*
 * XREFs of sub_14091A344 @ 0x14091A344
 * Callers:
 *     sub_140919A88 @ 0x140919A88 (sub_140919A88.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 *     sub_14068E2EC @ 0x14068E2EC (sub_14068E2EC.c)
 *     sub_1409246D8 @ 0x1409246D8 (sub_1409246D8.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_14091A344(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v5; // eax
  PPRIVILEGE_SET *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r13
  int v9; // r15d
  unsigned int v10; // r9d
  unsigned int v11; // edi
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // rcx
  signed int v15; // eax
  unsigned int *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r9
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+58h] [rbp-A8h]
  PPRIVILEGE_SET *v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v32)(); // [rsp+70h] [rbp-90h]
  char *v33; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v35; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET v36[2]; // [rsp+A0h] [rbp-60h]
  _QWORD v37[12]; // [rsp+B0h] [rbp-50h] BYREF

  v26 = 0LL;
  v2 = 0LL;
  v27 = 0LL;
  v28[1] = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v35 = 0LL;
  *(_OWORD *)v36 = 0LL;
  memset(v37, 0, 0x5CuLL);
  v5 = sub_14068E2EC(a1, &v27, &v26);
  v8 = v27;
  v9 = 2;
  if ( v5 == 2 )
  {
    v25 = 0;
LABEL_3:
    v10 = -1073741670;
    v11 = -1073741670;
LABEL_4:
    sub_14020A890(a2, 0, 38, v10, v25);
    goto LABEL_33;
  }
  if ( v5 == 7 )
  {
    v11 = -1073741491;
    v25 = 16;
LABEL_7:
    v10 = v11;
    goto LABEL_4;
  }
  if ( !v5 )
  {
    v11 = -1073741476;
    v25 = 32;
    goto LABEL_7;
  }
  if ( v5 == 3 )
  {
    v11 = 0;
  }
  else
  {
    if ( v5 == 5 )
      v12 = *(_DWORD *)(v27 + 8);
    else
      v12 = 0;
    if ( *(_DWORD *)(a1 + 168) == 1 )
    {
      Privileges[0] = (PPRIVILEGE_SET)a1;
      v29 = sub_14091B2F0;
      v9 = 1;
      DWORD1(v35) = 1;
      v30 = Privileges;
      v28[0] = 1;
    }
    else
    {
      v13 = 4;
      v14 = (_DWORD *)&v35 + 1;
      v7 = 2LL;
      do
      {
        *(_QWORD *)(v14 - 5) = a1;
        *v14 = v13++;
        v14 += 6;
        --v7;
      }
      while ( v7 );
      v28[0] = 4;
      v29 = sub_14091B2F0;
      v6 = Privileges;
      v32 = sub_14091B2F0;
      v33 = (char *)&v35 + 8;
      v30 = Privileges;
      LODWORD(v31) = 5;
    }
    if ( v5 == 4 )
    {
      LOBYTE(v6) = 1;
      v2 = sub_14042A5E0(4096LL, v6);
      if ( !v2 )
      {
        v25 = 48;
        goto LABEL_3;
      }
      LOBYTE(v7) = 1;
    }
    else
    {
      LOBYTE(v7) = 0;
    }
    v15 = sub_1409246D8((unsigned int)&v26, v12, v7, (unsigned int)v28, v9, (__int64)v37, v2);
    v11 = v15;
    if ( v15 >= 0 )
    {
      *(_DWORD *)(a1 + 184) = HIDWORD(v37[8]);
      *(_DWORD *)(a1 + 168) = v37[9];
      *(_DWORD *)(a1 + 172) = v37[10];
      *(_DWORD *)(a1 + 176) = HIDWORD(v37[9]);
      *(_DWORD *)(a1 + 180) = HIDWORD(v37[10]);
      v18 = HIDWORD(v37[7]);
      *(_BYTE *)(a1 + 194) = 0;
      if ( v18 )
      {
        v16 = (unsigned int *)&v37[6] + 1;
        do
        {
          v19 = sub_140689DAC(v37[3 * *v16 + 1]);
          v16 = (unsigned int *)(v20 + 4);
          *(_BYTE *)(v19 + a1 + 192) = 1;
          v17 = v21 - 1;
        }
        while ( v17 );
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 12LL) = v26;
      v22 = sub_140AB41B0(*(_QWORD *)(a1 + 64), v16, v17);
      *(_DWORD *)(v23 + 508) = v22;
      v11 = 0;
    }
    else
    {
      sub_14020A890(a2, 0, 38, v15, 0x40u);
    }
    if ( v2 )
      sub_14042A5E0(v2, 4096LL);
  }
LABEL_33:
  if ( v8 )
    sub_14042A5E0(v8, *(unsigned int *)(a1 + 132));
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v36[0] )
    SeFreePrivileges(v36[0]);
  return v11;
}
