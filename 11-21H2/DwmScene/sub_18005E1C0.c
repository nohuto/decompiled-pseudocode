/*
 * XREFs of sub_18005E1C0 @ 0x18005E1C0
 * Callers:
 *     sub_18002A8E0 @ 0x18002A8E0 (sub_18002A8E0.c)
 *     sub_18007AAD0 @ 0x18007AAD0 (sub_18007AAD0.c)
 * Callees:
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005E1C0(__int64 a1, unsigned int a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  v6 = a2;
  sub_18002B024((_QWORD *)(a1 + 112), &v6);
  return sub_18002B780(a1, a2);
}
