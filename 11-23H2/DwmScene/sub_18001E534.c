/*
 * XREFs of sub_18001E534 @ 0x18001E534
 * Callers:
 *     sub_18001EFA8 @ 0x18001EFA8 (sub_18001EFA8.c)
 *     sub_18001F098 @ 0x18001F098 (sub_18001F098.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001E534(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
