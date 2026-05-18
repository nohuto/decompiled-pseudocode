/*
 * XREFs of sub_18007C5DC @ 0x18007C5DC
 * Callers:
 *     sub_18007C690 @ 0x18007C690 (sub_18007C690.c)
 * Callees:
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007C5DC(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 result; // rax

  if ( a4(a2, a1) )
    sub_18003F44C(a2, a1);
  result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    sub_18003F44C(a3, a2);
    result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a2, a1);
    if ( (_BYTE)result )
      return sub_18003F44C(a2, a1);
  }
  return result;
}
