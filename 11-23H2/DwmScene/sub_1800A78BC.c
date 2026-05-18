/*
 * XREFs of sub_1800A78BC @ 0x1800A78BC
 * Callers:
 *     sub_180002FD0 @ 0x180002FD0 (sub_180002FD0.c)
 *     sub_180003160 @ 0x180003160 (sub_180003160.c)
 *     sub_1800031D0 @ 0x1800031D0 (sub_1800031D0.c)
 *     sub_180003240 @ 0x180003240 (sub_180003240.c)
 *     sub_1800032B0 @ 0x1800032B0 (sub_1800032B0.c)
 *     sub_180003320 @ 0x180003320 (sub_180003320.c)
 *     sub_180003390 @ 0x180003390 (sub_180003390.c)
 *     sub_180003400 @ 0x180003400 (sub_180003400.c)
 *     sub_180003470 @ 0x180003470 (sub_180003470.c)
 *     sub_1800034E0 @ 0x1800034E0 (sub_1800034E0.c)
 *     sub_180003550 @ 0x180003550 (sub_180003550.c)
 *     sub_1800035C0 @ 0x1800035C0 (sub_1800035C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 *     sub_1800A74DC @ 0x1800A74DC (sub_1800A74DC.c)
 *     sub_1800A74EC @ 0x1800A74EC (sub_1800A74EC.c)
 *     sub_1800A753C @ 0x1800A753C (sub_1800A753C.c)
 *     sub_1800A75CC @ 0x1800A75CC (sub_1800A75CC.c)
 *     sub_1800A76AC @ 0x1800A76AC (sub_1800A76AC.c)
 */

// Hidden C++ exception states: #wind=18
__int64 sub_1800A78BC()
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
  __int128 v10; // xmm6
  _QWORD *v11; // rax
  void **v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int128 v15; // xmm6
  _QWORD *v16; // rax
  void **v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int128 v20; // xmm6
  _QWORD *v21; // rax
  void **v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int128 v25; // xmm6
  _QWORD *v26; // rax
  void **v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int128 v31; // [rsp+28h] [rbp-79h] BYREF
  __int128 v32; // [rsp+38h] [rbp-69h]
  __int128 v33; // [rsp+58h] [rbp-49h]
  void *v34[4]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v35[4]; // [rsp+88h] [rbp-19h] BYREF
  void *Src[4]; // [rsp+A8h] [rbp+7h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801D8C60 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8C60);
    if ( dword_1801D8C60 == -1 )
    {
      *(_QWORD *)&v31 = sub_1800A74DC();
      *((_QWORD *)&v31 + 1) = v31 + 2252;
      *(_QWORD *)&v33 = 0x100000005LL;
      v1 = sub_1800A76AC();
      v2 = sub_18007C338(Src, 1LL, v1, 3);
      v3 = sub_18001C6E8(v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v2);
      v4 = sub_18001C61C(v34, v3, (__int64)"/Pixel");
      v32 = v33;
      sub_18007C3DC((__int64)v4, (__int64)&v31);
      sub_180011B24((__int64)v35);
      sub_180011B24((__int64)Src);
      sub_18000C538(&dword_1801D8C60);
    }
  }
  if ( dword_1801D8C64 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8C64);
    if ( dword_1801D8C64 == -1 )
    {
      *(_QWORD *)&v31 = sub_1800A753C();
      *((_QWORD *)&v31 + 1) = v31 + 3004;
      v5 = v31;
      *(_QWORD *)&v33 = 0x100000005LL;
      v6 = sub_1800A76AC();
      v7 = sub_18007C338(v34, 2LL, v6, 3);
      v8 = sub_18001C6E8(v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v7);
      v9 = sub_18001C61C(Src, v8, (__int64)"/Pixel");
      v31 = v5;
      v32 = v33;
      sub_18007C3DC((__int64)v9, (__int64)&v31);
      sub_180011B24((__int64)v35);
      sub_180011B24((__int64)v34);
      sub_18000C538(&dword_1801D8C64);
    }
  }
  if ( dword_1801D8C68 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8C68);
    if ( dword_1801D8C68 == -1 )
    {
      *(_QWORD *)&v31 = sub_1800A75CC();
      *((_QWORD *)&v31 + 1) = v31 + 4508;
      v10 = v31;
      *(_QWORD *)&v33 = 0x100000005LL;
      v11 = sub_1800A76AC();
      v12 = sub_18007C338(v34, 4LL, v11, 3);
      v13 = sub_18001C6E8(v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v12);
      v14 = sub_18001C61C(Src, v13, (__int64)"/Pixel");
      v31 = v10;
      v32 = v33;
      sub_18007C3DC((__int64)v14, (__int64)&v31);
      sub_180011B24((__int64)v35);
      sub_180011B24((__int64)v34);
      sub_18000C538(&dword_1801D8C68);
    }
  }
  if ( dword_1801D8C6C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8C6C);
    if ( dword_1801D8C6C == -1 )
    {
      *(_QWORD *)&v31 = sub_1800A74EC();
      *((_QWORD *)&v31 + 1) = v31 + 1516;
      v15 = v31;
      *(_QWORD *)&v33 = 0x100000001LL;
      v16 = sub_1800A76AC();
      v17 = sub_18007C338(v34, 1LL, v16, 3);
      v18 = sub_18001C6E8(v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v17);
      v19 = sub_18001C61C(Src, v18, (__int64)"/Vertex");
      v31 = v15;
      v32 = v33;
      sub_18007C3DC((__int64)v19, (__int64)&v31);
      sub_180011B24((__int64)v35);
      sub_180011B24((__int64)v34);
      sub_18000C538(&dword_1801D8C6C);
    }
  }
  if ( dword_1801D8C70 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8C70);
    if ( dword_1801D8C70 == -1 )
    {
      *(_QWORD *)&v31 = sub_1800A74EC();
      *((_QWORD *)&v31 + 1) = v31 + 1516;
      v20 = v31;
      *(_QWORD *)&v33 = 0x100000001LL;
      v21 = sub_1800A76AC();
      v22 = sub_18007C338(v34, 2LL, v21, 3);
      v23 = sub_18001C6E8(v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v22);
      v24 = sub_18001C61C(Src, v23, (__int64)"/Vertex");
      v31 = v20;
      v32 = v33;
      sub_18007C3DC((__int64)v24, (__int64)&v31);
      sub_180011B24((__int64)v35);
      sub_180011B24((__int64)v34);
      sub_18000C538(&dword_1801D8C70);
    }
  }
  if ( dword_1801D8C74 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C5A0(&dword_1801D8C74);
    if ( dword_1801D8C74 == -1 )
    {
      *(_QWORD *)&v31 = sub_1800A74EC();
      *((_QWORD *)&v31 + 1) = v31 + 1516;
      v25 = v31;
      *(_QWORD *)&v33 = 0x100000001LL;
      v26 = sub_1800A76AC();
      v27 = sub_18007C338(v34, 4LL, v26, 3);
      v28 = sub_18001C6E8(v35, (__int64)"ImageProcessingBlur/ShaderModel40/", v27);
      v29 = sub_18001C61C(Src, v28, (__int64)"/Vertex");
      v31 = v25;
      v32 = v33;
      sub_18007C3DC((__int64)v29, (__int64)&v31);
      sub_180011B24((__int64)v35);
      sub_180011B24((__int64)v34);
      sub_18000C538(&dword_1801D8C74);
    }
  }
  return 0LL;
}
