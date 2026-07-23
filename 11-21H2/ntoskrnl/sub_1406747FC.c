/*
 * XREFs of sub_1406747FC @ 0x1406747FC
 * Callers:
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     sub_14029A240 @ 0x14029A240 (sub_14029A240.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140672A64 @ 0x140672A64 (sub_140672A64.c)
 *     sub_140672A7C @ 0x140672A7C (sub_140672A7C.c)
 *     sub_1406749A4 @ 0x1406749A4 (sub_1406749A4.c)
 *     sub_140704E08 @ 0x140704E08 (sub_140704E08.c)
 *     sub_1409B3020 @ 0x1409B3020 (sub_1409B3020.c)
 */

__int64 __fastcall sub_1406747FC(ULONG_PTR BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned __int16 v8; // di
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // r14
  unsigned __int16 v13; // ax
  __int64 v14; // r12
  __int64 v15; // r13
  _DWORD *v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  _DWORD *v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  _OWORD v22[3]; // [rsp+50h] [rbp-78h] BYREF

  v21 = a4;
  memset(v22, 0, sizeof(v22));
  v7 = 0;
  LODWORD(v18) = 0;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1408) || (v8 = *(_WORD *)(BugCheckParameter1 + 2412)) == 0 )
    v8 = -31132;
  v9 = sub_140704E08(v8);
  if ( !v9 )
    return 3221225485LL;
  sub_14029A240(v9, 0LL, &v18);
  v20 = *(_DWORD **)(a2 + 16);
  v11 = ~((unsigned int)v18 - 1LL) & ((unsigned __int64)v20 + (unsigned int)v18 + 3);
  v18 = *(_QWORD *)(a2 + 40);
  v12 = a3[31];
  if ( v12 == qword_140D07170 )
  {
    v13 = sub_140672A7C(BugCheckParameter1);
    v12 = *((_QWORD *)sub_140672A64(v13) + 4);
  }
  v14 = a3[16];
  v15 = a3[17];
  sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v22, v10);
  v16 = v20;
  *(_QWORD *)(v21 + 5256) = v20;
  *v16 = v8 << 16;
  if ( v8 == 332 )
  {
    sub_1406749A4(BugCheckParameter1, v11, v12, v18, v14, v15);
  }
  else if ( v8 == 452 )
  {
    sub_1409B3020(BugCheckParameter1, v11, v12, v18, v14, v15);
  }
  else
  {
    v7 = -1073741811;
    v19 = -1073741811;
  }
  sub_1402D0930((__int64)v22, 0LL);
  return v7;
}
