/*
 * XREFs of sub_1800B4100 @ 0x1800B4100
 * Callers:
 *     sub_1800B4B60 @ 0x1800B4B60 (sub_1800B4B60.c)
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 *     sub_1800B53C0 @ 0x1800B53C0 (sub_1800B53C0.c)
 *     sub_1800B55A0 @ 0x1800B55A0 (sub_1800B55A0.c)
 *     sub_1800B6020 @ 0x1800B6020 (sub_1800B6020.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B4100(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  void (__fastcall *v11)(__int64, __int128 *, __int128 *); // r11
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a2[1];
  }
  v7 = *a2;
  v17[0] = a1[18];
  a1[18] = v7;
  v17[1] = a1[19];
  a1[19] = v6;
  sub_180010910((__int64)v17);
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  v9 = *a3;
  v18[0] = a1[20];
  a1[20] = v9;
  v18[1] = a1[21];
  a1[21] = v8;
  sub_180010910((__int64)v18);
  v10 = a1[2];
  v11 = *(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v10 + 80LL);
  v15 = 0LL;
  v12 = a3[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a3[1];
  }
  *(_QWORD *)&v15 = *a3;
  *((_QWORD *)&v15 + 1) = v12;
  v16 = 0LL;
  v13 = a2[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a2[1];
  }
  *(_QWORD *)&v16 = *a2;
  *((_QWORD *)&v16 + 1) = v13;
  v11(v10, &v16, &v15);
  sub_180010910((__int64)a2);
  return sub_180010910((__int64)a3);
}
