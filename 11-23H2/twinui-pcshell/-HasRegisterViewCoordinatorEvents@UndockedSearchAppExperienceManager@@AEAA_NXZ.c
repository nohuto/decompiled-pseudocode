/*
 * XREFs of ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x180098584
 * Callers:
 *     ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180060644 (-RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180095A80 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

bool __fastcall UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  bool v3; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 36;
  AcquireSRWLockShared(this + 36);
  v5 = 0LL;
  v3 = !(unsigned __int8)winrt::Windows::Foundation::operator==(&this[37], &v5) && (this[38].Ptr || this[39].Ptr);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
