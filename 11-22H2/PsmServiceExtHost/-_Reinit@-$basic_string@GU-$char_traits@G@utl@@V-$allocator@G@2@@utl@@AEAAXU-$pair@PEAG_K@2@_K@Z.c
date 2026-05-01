/*
 * XREFs of ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXU?$pair@PEAG_K@2@_K@Z @ 0x18004F468
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AAAC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
  v7 = *a2;
  v8 = a2[1] - 1;
  *(_QWORD *)a1 = *a2;
  result = v7 + 2 * a3;
  *(_QWORD *)(a1 + 8) = result;
  *v3 = v7 + 2 * v8;
  return result;
}
