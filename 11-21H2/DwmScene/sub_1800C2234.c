/*
 * XREFs of sub_1800C2234 @ 0x1800C2234
 * Callers:
 *     sub_180002150 @ 0x180002150 (sub_180002150.c)
 *     sub_1800022D0 @ 0x1800022D0 (sub_1800022D0.c)
 *     sub_180002340 @ 0x180002340 (sub_180002340.c)
 *     sub_1800023B0 @ 0x1800023B0 (sub_1800023B0.c)
 *     sub_180002420 @ 0x180002420 (sub_180002420.c)
 *     sub_180002490 @ 0x180002490 (sub_180002490.c)
 *     sub_180002500 @ 0x180002500 (sub_180002500.c)
 *     sub_180002570 @ 0x180002570 (sub_180002570.c)
 *     sub_1800025E0 @ 0x1800025E0 (sub_1800025E0.c)
 *     sub_180002650 @ 0x180002650 (sub_180002650.c)
 *     sub_1800026C0 @ 0x1800026C0 (sub_1800026C0.c)
 *     sub_180002730 @ 0x180002730 (sub_180002730.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800BA69C @ 0x1800BA69C (sub_1800BA69C.c)
 *     sub_1800BA84C @ 0x1800BA84C (sub_1800BA84C.c)
 *     sub_1800BAAC4 @ 0x1800BAAC4 (sub_1800BAAC4.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800C2234()
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
  if ( dword_1801FAEF4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAEF4);
    if ( dword_1801FAEF4 == -1 )
    {
      *(_QWORD *)&v15 = sub_1800BA84C();
      *((_QWORD *)&v15 + 1) = v15 + 640;
      v2 = v15;
      *(_QWORD *)&v19 = 0x100000005LL;
      v3 = sub_1800BAAC4();
      v4 = sub_180088448((__int64 *)&Src, 0LL, v3, 0);
      v5 = (void *)sub_18001DD3C((__int64)&v15, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v4);
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
      sub_18000C548(&dword_1801FAEF4);
    }
  }
  if ( dword_1801FAEF8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5B0(&dword_1801FAEF8);
    if ( dword_1801FAEF8 == -1 )
    {
      *(_QWORD *)&v15 = sub_1800BA69C();
      *((_QWORD *)&v15 + 1) = v15 + 1516;
      v7 = v15;
      *(_QWORD *)&v21 = 0x100000001LL;
      v8 = sub_1800BAAC4();
      v9 = sub_180088448((__int64 *)&v18, 0LL, v8, 0);
      v10 = (void *)sub_18001DD3C((__int64)&v15, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v9);
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
      sub_18000C548(&dword_1801FAEF8);
    }
  }
  return 0LL;
}
