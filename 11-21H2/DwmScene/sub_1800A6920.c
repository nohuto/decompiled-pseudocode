/*
 * XREFs of sub_1800A6920 @ 0x1800A6920
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A6920(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  void (__fastcall *v9)(__int64, __int64, __int64, __int128 *, __int128 *); // r11
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF

  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), &v16);
  v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 56LL);
  v14 = 0LL;
  v10 = a5[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a5[1];
  }
  *(_QWORD *)&v14 = *a5;
  *((_QWORD *)&v14 + 1) = v10;
  v15 = 0LL;
  if ( *((_QWORD *)&v16 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
  v15 = v16;
  v9(a1, a3, a4, &v15, &v14);
  v11 = *(_QWORD *)(a1 + 232);
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = *(_QWORD *)(v11 + 144);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(v11 + 144);
  }
  *a2 = *(_QWORD *)(v11 + 136);
  a2[1] = v12;
  sub_180010910((__int64)&v16);
  return a2;
}
