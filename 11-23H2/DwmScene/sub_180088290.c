/*
 * XREFs of sub_180088290 @ 0x180088290
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_180087F64 @ 0x180087F64 (sub_180087F64.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180088290(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  _BYTE v18[16]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+28h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = sub_180026650(*a2);
    v19 = v5;
    result = sub_1800435C8(a1 + 128, (__int64)&v19);
    if ( result == *(_QWORD *)(a1 + 128) )
    {
      sub_180029550(a1, a2);
      sub_180087F64(*a2, (__int64 *)&v14);
      v6 = v14;
      v7 = *v14;
      v13 = 0LL;
      v8 = *(_QWORD *)(a1 + 120);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v13 = *(_OWORD *)(a1 + 112);
      (*(void (__fastcall **)(_QWORD *, __int128 *))(v7 + 40))(v6, &v13);
      v19 = v5;
      sub_180054270((__int64 *)(a1 + 128), (__int64)v18, &v19);
      v9 = sub_18001246C(&v16, &v14);
      v10 = *v9;
      *v9 = *(_QWORD *)(v11 + 40);
      *(_QWORD *)(v11 + 40) = v10;
      v12 = v9[1];
      v9[1] = *(_QWORD *)(v11 + 48);
      *(_QWORD *)(v11 + 48) = v12;
      if ( v17 )
        sub_180010530(v17);
      result = sub_180029700(a1, v5);
      if ( v15 )
        return sub_180010530(v15);
    }
  }
  return result;
}
