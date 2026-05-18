/*
 * XREFs of sub_18003D350 @ 0x18003D350
 * Callers:
 *     sub_1800E7220 @ 0x1800E7220 (sub_1800E7220.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003D0D8 @ 0x18003D0D8 (sub_18003D0D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18003D350(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 *v6; // rax
  void (__fastcall ****v7)(_QWORD, __int64); // r8
  void (__fastcall ***v8)(_QWORD, __int64); // rdx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4);
      if ( v5 == v4 )
      {
        v11 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v12 = v11;
  v6 = sub_18003D0D8((__int64 *)&v13, &v12, a2);
  v7 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 96);
  if ( (__int64 *)(a1 + 96) != v6 )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))*v6;
    *v6 = 0LL;
    v9 = *v7;
    *v7 = v8;
    if ( v9 )
      (**v9)(v9, 1LL);
  }
  if ( v13 )
    (**v13)(v13, 1LL);
  sub_180010910((__int64)&v11);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  return 1;
}
