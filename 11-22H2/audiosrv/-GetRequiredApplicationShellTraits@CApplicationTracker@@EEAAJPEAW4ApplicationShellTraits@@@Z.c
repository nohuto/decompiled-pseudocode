/*
 * XREFs of ?GetRequiredApplicationShellTraits@CApplicationTracker@@EEAAJPEAW4ApplicationShellTraits@@@Z @ 0x18004B5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationTracker::GetRequiredApplicationShellTraits(
        CApplicationTracker *this,
        enum ApplicationShellTraits *a2)
{
  *(_DWORD *)a2 = (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 376LL))(g_PolicyManager) != 0
                ? 1
                : 4;
  return 0LL;
}
