/*
 * XREFs of sub_1800AF488 @ 0x1800AF488
 * Callers:
 *     sub_180002FF0 @ 0x180002FF0 (sub_180002FF0.c)
 *     sub_180003180 @ 0x180003180 (sub_180003180.c)
 *     sub_1800031F0 @ 0x1800031F0 (sub_1800031F0.c)
 *     sub_180003260 @ 0x180003260 (sub_180003260.c)
 *     sub_1800032D0 @ 0x1800032D0 (sub_1800032D0.c)
 *     sub_180003340 @ 0x180003340 (sub_180003340.c)
 *     sub_1800033B0 @ 0x1800033B0 (sub_1800033B0.c)
 *     sub_180003420 @ 0x180003420 (sub_180003420.c)
 *     sub_180003490 @ 0x180003490 (sub_180003490.c)
 *     sub_180003500 @ 0x180003500 (sub_180003500.c)
 *     sub_180003570 @ 0x180003570 (sub_180003570.c)
 *     sub_1800035E0 @ 0x1800035E0 (sub_1800035E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 *     sub_1800A74EC @ 0x1800A74EC (sub_1800A74EC.c)
 *     sub_1800A769C @ 0x1800A769C (sub_1800A769C.c)
 *     sub_1800A7840 @ 0x1800A7840 (sub_1800A7840.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800AF488()
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
  if ( dword_1801D8CA0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8CA0);
    if ( dword_1801D8CA0 == -1 )
    {
      *(_QWORD *)&v11 = sub_1800A769C();
      *((_QWORD *)&v11 + 1) = v11 + 640;
      *(_QWORD *)&v13 = 0x100000005LL;
      v1 = sub_1800A7840();
      v2 = sub_18007C338(Src, 0LL, v1, 0);
      v3 = sub_18001C6E8(v15, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v2);
      v4 = sub_18001C61C(v14, v3, (__int64)"/Pixel");
      v12 = v13;
      sub_18007C3DC((__int64)v4, (__int64)&v11);
      sub_180011B24((__int64)v15);
      sub_180011B24((__int64)Src);
      sub_18000C538(&dword_1801D8CA0);
    }
  }
  if ( dword_1801D8CA4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8CA4);
    if ( dword_1801D8CA4 == -1 )
    {
      *(_QWORD *)&v11 = sub_1800A74EC();
      *((_QWORD *)&v11 + 1) = v11 + 1516;
      v5 = v11;
      *(_QWORD *)&v13 = 0x100000001LL;
      v6 = sub_1800A7840();
      v7 = sub_18007C338(v14, 0LL, v6, 0);
      v8 = sub_18001C6E8(v15, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v7);
      v9 = sub_18001C61C(Src, v8, (__int64)"/Vertex");
      v11 = v5;
      v12 = v13;
      sub_18007C3DC((__int64)v9, (__int64)&v11);
      sub_180011B24((__int64)v15);
      sub_180011B24((__int64)v14);
      sub_18000C538(&dword_1801D8CA4);
    }
  }
  return 0LL;
}
