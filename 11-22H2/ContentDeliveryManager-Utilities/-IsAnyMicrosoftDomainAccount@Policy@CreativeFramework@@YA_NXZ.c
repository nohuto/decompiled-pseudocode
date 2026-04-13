/*
 * XREFs of ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180059E34
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x180058E18 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800CA2CC (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?GetDomainName@Details@Policy@CreativeFramework@@YA_NPEAGK@Z @ 0x1800582D0 (-GetDomainName@Details@Policy@CreativeFramework@@YA_NPEAGK@Z.c)
 */

bool __fastcall CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(CreativeFramework::Policy *this)
{
  unsigned __int16 *v1; // rdx
  WCHAR StringSource[104]; // [rsp+30h] [rbp-E8h] BYREF

  memset_0(StringSource, 0, 0xC8uLL);
  return CreativeFramework::Policy::Details::GetDomainName(StringSource, v1)
      && FindStringOrdinal(0x200000u, StringSource, -1, L".MICROSOFT.COM", -1, 1) >= 0;
}
