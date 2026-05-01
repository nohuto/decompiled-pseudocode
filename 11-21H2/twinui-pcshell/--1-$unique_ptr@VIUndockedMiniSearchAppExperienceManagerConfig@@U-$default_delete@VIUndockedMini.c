/*
 * XREFs of ??1?$unique_ptr@VIUndockedMiniSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedMiniSearchAppExperienceManagerConfig@@@wistd@@@wistd@@QEAA@XZ @ 0x18038E28C
 * Callers:
 *     _MiniSearchExperienceManager::MiniSearchExperienceManager_::_1_::dtor$6 @ 0x18021EA15 (_MiniSearchExperienceManager--MiniSearchExperienceManager_--_1_--dtor$6.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<IUndockedMiniSearchAppExperienceManagerConfig,wistd::default_delete<IUndockedMiniSearchAppExperienceManagerConfig>>::~unique_ptr<IUndockedMiniSearchAppExperienceManagerConfig,wistd::default_delete<IUndockedMiniSearchAppExperienceManagerConfig>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
