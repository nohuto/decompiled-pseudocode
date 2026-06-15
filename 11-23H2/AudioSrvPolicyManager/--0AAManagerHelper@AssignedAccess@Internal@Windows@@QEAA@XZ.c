/*
 * XREFs of ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180046C74
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000FF10 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAssignedAccessManager@AssignedAccess@Internal@1@@Z @ 0x180046A5C (--$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@Foundation@Windows.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180046E04 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

Windows::Internal::AssignedAccess::AAManagerHelper *__fastcall Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper(
        Windows::Internal::AssignedAccess::AAManagerHelper *this)
{
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]

  *(_QWORD *)this = 0LL;
  v4 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.AssignedAccess.AssignedAccessManager",
    0x36u,
    0x35u);
  *((_DWORD *)this + 2) = Windows::Foundation::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>(
                            v4,
                            this);
  return this;
}
