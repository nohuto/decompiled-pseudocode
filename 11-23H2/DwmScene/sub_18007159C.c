/*
 * XREFs of sub_18007159C @ 0x18007159C
 * Callers:
 *     sub_180071320 @ 0x180071320 (sub_180071320.c)
 * Callees:
 *     sub_18003ADB0 @ 0x18003ADB0 (sub_18003ADB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007159C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 result; // rax

  if ( a4(a2, a1) )
    sub_18003ADB0();
  result = ((__int64 (__fastcall *)(__int64, __int64))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    sub_18003ADB0();
    result = ((__int64 (__fastcall *)(__int64, __int64))a4)(a2, a1);
    if ( (_BYTE)result )
      return sub_18003ADB0();
  }
  return result;
}
