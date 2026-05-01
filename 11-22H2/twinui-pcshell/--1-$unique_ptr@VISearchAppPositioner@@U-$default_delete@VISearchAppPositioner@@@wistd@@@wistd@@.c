/*
 * XREFs of ??1?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@QEAA@XZ @ 0x1804663FC
 * Callers:
 *     _UndockedSearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1802C4BA4 (_UndockedSearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1802C4BB6 (_UndockedSearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CreateSearchAppPositioner_::_1_::dtor$0 @ 0x1802C4C36 (_CreateSearchAppPositioner_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::~unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>(
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
