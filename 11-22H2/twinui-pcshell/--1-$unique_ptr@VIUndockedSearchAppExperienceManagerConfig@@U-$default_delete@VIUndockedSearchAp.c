/*
 * XREFs of ??1?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@QEAA@XZ @ 0x180466438
 * Callers:
 *     _UndockedSearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1802C4BC8 (_UndockedSearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<IUndockedSearchAppExperienceManagerConfig,wistd::default_delete<IUndockedSearchAppExperienceManagerConfig>>::~unique_ptr<IUndockedSearchAppExperienceManagerConfig,wistd::default_delete<IUndockedSearchAppExperienceManagerConfig>>(
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
