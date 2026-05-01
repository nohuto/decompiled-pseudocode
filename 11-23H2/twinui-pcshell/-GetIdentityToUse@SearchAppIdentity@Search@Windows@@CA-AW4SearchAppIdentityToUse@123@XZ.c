/*
 * XREFs of ?GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA?AW4SearchAppIdentityToUse@123@XZ @ 0x180467B58
 * Callers:
 *     ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x1800916A0 (-GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 Windows::Search::SearchAppIdentity::GetIdentityToUse()
{
  unsigned int v0; // ebx
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  if ( Windows::Search::SearchAppIdentity::m_initialized )
    return (unsigned int)Windows::Search::SearchAppIdentity::m_searchAppIdentityToUse;
  v2 = 0;
  v0 = 1;
  v3 = 4;
  Windows::Search::SearchAppIdentity::m_initialized = 1;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
         L"SearchAppIdentityOverride",
         0x10u,
         0LL,
         &v2,
         &v3) )
  {
    return (unsigned int)Windows::Search::SearchAppIdentity::m_searchAppIdentityToUse;
  }
  else
  {
    if ( ((v2 - 1) & 0xFFFFFFFD) != 0 )
      v0 = (v2 & 0xFFFFFFFD) != 0 ? 2 : 0;
    Windows::Search::SearchAppIdentity::m_searchAppIdentityToUse = v0;
    Windows::Search::SearchAppIdentity::m_initialized = (unsigned int)(v2 - 2) > 2;
  }
  return v0;
}
