/*
 * XREFs of sub_180020FF0 @ 0x180020FF0
 * Callers:
 *     sub_180020F14 @ 0x180020F14 (sub_180020F14.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180020FF0(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = 0LL;
  a1[3] = 0LL;
  v9 = a3[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  a1[2] = *a3;
  a1[3] = a3[1];
  a1[4] = 0LL;
  a1[5] = 0LL;
  v10 = a4[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  a1[4] = *a4;
  a1[5] = a4[1];
  (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
  sub_180010910((__int64)a2);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  return a1;
}
