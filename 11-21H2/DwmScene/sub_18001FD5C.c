/*
 * XREFs of sub_18001FD5C @ 0x18001FD5C
 * Callers:
 *     sub_1800FFE88 @ 0x1800FFE88 (sub_1800FFE88.c)
 *     sub_18010333A @ 0x18010333A (sub_18010333A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001FD5C(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
