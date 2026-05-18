/*
 * XREFs of sub_1800B4044 @ 0x1800B4044
 * Callers:
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B4044(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v5 = *a2;
  v11[0] = a1[18];
  a1[18] = v5;
  v11[1] = a1[19];
  a1[19] = v4;
  sub_180010910((__int64)v11);
  v6 = (__int64 *)a1[2];
  v7 = *v6;
  v10 = 0LL;
  v8 = a2[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v8;
  (*(void (__fastcall **)(__int64 *, __int128 *))(v7 + 72))(v6, &v10);
  return sub_180010910((__int64)a2);
}
