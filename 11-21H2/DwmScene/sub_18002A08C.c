/*
 * XREFs of sub_18002A08C @ 0x18002A08C
 * Callers:
 *     sub_180011740 @ 0x180011740 (sub_180011740.c)
 *     sub_1800DF800 @ 0x1800DF800 (sub_1800DF800.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002A08C(__int64 *a1, _QWORD *a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-10h] BYREF

  sub_18002BCC0(a1, 1LL);
  sub_18002BCC0(v5, (unsigned int)(v4 + 2));
  v6 = *a2;
  v7 = *(_QWORD *)(*a2 + 120LL);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(v6 + 120);
  }
  v8 = *(_QWORD *)(v6 + 112);
  v23[0] = v8;
  v23[1] = v7;
  sub_180010910((__int64)v23);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_18002A240((_DWORD)a1, v11, v10, v9, v8 != 0 ? 0x80 : 0, 0LL);
  v12 = *a2;
  v13 = a1[17];
  v21 = 0LL;
  v14 = *(_QWORD *)(v12 + 104);
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  v21 = *(_OWORD *)(v12 + 96);
  sub_18005D1D8(v13, &v21);
  v15 = a1[19];
  if ( v15 )
  {
    v16 = *a2;
    v22 = 0LL;
    v17 = *(_QWORD *)(v16 + 120);
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v22 = *(_OWORD *)(v16 + 112);
    sub_18005D1D8(v15, &v22);
  }
  v18 = (_QWORD *)sub_180029E58(a1 + 15, *(_DWORD *)(*a2 + 88LL));
  v19 = a2[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a2[1];
  }
  v24[0] = *v18;
  *v18 = *a2;
  v24[1] = v18[1];
  v18[1] = v19;
  return sub_180010910((__int64)v24);
}
