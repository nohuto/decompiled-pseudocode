/*
 * XREFs of sub_18003C5C0 @ 0x18003C5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003C5C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF

  v7 = 0LL;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a2 + 8);
  }
  v3 = *(__int64 **)a2;
  *(_QWORD *)&v7 = v3;
  *((_QWORD *)&v7 + 1) = v2;
  v4 = *v3;
  v8 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)&v8 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v8 + 1) = v5;
  (*(void (__fastcall **)(__int64 *, __int128 *))(v4 + 88))(v3, &v8);
  return sub_180010910((__int64)&v7);
}
