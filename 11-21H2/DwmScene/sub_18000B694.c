/*
 * XREFs of sub_18000B694 @ 0x18000B694
 * Callers:
 *     sub_18000B14C @ 0x18000B14C (sub_18000B14C.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BEB0 (-__uncaught_exception@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000B694(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, _QWORD, __int64),
        unsigned int a5,
        __int64 a6)
{
  int v10; // eax

  LOBYTE(v10) = __uncaught_exception();
  if ( !v10 && a2 == 1 )
    a4(a1, 0LL, a3);
  return o__seh_filter_dll(a5, a6);
}
