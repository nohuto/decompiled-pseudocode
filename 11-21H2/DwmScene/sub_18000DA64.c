/*
 * XREFs of sub_18000DA64 @ 0x18000DA64
 * Callers:
 *     sub_18000E5E0 @ 0x18000E5E0 (sub_18000E5E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000D464 @ 0x18000D464 (sub_18000D464.c)
 *     sub_18000DD84 @ 0x18000DD84 (sub_18000DD84.c)
 *     sub_18000E350 @ 0x18000E350 (sub_18000E350.c)
 *     sub_18000EDBC @ 0x18000EDBC (sub_18000EDBC.c)
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_18000FE54 @ 0x18000FE54 (sub_18000FE54.c)
 *     sub_18000FEFC @ 0x18000FEFC (sub_18000FEFC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000DA64(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  __int64 (__fastcall *Mutex)(); // rax
  __int64 (__fastcall *v6)(); // rdi
  DWORD v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(); // rbx
  int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 (__fastcall *v16)(); // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall *v18[2])(_QWORD); // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_18000FE54(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  Mutex = (__int64 (__fastcall *)())CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v6 = Mutex;
  v18[0] = (__int64 (__fastcall *)(_QWORD))Mutex;
  if ( !Mutex )
    return sub_18000E350();
  v8 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v8 == 258 )
  {
    v10 = 0LL;
  }
  else
  {
    if ( (v8 & 0xFFFFFF7F) != 0 )
      sub_18000DD84(retaddr);
    v10 = v6;
  }
  v17 = v10;
  v16 = 0LL;
  v11 = sub_18000FEFC(Name, v9, &v16);
  v12 = v11;
  if ( v11 < 0 )
  {
    sub_18000F364(retaddr, 98LL, "wil", (unsigned int)v11);
    sub_18000F364(retaddr, 107LL, "wil", v12);
    sub_18000F364(retaddr, 294LL, "wil", v12);
    if ( v10 )
    {
      v16 = v10;
      v18[0] = (__int64 (__fastcall *)(_QWORD))sub_18000F2F0;
      sub_18000D464(v18, &v16);
    }
    v16 = v6;
    v18[0] = (__int64 (__fastcall *)(_QWORD))sub_18000DD30;
    sub_18000D464(v18, &v16);
    return v12;
  }
  v13 = (_DWORD *)(4LL * (_QWORD)v16);
  if ( 4LL * (_QWORD)v16 )
  {
    *a2 = v13;
    *(_DWORD *)*a2 = *v13 + 1;
LABEL_13:
    if ( v10 )
    {
      v17 = v10;
      v16 = sub_18000F2F0;
      sub_18000D464((__int64 (__fastcall **)(_QWORD))&v16, &v17);
    }
    if ( v18[0] )
    {
      v17 = (__int64 (__fastcall *)())v18[0];
      v16 = sub_18000DD30;
      sub_18000D464((__int64 (__fastcall **)(_QWORD))&v16, &v17);
    }
    return 0LL;
  }
  v14 = sub_18000EDBC(Name, v18, a2);
  v15 = v14;
  if ( v14 >= 0 )
    goto LABEL_13;
  sub_18000F364(retaddr, 302LL, "wil", (unsigned int)v14);
  if ( v10 )
  {
    v16 = v10;
    v17 = sub_18000F2F0;
    sub_18000D464((__int64 (__fastcall **)(_QWORD))&v17, &v16);
  }
  if ( v18[0] )
  {
    v17 = (__int64 (__fastcall *)())v18[0];
    v16 = sub_18000DD30;
    sub_18000D464((__int64 (__fastcall **)(_QWORD))&v16, &v17);
  }
  return v15;
}
