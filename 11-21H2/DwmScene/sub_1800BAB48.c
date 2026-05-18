/*
 * XREFs of sub_1800BAB48 @ 0x1800BAB48
 * Callers:
 *     sub_180002130 @ 0x180002130 (sub_180002130.c)
 *     sub_1800022B0 @ 0x1800022B0 (sub_1800022B0.c)
 *     sub_180002320 @ 0x180002320 (sub_180002320.c)
 *     sub_180002390 @ 0x180002390 (sub_180002390.c)
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 *     sub_180002470 @ 0x180002470 (sub_180002470.c)
 *     sub_1800024E0 @ 0x1800024E0 (sub_1800024E0.c)
 *     sub_180002550 @ 0x180002550 (sub_180002550.c)
 *     sub_1800025C0 @ 0x1800025C0 (sub_1800025C0.c)
 *     sub_180002630 @ 0x180002630 (sub_180002630.c)
 *     sub_1800026A0 @ 0x1800026A0 (sub_1800026A0.c)
 *     sub_180002710 @ 0x180002710 (sub_180002710.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800BA68C @ 0x1800BA68C (sub_1800BA68C.c)
 *     sub_1800BA69C @ 0x1800BA69C (sub_1800BA69C.c)
 *     sub_1800BA6EC @ 0x1800BA6EC (sub_1800BA6EC.c)
 *     sub_1800BA77C @ 0x1800BA77C (sub_1800BA77C.c)
 *     sub_1800BA85C @ 0x1800BA85C (sub_1800BA85C.c)
 */

// Hidden C++ exception states: #wind=18
__int64 sub_1800BAB48()
{
  __int64 v0; // rbx
  __int128 v2; // xmm6
  __int64 *v3; // rax
  __int64 *v4; // rax
  void *v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm6
  __int64 *v8; // rax
  __int64 *v9; // rax
  void *v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm6
  __int64 *v13; // rax
  __int64 *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 *v18; // rax
  __int64 *v19; // rax
  void *v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int64 *v23; // rax
  __int64 *v24; // rax
  void *v25; // rax
  __int64 v26; // rax
  __int128 v27; // xmm6
  __int64 *v28; // rax
  __int64 *v29; // rax
  void *v30; // rax
  __int64 v31; // rax
  __int128 v32; // [rsp+28h] [rbp-79h] BYREF
  __int128 v33; // [rsp+38h] [rbp-69h]
  _BYTE v34[32]; // [rsp+48h] [rbp-59h] BYREF
  __int128 v35; // [rsp+68h] [rbp-39h] BYREF
  __int64 v36; // [rsp+78h] [rbp-29h]
  unsigned __int64 v37; // [rsp+80h] [rbp-21h]
  char *v38[2]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v39; // [rsp+98h] [rbp-9h]
  char *Src; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v41; // [rsp+B8h] [rbp+17h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801FAED8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAED8);
    if ( dword_1801FAED8 == -1 )
    {
      *(_QWORD *)&v35 = sub_1800BA68C();
      *((_QWORD *)&v35 + 1) = v35 + 2252;
      v2 = v35;
      *(_QWORD *)&v39 = 0x100000005LL;
      v3 = sub_1800BA85C();
      v4 = sub_180088448((__int64 *)&Src, 1LL, v3, 3);
      v5 = (void *)sub_18001DD3C((__int64)&v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v4);
      v6 = sub_18001DC84((__int64)v34, v5);
      v32 = v2;
      v33 = v39;
      sub_180088528(v6, (__int64)&v32);
      if ( v37 >= 0x10 )
        sub_180010884((char *)v35, v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35) = 0;
      if ( *((_QWORD *)&v41 + 1) >= 0x10uLL )
        sub_180010884(Src, *((_QWORD *)&v41 + 1) + 1LL);
      sub_18000C548(&dword_1801FAED8);
    }
  }
  if ( dword_1801FAEDC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAEDC);
    if ( dword_1801FAEDC == -1 )
    {
      *(_QWORD *)&v35 = sub_1800BA6EC();
      *((_QWORD *)&v35 + 1) = v35 + 3004;
      v7 = v35;
      *(_QWORD *)&v41 = 0x100000005LL;
      v8 = sub_1800BA85C();
      v9 = sub_180088448((__int64 *)v38, 2LL, v8, 3);
      v10 = (void *)sub_18001DD3C((__int64)&v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v9);
      v11 = sub_18001DC84((__int64)v34, v10);
      v32 = v7;
      v33 = v41;
      sub_180088528(v11, (__int64)&v32);
      if ( v37 >= 0x10 )
        sub_180010884((char *)v35, v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
        sub_180010884(v38[0], *((_QWORD *)&v39 + 1) + 1LL);
      sub_18000C548(&dword_1801FAEDC);
    }
  }
  if ( dword_1801FAEE0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAEE0);
    if ( dword_1801FAEE0 == -1 )
    {
      *(_QWORD *)&v35 = sub_1800BA77C();
      *((_QWORD *)&v35 + 1) = v35 + 4508;
      v12 = v35;
      *(_QWORD *)&v41 = 0x100000005LL;
      v13 = sub_1800BA85C();
      v14 = sub_180088448((__int64 *)v38, 4LL, v13, 3);
      v15 = (void *)sub_18001DD3C((__int64)&v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v14);
      v16 = sub_18001DC84((__int64)v34, v15);
      v32 = v12;
      v33 = v41;
      sub_180088528(v16, (__int64)&v32);
      if ( v37 >= 0x10 )
        sub_180010884((char *)v35, v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
        sub_180010884(v38[0], *((_QWORD *)&v39 + 1) + 1LL);
      sub_18000C548(&dword_1801FAEE0);
    }
  }
  if ( dword_1801FAEE4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAEE4);
    if ( dword_1801FAEE4 == -1 )
    {
      *(_QWORD *)&v35 = sub_1800BA69C();
      *((_QWORD *)&v35 + 1) = v35 + 1516;
      v17 = v35;
      *(_QWORD *)&v41 = 0x100000001LL;
      v18 = sub_1800BA85C();
      v19 = sub_180088448((__int64 *)v38, 1LL, v18, 3);
      v20 = (void *)sub_18001DD3C((__int64)&v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v19);
      v21 = sub_18001DC84((__int64)v34, v20);
      v32 = v17;
      v33 = v41;
      sub_180088528(v21, (__int64)&v32);
      if ( v37 >= 0x10 )
        sub_180010884((char *)v35, v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
        sub_180010884(v38[0], *((_QWORD *)&v39 + 1) + 1LL);
      sub_18000C548(&dword_1801FAEE4);
    }
  }
  if ( dword_1801FAEE8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAEE8);
    if ( dword_1801FAEE8 == -1 )
    {
      *(_QWORD *)&v35 = sub_1800BA69C();
      *((_QWORD *)&v35 + 1) = v35 + 1516;
      v22 = v35;
      *(_QWORD *)&v41 = 0x100000001LL;
      v23 = sub_1800BA85C();
      v24 = sub_180088448((__int64 *)v38, 2LL, v23, 3);
      v25 = (void *)sub_18001DD3C((__int64)&v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v24);
      v26 = sub_18001DC84((__int64)v34, v25);
      v32 = v22;
      v33 = v41;
      sub_180088528(v26, (__int64)&v32);
      if ( v37 >= 0x10 )
        sub_180010884((char *)v35, v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
        sub_180010884(v38[0], *((_QWORD *)&v39 + 1) + 1LL);
      sub_18000C548(&dword_1801FAEE8);
    }
  }
  if ( dword_1801FAEEC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAEEC);
    if ( dword_1801FAEEC == -1 )
    {
      *(_QWORD *)&v35 = sub_1800BA69C();
      *((_QWORD *)&v35 + 1) = v35 + 1516;
      v27 = v35;
      *(_QWORD *)&v41 = 0x100000001LL;
      v28 = sub_1800BA85C();
      v29 = sub_180088448((__int64 *)v38, 4LL, v28, 3);
      v30 = (void *)sub_18001DD3C((__int64)&v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v29);
      v31 = sub_18001DC84((__int64)v34, v30);
      v32 = v27;
      v33 = v41;
      sub_180088528(v31, (__int64)&v32);
      if ( v37 >= 0x10 )
        sub_180010884((char *)v35, v37 + 1);
      v36 = 0LL;
      v37 = 15LL;
      LOBYTE(v35) = 0;
      if ( *((_QWORD *)&v39 + 1) >= 0x10uLL )
        sub_180010884(v38[0], *((_QWORD *)&v39 + 1) + 1LL);
      sub_18000C548(&dword_1801FAEEC);
    }
  }
  return 0LL;
}
