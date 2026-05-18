/*
 * XREFs of sub_18000D6E4 @ 0x18000D6E4
 * Callers:
 *     sub_18000E310 @ 0x18000E310 (sub_18000E310.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000D5A4 @ 0x18000D5A4 (sub_18000D5A4.c)
 *     sub_18000D5C4 @ 0x18000D5C4 (sub_18000D5C4.c)
 *     sub_18000E040 @ 0x18000E040 (sub_18000E040.c)
 *     sub_18000EB38 @ 0x18000EB38 (sub_18000EB38.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_18000F6C8 @ 0x18000F6C8 (sub_18000F6C8.c)
 *     sub_18000F82C @ 0x18000F82C (sub_18000F82C.c)
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_18000FD54 @ 0x18000FD54 (sub_18000FD54.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000D6E4(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rax
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_18000F6C8(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  v14 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  sub_18000FD54(&v14, Mutex);
  if ( v14 )
  {
    sub_18000FBC8(&v14, &v15);
    v16 = 0LL;
    v8 = sub_18000F82C(Name, v7, &v16);
    v6 = v8;
    if ( v8 < 0 )
    {
      sub_18000F024(retaddr, 98LL, "wil", (unsigned int)v8);
      sub_18000F024(retaddr, 107LL, "wil", v6);
      v9 = v6;
      v10 = 296LL;
LABEL_5:
      sub_18000F024(retaddr, v10, "wil", v9);
      sub_18000D5C4(&v15);
      goto LABEL_9;
    }
    v11 = (_DWORD *)(4 * v16);
    if ( 4 * v16 )
    {
      *a2 = v11;
      *(_DWORD *)*a2 = *v11 + 1;
    }
    else
    {
      v13 = sub_18000EB38(Name, &v14, a2);
      v6 = v13;
      if ( v13 < 0 )
      {
        v9 = (unsigned int)v13;
        v10 = 304LL;
        goto LABEL_5;
      }
    }
    sub_18000D5C4(&v15);
    v6 = 0;
    goto LABEL_9;
  }
  v6 = sub_18000E040();
LABEL_9:
  sub_18000D5A4(&v14);
  return v6;
}
