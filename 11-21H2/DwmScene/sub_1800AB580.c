/*
 * XREFs of sub_1800AB580 @ 0x1800AB580
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001FF9C @ 0x18001FF9C (sub_18001FF9C.c)
 *     sub_1800A8EC8 @ 0x1800A8EC8 (sub_1800A8EC8.c)
 *     sub_1800A8FEC @ 0x1800A8FEC (sub_1800A8FEC.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_1800AB580(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *v7; // rcx
  __m128i v8; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+50h] [rbp-B0h]
  __int64 v11[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v12; // [rsp+78h] [rbp-88h]
  __int64 v13[4]; // [rsp+80h] [rbp-80h] BYREF
  char v14; // [rsp+A0h] [rbp-60h]
  __int64 v15[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v16; // [rsp+C8h] [rbp-38h]
  __int64 v17[4]; // [rsp+D0h] [rbp-30h] BYREF
  char v18; // [rsp+F0h] [rbp-10h]
  __int64 v19[4]; // [rsp+F8h] [rbp-8h] BYREF
  char v20; // [rsp+118h] [rbp+18h]
  __int64 v21[4]; // [rsp+120h] [rbp+20h] BYREF
  char v22; // [rsp+140h] [rbp+40h]
  __int64 v23[4]; // [rsp+148h] [rbp+48h] BYREF
  char v24; // [rsp+168h] [rbp+68h]
  __int64 v25[4]; // [rsp+170h] [rbp+70h] BYREF
  char v26; // [rsp+190h] [rbp+90h]
  __int64 v27[4]; // [rsp+198h] [rbp+98h] BYREF
  char v28; // [rsp+1B8h] [rbp+B8h]
  __int64 v29[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v30; // [rsp+1E0h] [rbp+E0h]
  char v31; // [rsp+1E8h] [rbp+E8h] BYREF

  if ( dword_1801FADF8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
    goto LABEL_7;
  while ( 1 )
  {
    v3 = (__int64)a2;
    if ( (unsigned __int64)a2[3] >= 0x10 )
      v3 = *a2;
    v4 = sub_18001FF9C(v3, a2[2]);
    sub_1800A8EC8(v5, v8.m128i_i64, a2, v4);
    if ( v8.m128i_i64[1] )
      break;
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_7:
    sub_18000C5B0(&dword_1801FADF8);
    if ( dword_1801FADF8 == -1 )
    {
      sub_18001875C(v9, (__int64)&qword_1801F4C78);
      v10 = 0;
      sub_18001875C(v11, (__int64)&qword_1801F5DB8);
      v12 = 0;
      sub_18001875C(v13, (__int64)&qword_1801F5D58);
      v14 = 0;
      sub_18001875C(v15, (__int64)&qword_1801F4CB8);
      v16 = 2;
      sub_18001875C(v17, (__int64)&qword_1801F5CD8);
      v18 = 2;
      sub_18001875C(v19, (__int64)&qword_1801F4C98);
      v20 = 3;
      sub_18001875C(v21, (__int64)&qword_1801F5CF8);
      v22 = 3;
      sub_18001875C(v23, (__int64)&qword_1801F4CD8);
      v24 = 1;
      sub_18001875C(v25, (__int64)&qword_1801F5DD8);
      v26 = 1;
      sub_18001875C(v27, (__int64)&qword_1801F4D18);
      v28 = 5;
      sub_18001875C(v29, (__int64)&qword_1801F5D18);
      v30 = 5;
      v8.m128i_i64[0] = (__int64)v9;
      v8.m128i_i64[1] = (__int64)&v31;
      sub_1800A8FEC(v7, &v8);
      sub_18000B4C0((__int64)v9, 40LL, 11LL);
      atexit(sub_18011B850);
      sub_18000C548(&dword_1801FADF8);
    }
  }
  return *(_BYTE *)(v8.m128i_i64[1] + 48);
}
