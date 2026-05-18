/*
 * XREFs of sub_180072FD0 @ 0x180072FD0
 * Callers:
 *     sub_180072530 @ 0x180072530 (sub_180072530.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180044798 @ 0x180044798 (sub_180044798.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     sub_180056698 @ 0x180056698 (sub_180056698.c)
 *     sub_18005CD98 @ 0x18005CD98 (sub_18005CD98.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 *     sub_18005D454 @ 0x18005D454 (sub_18005D454.c)
 *     sub_180085680 @ 0x180085680 (sub_180085680.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 *     sub_180097C50 @ 0x180097C50 (sub_180097C50.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180072FD0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, _QWORD *); // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  int v11; // r10d
  _QWORD *v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdi
  void (__fastcall *v19)(__int64, __int64 *, _QWORD *, __int64, _QWORD *); // rbx
  unsigned int v20; // eax
  int v21; // r10d
  __int64 result; // rax
  __int64 v23; // [rsp+30h] [rbp-59h] BYREF
  __int128 v24; // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+50h] [rbp-39h] BYREF
  __int64 v26; // [rsp+58h] [rbp-31h]
  __int128 v27; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp-11h]
  _QWORD v30[4]; // [rsp+80h] [rbp-9h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v28);
  sub_180011C50(v6, &v25);
  if ( v29 )
    sub_180010574(v29);
  v7 = sub_18001246C(&v24, &v25);
  v8(v9, v7);
  v10 = (unsigned int)sub_18001246C(v30, a3);
  v24 = 0LL;
  sub_180097C50(v11, (unsigned int)&v25, (unsigned int)&v24, v10, -1);
  v24 = 0LL;
  sub_18005D0B8(*(_QWORD *)(a1 + 272), (__int64 *)&v24);
  *(_BYTE *)(*(_QWORD *)(a1 + 272) + 465LL) &= 0xF8u;
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 32LL))(*a2, &v27);
  v24 = v27;
  v27 = 0LL;
  sub_18005D26C(*(_QWORD *)(a1 + 272), (__int64 *)&v24);
  if ( (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) != 1.0
    || (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) != 1.0 )
  {
    sub_180056698(*a3, &v23);
    *(_QWORD *)&v24 = 0LL;
    DWORD2(v24) = (int)*(float *)&v23;
    HIDWORD(v24) = (int)*((float *)&v23 + 1);
    sub_18005D454(*(_QWORD *)(a1 + 272), &v24);
  }
  v12 = sub_18001246C(v30, a3);
  sub_180085680(v13, &unk_1801D7EE8, v12);
  v14 = sub_18001246C(v30, (_QWORD *)(a1 + 304));
  sub_180085870(v15, &unk_1801D7EE8, v14);
  sub_180044798(*(_QWORD *)(a1 + 400), *(_DWORD *)(a1 + 448), 0, 2);
  v16 = sub_18001246C(v30, (_QWORD *)(a1 + 400));
  sub_18004CA0C(v17, v16);
  v18 = *(_QWORD *)(a1 + 272);
  v19 = *(void (__fastcall **)(__int64, __int64 *, _QWORD *, __int64, _QWORD *))(*(_QWORD *)v18 + 208LL);
  sub_180010DD0(v30, (__int64)"Display");
  v19(v18, &v25, a2, a1 + 336, v30);
  sub_180011B24((__int64)v30);
  sub_18005CD98(*(_QWORD *)(a1 + 272));
  v24 = 0LL;
  sub_180085680(*(_QWORD *)(a1 + 416), &unk_1801D7EE8, &v24);
  v24 = 0LL;
  sub_180085870(*(_QWORD *)(a1 + 416), &unk_1801D7EE8, &v24);
  v20 = (unsigned int)sub_18001246C(v30, a3);
  v24 = 0LL;
  result = sub_180097C50(v21, (unsigned int)&v25, (unsigned int)&v24, v20, -1);
  if ( *((_QWORD *)&v27 + 1) )
    result = sub_180010530(*((__int64 *)&v27 + 1));
  if ( v26 )
    return sub_180010530(v26);
  return result;
}
