/*
 * XREFs of sub_1800C2530 @ 0x1800C2530
 * Callers:
 *     sub_180002120 @ 0x180002120 (sub_180002120.c)
 *     sub_1800022A0 @ 0x1800022A0 (sub_1800022A0.c)
 *     sub_180002310 @ 0x180002310 (sub_180002310.c)
 *     sub_180002380 @ 0x180002380 (sub_180002380.c)
 *     sub_1800023F0 @ 0x1800023F0 (sub_1800023F0.c)
 *     sub_180002460 @ 0x180002460 (sub_180002460.c)
 *     sub_1800024D0 @ 0x1800024D0 (sub_1800024D0.c)
 *     sub_180002540 @ 0x180002540 (sub_180002540.c)
 *     sub_1800025B0 @ 0x1800025B0 (sub_1800025B0.c)
 *     sub_180002620 @ 0x180002620 (sub_180002620.c)
 *     sub_180002690 @ 0x180002690 (sub_180002690.c)
 *     sub_180002700 @ 0x180002700 (sub_180002700.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800C248C @ 0x1800C248C (sub_1800C248C.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800C2530()
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
  __int128 v12; // [rsp+28h] [rbp-69h] BYREF
  __int128 v13; // [rsp+38h] [rbp-59h]
  _BYTE v14[32]; // [rsp+48h] [rbp-49h] BYREF
  __int128 v15; // [rsp+68h] [rbp-29h] BYREF
  __int64 v16; // [rsp+78h] [rbp-19h]
  unsigned __int64 v17; // [rsp+80h] [rbp-11h]
  char *v18; // [rsp+88h] [rbp-9h] BYREF
  __int128 v19; // [rsp+98h] [rbp+7h]
  char *Src; // [rsp+A8h] [rbp+17h] BYREF
  __int128 v21; // [rsp+B8h] [rbp+27h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801FB104 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB104);
    if ( dword_1801FB104 == -1 )
    {
      *(_QWORD *)&v15 = sub_1800C248C();
      *((_QWORD *)&v15 + 1) = v15 + 1380;
      v2 = v15;
      *(_QWORD *)&v19 = 0x100000005LL;
      v3 = sub_1800C24AC();
      v4 = sub_180088448((__int64 *)&Src, 0LL, v3, 0);
      v5 = (void *)sub_18001DD3C((__int64)&v15, (__int64)"Font/ShaderModel40/", v4);
      v6 = sub_18001DC84((__int64)v14, v5);
      v12 = v2;
      v13 = v19;
      sub_180088528(v6, (__int64)&v12);
      if ( v17 >= 0x10 )
        sub_180010884((char *)v15, v17 + 1);
      v16 = 0LL;
      v17 = 15LL;
      LOBYTE(v15) = 0;
      if ( *((_QWORD *)&v21 + 1) >= 0x10uLL )
        sub_180010884(Src, *((_QWORD *)&v21 + 1) + 1LL);
      sub_18000C548(&dword_1801FB104);
    }
  }
  if ( dword_1801FB108 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FB108);
    if ( dword_1801FB108 == -1 )
    {
      *(_QWORD *)&v15 = sub_1800C249C();
      *((_QWORD *)&v15 + 1) = v15 + 676;
      v7 = v15;
      *(_QWORD *)&v21 = 0x100000001LL;
      v8 = sub_1800C24AC();
      v9 = sub_180088448((__int64 *)&v18, 0LL, v8, 0);
      v10 = (void *)sub_18001DD3C((__int64)&v15, (__int64)"Font/ShaderModel40/", v9);
      v11 = sub_18001DC84((__int64)v14, v10);
      v12 = v7;
      v13 = v21;
      sub_180088528(v11, (__int64)&v12);
      if ( v17 >= 0x10 )
        sub_180010884((char *)v15, v17 + 1);
      v16 = 0LL;
      v17 = 15LL;
      LOBYTE(v15) = 0;
      if ( *((_QWORD *)&v19 + 1) >= 0x10uLL )
        sub_180010884(v18, *((_QWORD *)&v19 + 1) + 1LL);
      sub_18000C548(&dword_1801FB108);
    }
  }
  return 0LL;
}
