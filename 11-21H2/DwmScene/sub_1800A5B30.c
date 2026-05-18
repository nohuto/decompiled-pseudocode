/*
 * XREFs of sub_1800A5B30 @ 0x1800A5B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_18007BF08 @ 0x18007BF08 (sub_18007BF08.c)
 *     sub_1800A573C @ 0x1800A573C (sub_1800A573C.c)
 *     sub_1800A585C @ 0x1800A585C (sub_1800A585C.c)
 *     sub_1800A5DE0 @ 0x1800A5DE0 (sub_1800A5DE0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800A5B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 *v8; // rax
  _QWORD *v9; // r12
  char *v10; // rcx
  _QWORD *v11; // rsi
  char *v12; // rbx
  char *v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // rdx
  char *v21; // r8
  char *v22; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r8
  char v26; // [rsp+30h] [rbp-A9h]
  __int64 v27; // [rsp+38h] [rbp-A1h] BYREF
  int v28; // [rsp+40h] [rbp-99h]
  __int128 v29; // [rsp+48h] [rbp-91h] BYREF
  __int64 v30; // [rsp+58h] [rbp-81h]
  _OWORD v31[2]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v32; // [rsp+80h] [rbp-59h]
  _QWORD v33[4]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-31h] BYREF

  v4 = a4;
  v32 = a2;
  v8 = (__int64 *)sub_18004871C(a4, v31);
  sub_180040FB8(*v8, (__int64)&v27);
  sub_180010910((__int64)v31);
  v29 = 0LL;
  v30 = 0LL;
  *(_QWORD *)&v31[0] = v27;
  DWORD2(v31[0]) = v28;
  sub_1800A5DE0(a1, v4, (unsigned int)v31, (unsigned int)&v29, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      sub_1800113D0(v33, "Unsupported sorting order");
      v24 = sub_1800113D0(
              v31,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\dist"
              "ancefromcamerascenenodetraversal.cpp");
      sub_180079B60(pExceptionObject, (__int64)v24, v25, (const char *)v33, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_1800A573C((float *)v29, *((float **)&v29 + 1), v26);
  }
  else
  {
    sub_1800A585C((float *)v29, *((float **)&v29 + 1), v26);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = (_QWORD *)*((_QWORD *)&v29 + 1);
  v10 = (char *)v29;
  if ( (_QWORD)v29 != *((_QWORD *)&v29 + 1) )
  {
    v11 = (_QWORD *)(v29 + 8);
    v12 = 0LL;
    do
    {
      v13 = *(char **)(a2 + 16);
      if ( v12 == v13 )
      {
        v14 = (__int64)&v12[-*(_QWORD *)a2] >> 3;
        if ( v14 == 0x1FFFFFFFFFFFFFFFLL )
          sub_180012170();
        v15 = v14 + 1;
        v16 = (__int64)&v13[-*(_QWORD *)a2] >> 3;
        if ( v16 <= 0x1FFFFFFFFFFFFFFFLL - (v16 >> 1) )
        {
          v18 = (v16 >> 1) + v16;
          v17 = v14 + 1;
          if ( v18 >= v15 )
            v17 = v18;
          if ( v17 > 0x1FFFFFFFFFFFFFFFLL )
            sub_1800120D4();
        }
        else
        {
          v17 = 0x1FFFFFFFFFFFFFFFLL;
        }
        v27 = 8 * v17;
        v19 = (char *)sub_180011088(8 * v17);
        *(_QWORD *)&v19[8 * v14] = *v11;
        v20 = *(_QWORD *)(a2 + 8);
        v21 = v19;
        v22 = *(char **)a2;
        if ( v12 != (char *)v20 )
        {
          sub_18007BF08(v22, (__int64)v12, v19);
          v21 = &v19[8 * v14 + 8];
          v20 = *(_QWORD *)(a2 + 8);
          v22 = v12;
        }
        sub_18007BF08(v22, v20, v21);
        if ( *(_QWORD *)a2 )
          sub_180010884(*(char **)a2, (*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_QWORD *)a2 = v19;
        v12 = &v19[8 * v15];
        *(_QWORD *)(a2 + 8) = v12;
        *(_QWORD *)(a2 + 16) = &v19[v27];
      }
      else
      {
        *(_QWORD *)v12 = *v11;
        *(_QWORD *)(a2 + 8) += 8LL;
        v12 = *(char **)(a2 + 8);
      }
      v11 += 2;
    }
    while ( v11 - 1 != v9 );
    v10 = (char *)v29;
  }
  if ( v10 )
    sub_180010884(v10, (v30 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
  return a2;
}
