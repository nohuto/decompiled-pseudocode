/*
 * XREFs of sub_180062B08 @ 0x180062B08
 * Callers:
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180062B08(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  *(_BYTE *)a2 = *(_BYTE *)a1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 32) + 8LL))(*(_QWORD *)(a1 + 32), v9);
  v5 = *v4;
  v6 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  v8[0] = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v5;
  v8[1] = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v6;
  sub_180010910((__int64)v8);
  sub_180010910((__int64)v9);
  return a2;
}
