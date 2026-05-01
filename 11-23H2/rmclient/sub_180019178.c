/*
 * XREFs of sub_180019178 @ 0x180019178
 * Callers:
 *     sub_180003A40 @ 0x180003A40 (sub_180003A40.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 *     sub_18001AA68 @ 0x18001AA68 (sub_18001AA68.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180019178(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
