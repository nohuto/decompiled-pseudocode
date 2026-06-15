/*
 * XREFs of sub_18008528F @ 0x18008528F
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18008528F(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a5 + 56);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  JUMPOUT(0x1800093CALL);
}
