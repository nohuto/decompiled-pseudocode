/*
 * XREFs of ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AU?$pair@PEAG_K@2@_K@Z @ 0x18004F1C0
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800494E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  void *v8; // rax

  if ( (_QWORD *)*a1 == a1 + 2 )
    v4 = 7LL;
  else
    v4 = (__int64)(a1[2] - *a1) >> 1;
  v5 = 2 * v4 + 1;
  if ( v5 < a3 )
    v5 = a3;
  if ( v5 <= 0x3FFFFFFFFFFFFFF7LL )
  {
    v6 = v5 + 1;
    v7 = v6;
    if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = 0LL;
      goto LABEL_13;
    }
LABEL_11:
    v8 = operator new(2 * v7, (const struct std::nothrow_t *)&std::nothrow);
LABEL_13:
    *a2 = v8;
    a2[1] = v6;
    return a2;
  }
  if ( a3 <= 0x3FFFFFFFFFFFFFF7LL )
  {
    v6 = 0x3FFFFFFFFFFFFFF8LL;
    v7 = 0x3FFFFFFFFFFFFFF8LL;
    goto LABEL_11;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return a2;
}
