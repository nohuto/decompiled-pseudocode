/*
 * XREFs of ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1801BE6AC
 * Callers:
 *     ??_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z @ 0x18028E480 (--_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1AcrylicPolicyManager@@UEAA@XZ @ 0x180144770 (--1AcrylicPolicyManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

AcrylicPolicyManager *__fastcall AcrylicPolicyManager::`scalar deleting destructor'(
        AcrylicPolicyManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  AcrylicPolicyManager::~AcrylicPolicyManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, 0x168uLL);
  return this;
}
