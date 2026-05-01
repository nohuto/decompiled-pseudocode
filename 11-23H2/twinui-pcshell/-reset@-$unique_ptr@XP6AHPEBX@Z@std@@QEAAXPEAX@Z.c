/*
 * XREFs of ?reset@?$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z @ 0x18071C7E0
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<void,int (*)(void const *)>::reset(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(result + 8) = a2;
  if ( v3 )
    return (*(__int64 (**)(void))result)();
  return result;
}
