/*
 * XREFs of sub_1800852BF @ 0x1800852BF
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800852BF(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
