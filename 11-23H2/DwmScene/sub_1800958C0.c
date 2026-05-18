/*
 * XREFs of sub_1800958C0 @ 0x1800958C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18004330C @ 0x18004330C (sub_18004330C.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_180070C2C @ 0x180070C2C (sub_180070C2C.c)
 *     sub_180095580 @ 0x180095580 (sub_180095580.c)
 *     sub_18009564C @ 0x18009564C (sub_18009564C.c)
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800958C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  _QWORD *v8; // rdi
  __int64 *v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r8
  char v15; // [rsp+30h] [rbp-99h]
  __int128 v16; // [rsp+38h] [rbp-91h] BYREF
  __int64 v17; // [rsp+48h] [rbp-81h]
  __int64 v18; // [rsp+50h] [rbp-79h] BYREF
  int v19; // [rsp+58h] [rbp-71h]
  __int64 v20; // [rsp+60h] [rbp-69h] BYREF
  __int64 v21; // [rsp+68h] [rbp-61h]
  __int64 *v22; // [rsp+80h] [rbp-49h]
  _QWORD v23[4]; // [rsp+88h] [rbp-41h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-21h] BYREF

  v4 = a4;
  v22 = a2;
  v8 = 0LL;
  v9 = sub_18004330C(a4, &v20);
  sub_18003C3B4(*v9, (__int64)&v18);
  if ( v21 )
    sub_180010530(v21);
  v16 = 0LL;
  v17 = 0LL;
  v20 = v18;
  LODWORD(v21) = v19;
  sub_180095A60(a1, v4, (unsigned int)&v20, (unsigned int)&v16, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      sub_180010DD0(v23, (__int64)"Unsupported sorting order");
      v13 = sub_180010DD0(
              &v20,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\eng"
                       "ine\\distancefromcamerascenenodetraversal.cpp");
      sub_18006ED7C(pExceptionObject, (__int64)v13, v14, (const char *)v23, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_180095580((char *)v16, *((char **)&v16 + 1), v15);
  }
  else
  {
    sub_18009564C((char *)v16, *((char **)&v16 + 1), v15);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v10 = (_QWORD *)*((_QWORD *)&v16 + 1);
  if ( (_QWORD)v16 != *((_QWORD *)&v16 + 1) )
  {
    v11 = (_QWORD *)(v16 + 8);
    do
    {
      if ( v8 == (_QWORD *)a2[2] )
      {
        sub_180070C2C(a2, (__int64)v8, v11);
      }
      else
      {
        *v8 = *v11;
        a2[1] += 8LL;
      }
      v8 = (_QWORD *)a2[1];
      v11 += 2;
    }
    while ( v11 - 1 != v10 );
  }
  sub_18002A4FC((__int64)&v16);
  return a2;
}
