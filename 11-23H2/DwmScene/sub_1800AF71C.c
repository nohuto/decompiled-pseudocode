/*
 * XREFs of sub_1800AF71C @ 0x1800AF71C
 * Callers:
 *     sub_180002FC0 @ 0x180002FC0 (sub_180002FC0.c)
 *     sub_180003150 @ 0x180003150 (sub_180003150.c)
 *     sub_1800031C0 @ 0x1800031C0 (sub_1800031C0.c)
 *     sub_180003230 @ 0x180003230 (sub_180003230.c)
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 *     sub_180003310 @ 0x180003310 (sub_180003310.c)
 *     sub_180003380 @ 0x180003380 (sub_180003380.c)
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 *     sub_180003460 @ 0x180003460 (sub_180003460.c)
 *     sub_1800034D0 @ 0x1800034D0 (sub_1800034D0.c)
 *     sub_180003540 @ 0x180003540 (sub_180003540.c)
 *     sub_1800035B0 @ 0x1800035B0 (sub_1800035B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 *     sub_1800AF680 @ 0x1800AF680 (sub_1800AF680.c)
 *     sub_1800AF690 @ 0x1800AF690 (sub_1800AF690.c)
 *     sub_1800AF6A0 @ 0x1800AF6A0 (sub_1800AF6A0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800AF71C()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  void **v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int128 v5; // xmm6
  _QWORD *v6; // rax
  void **v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int128 v11; // [rsp+28h] [rbp-69h] BYREF
  __int128 v12; // [rsp+38h] [rbp-59h]
  __int128 v13; // [rsp+58h] [rbp-39h]
  void *v14[4]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v15[4]; // [rsp+88h] [rbp-9h] BYREF
  void *Src[4]; // [rsp+A8h] [rbp+17h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801D8F98 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8F98);
    if ( dword_1801D8F98 == -1 )
    {
      *(_QWORD *)&v11 = sub_1800AF680();
      *((_QWORD *)&v11 + 1) = v11 + 1380;
      *(_QWORD *)&v13 = 0x100000005LL;
      v1 = sub_1800AF6A0();
      v2 = sub_18007C338(Src, 0LL, v1, 0);
      v3 = sub_18001C6E8(v15, (__int64)"Font/ShaderModel40/", v2);
      v4 = sub_18001C61C(v14, v3, (__int64)"/Pixel");
      v12 = v13;
      sub_18007C3DC((__int64)v4, (__int64)&v11);
      sub_180011B24((__int64)v15);
      sub_180011B24((__int64)Src);
      sub_18000C538(&dword_1801D8F98);
    }
  }
  if ( dword_1801D8F9C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8F9C);
    if ( dword_1801D8F9C == -1 )
    {
      *(_QWORD *)&v11 = sub_1800AF690();
      *((_QWORD *)&v11 + 1) = v11 + 676;
      v5 = v11;
      *(_QWORD *)&v13 = 0x100000001LL;
      v6 = sub_1800AF6A0();
      v7 = sub_18007C338(v14, 0LL, v6, 0);
      v8 = sub_18001C6E8(v15, (__int64)"Font/ShaderModel40/", v7);
      v9 = sub_18001C61C(Src, v8, (__int64)"/Vertex");
      v11 = v5;
      v12 = v13;
      sub_18007C3DC((__int64)v9, (__int64)&v11);
      sub_180011B24((__int64)v15);
      sub_180011B24((__int64)v14);
      sub_18000C538(&dword_1801D8F9C);
    }
  }
  return 0LL;
}
