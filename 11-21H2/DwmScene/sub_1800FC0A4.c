/*
 * XREFs of sub_1800FC0A4 @ 0x1800FC0A4
 * Callers:
 *     sub_1800A2E10 @ 0x1800A2E10 (sub_1800A2E10.c)
 *     sub_1800A30A0 @ 0x1800A30A0 (sub_1800A30A0.c)
 * Callees:
 *     sub_1800FC02C @ 0x1800FC02C (sub_1800FC02C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800FC0A4(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  _QWORD *v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  v3 = sub_1800FC02C(&v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1LL);
  return a2;
}
