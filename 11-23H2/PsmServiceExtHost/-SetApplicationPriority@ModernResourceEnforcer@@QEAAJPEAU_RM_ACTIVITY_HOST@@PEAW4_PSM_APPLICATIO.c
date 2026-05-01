/*
 * XREFs of ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000EA18
 * Callers:
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000E8B8 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetApplicationPriority(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        enum _PSM_APPLICATION_PRIORITY *a3)
{
  __int128 v4; // [rsp+40h] [rbp-38h] BYREF
  __int128 v5; // [rsp+50h] [rbp-28h]

  v4 = 0LL;
  v5 = 0LL;
  if ( a3 )
  {
    DWORD2(v5) = *(_DWORD *)a3;
    HIDWORD(v5) = 16;
  }
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, __int128 *))this + 1))(
           (char *)a2 + 552,
           *((unsigned int *)a2 + 155),
           (char *)a2 + 88,
           *((unsigned int *)a2 + 156),
           *((_QWORD *)a2 + 4),
           *((_BYTE *)a2 + 656) != 0 ? 4 : 0,
           &v4);
}
