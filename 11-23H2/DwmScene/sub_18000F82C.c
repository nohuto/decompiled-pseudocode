/*
 * XREFs of sub_18000F82C @ 0x18000F82C
 * Callers:
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000CAB8 @ 0x18000CAB8 (sub_18000CAB8.c)
 *     sub_18000D5A4 @ 0x18000D5A4 (sub_18000D5A4.c)
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 *     sub_18000F004 @ 0x18000F004 (sub_18000F004.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_18000F5DC @ 0x18000F5DC (sub_18000F5DC.c)
 *     sub_18000F714 @ 0x18000F714 (sub_18000F714.c)
 */

__int64 __fastcall sub_18000F82C(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  HANDLE v6; // rax
  __int64 v7; // r8
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // edi
  void *v12; // r8
  int v13; // r9d
  int v14; // eax
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 retaddr; // [rsp+280h] [rbp+178h]

  v3 = 0;
  *a3 = 0LL;
  sub_18000F714(Name, 260LL, (__int64)a3, a1);
  sub_18000F5DC(Name, v5, (__int64)L"_p0");
  v6 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v18[0] = v6;
  if ( v6 )
  {
    v16 = 0LL;
    v9 = sub_18000E3DC(v6, (int *)&v16 + 1);
    v11 = v9;
    if ( v9 >= 0 )
    {
      sub_18000F5DC(Name, v10, (__int64)L"h");
      v17 = OpenSemaphoreW(0x1F0003u, 0, Name);
      if ( sub_18000CAB8(&v17) )
      {
        v3 = sub_18000F004(retaddr, 213, (__int64)v12, v13);
        sub_18000D5A4(&v17);
        goto LABEL_12;
      }
      v14 = sub_18000E3DC(v12, (int *)&v16);
      v11 = v14;
      if ( v14 >= 0 )
      {
        sub_18000D5A4(&v17);
        *a3 = SHIDWORD(v16) | (unsigned __int64)((__int64)(int)v16 << 31);
        goto LABEL_12;
      }
      sub_18000F024(retaddr, 215LL, (__int64)"wil", (unsigned int)v14);
      sub_18000D5A4(&v17);
    }
    else
    {
      sub_18000F024(retaddr, 207LL, (__int64)"wil", (unsigned int)v9);
    }
    v3 = v11;
  }
  else if ( GetLastError() != 2 )
  {
    v3 = sub_18000F004(retaddr, 201, v7, v8);
  }
LABEL_12:
  sub_18000D5A4(v18);
  return v3;
}
