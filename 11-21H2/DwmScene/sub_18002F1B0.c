/*
 * XREFs of sub_18002F1B0 @ 0x18002F1B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180026AE4 @ 0x180026AE4 (sub_180026AE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18002F1B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rcx

  v2 = a2;
  v3 = a1 + 16;
  v4 = a1[17];
  if ( v4 == a1[18] )
  {
    sub_180026AE4(a1 + 16, a1[17], a2);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = 0LL;
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
    if ( v5 )
      *(_QWORD *)(v4 + 56) = (**v5)(v5, v4);
    v3[1] += 64LL;
  }
  v6 = *(_QWORD *)(v2 + 56);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
}
