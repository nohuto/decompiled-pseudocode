/*
 * XREFs of sub_180066E20 @ 0x180066E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800347FC @ 0x1800347FC (sub_1800347FC.c)
 *     sub_180034854 @ 0x180034854 (sub_180034854.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180066E20(__int64 a1, int a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(__int64, _QWORD *, void *, _QWORD *); // rbx
  _QWORD *v6; // rax
  void **v7; // rdx
  void **v8; // rcx
  int i; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, _QWORD *, void *, _QWORD *); // rbx
  _QWORD *v13; // rax
  __int64 *v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-79h] BYREF
  __int64 v17; // [rsp+38h] [rbp-71h]
  _QWORD v18[4]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+60h] [rbp-49h] BYREF
  __int64 v20; // [rsp+68h] [rbp-41h]
  __int64 v21; // [rsp+70h] [rbp-39h]
  unsigned __int64 v22; // [rsp+78h] [rbp-31h]
  void *Buf1[2]; // [rsp+80h] [rbp-29h] BYREF
  size_t Size; // [rsp+90h] [rbp-19h]
  unsigned __int64 v25; // [rsp+98h] [rbp-11h]
  _QWORD v26[4]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v27[4]; // [rsp+C0h] [rbp+17h] BYREF

  v4 = sub_180034094(a1, a2);
  v5 = *(void (__fastcall **)(__int64, _QWORD *, void *, _QWORD *))(*(_QWORD *)v4 + 96LL);
  v6 = sub_18001E3BC(v26, (__int64)&unk_180106A04);
  v5(v4, v27, &unk_1801D5C28, v6);
  sub_18002E0A8(Buf1, v27);
  v7 = &qword_1801D8828;
  if ( (unsigned __int64)qword_1801D8840 >= 0x10 )
    v7 = (void **)qword_1801D8828;
  v8 = Buf1;
  if ( v25 >= 0x10 )
    v8 = (void **)Buf1[0];
  if ( Size == qword_1801D8838 && !memcmp(v8, v7, Size) )
  {
    sub_1800347FC(a1, &v16, 0);
    for ( i = 0; i < (int)sub_180034854(a1); ++i )
    {
      sub_1800347FC(v10, &v19, i);
      if ( *(_DWORD *)(v19 + 112) == a2 )
      {
        sub_1800124F8(&v16, &v19);
        if ( v20 )
          sub_180010530(v20);
        break;
      }
      if ( v20 )
        sub_180010530(v20);
    }
    v11 = sub_1800628C8(v16);
    v12 = *(void (__fastcall **)(__int64, _QWORD *, void *, _QWORD *))(*(_QWORD *)v4 + 96LL);
    v13 = sub_18001E3BC(v18, (__int64)&unk_180106A04);
    v12(v4, v26, &unk_1801D5C08, v13);
    if ( !sub_18001F84C((__int64)v26) )
    {
      sub_18002E0A8(&v19, v26);
      v14 = &v19;
      if ( v22 >= 0x10 )
        v14 = (__int64 *)v19;
      sub_1800900BC(*(_QWORD *)(v11 + 120), v14, v21, Buf1);
      sub_180011B24((__int64)&v19);
    }
    sub_180013348((__int64)v26);
    if ( v17 )
      sub_180010530(v17);
  }
  sub_180011B24((__int64)Buf1);
  return sub_180013348((__int64)v27);
}
