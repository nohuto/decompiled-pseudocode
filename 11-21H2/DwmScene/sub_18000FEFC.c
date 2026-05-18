/*
 * XREFs of sub_18000FEFC @ 0x18000FEFC
 * Callers:
 *     sub_18000DA64 @ 0x18000DA64 (sub_18000DA64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000CAB8 @ 0x18000CAB8 (sub_18000CAB8.c)
 *     sub_18000D464 @ 0x18000D464 (sub_18000D464.c)
 *     sub_18000E6AC @ 0x18000E6AC (sub_18000E6AC.c)
 *     sub_18000F344 @ 0x18000F344 (sub_18000F344.c)
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_18000FD34 @ 0x18000FD34 (sub_18000FD34.c)
 */

__int64 __fastcall sub_18000FEFC(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  WCHAR *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // r9
  WCHAR v7; // ax
  WCHAR *v8; // rax
  BOOL (__fastcall *v9)(void *); // rax
  BOOL (__fastcall *v10)(void *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 (__fastcall *v15)(_QWORD); // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 (__fastcall *v22)(_QWORD); // [rsp+20h] [rbp-E0h] BYREF
  BOOL (__fastcall *v23)(void *); // [rsp+28h] [rbp-D8h] BYREF
  BOOL (__fastcall *v24)(void *); // [rsp+30h] [rbp-D0h] BYREF
  BOOL (__fastcall *v25)(void *); // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+188h]

  *a3 = 0LL;
  v3 = Name;
  v4 = a1 - (_QWORD)Name;
  v6 = 260LL;
  do
  {
    if ( v6 == -2147483386 )
      break;
    v7 = *(WCHAR *)((char *)v3 + v4);
    if ( !v7 )
      break;
    *v3++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = v3 - 1;
  if ( v6 )
    v8 = v3;
  *v8 = 0;
  sub_18000FD34(Name, (__int64)v3, (__int64)L"_p0");
  v9 = (BOOL (__fastcall *)(void *))OpenSemaphoreW(0x1F0003u, 0, Name);
  v10 = v9;
  if ( !v9 )
  {
    if ( GetLastError() != 2 )
      return sub_18000F344(retaddr, 201, v20, v21);
    return 0LL;
  }
  LODWORD(v23) = 0;
  LODWORD(v24) = 0;
  v11 = sub_18000E6AC(v9, (int *)&v23);
  v13 = v11;
  if ( v11 < 0 )
  {
    sub_18000F364(retaddr, 207LL, (__int64)"wil", (unsigned int)v11);
    v23 = v10;
    v24 = sub_18000DD30;
    sub_18000D464((__int64 (__fastcall **)(_QWORD))&v24, &v23);
    return v13;
  }
  sub_18000FD34(Name, v12, (__int64)L"h");
  v22 = (__int64 (__fastcall *)(_QWORD))OpenSemaphoreW(0x1F0003u, 0, Name);
  v15 = v22;
  if ( !sub_18000CAB8(&v22) )
  {
    v19 = sub_18000E6AC(v15, (int *)&v24);
    v18 = v19;
    if ( v19 < 0 )
    {
      sub_18000F364(retaddr, 215LL, (__int64)"wil", (unsigned int)v19);
      goto LABEL_12;
    }
    if ( v15 )
    {
      v22 = v15;
      v25 = sub_18000DD30;
      sub_18000D464((__int64 (__fastcall **)(_QWORD))&v25, &v22);
    }
    v25 = v10;
    *a3 = (int)v23 | (unsigned __int64)((__int64)(int)v24 << 31);
    v22 = (__int64 (__fastcall *)(_QWORD))sub_18000DD30;
    sub_18000D464(&v22, &v25);
    return 0LL;
  }
  v18 = sub_18000F344(retaddr, 213, v16, v17);
LABEL_12:
  if ( v15 )
  {
    v22 = v15;
    v23 = sub_18000DD30;
    sub_18000D464((__int64 (__fastcall **)(_QWORD))&v23, &v22);
  }
  v22 = (__int64 (__fastcall *)(_QWORD))v10;
  v23 = sub_18000DD30;
  sub_18000D464((__int64 (__fastcall **)(_QWORD))&v23, &v22);
  return v18;
}
