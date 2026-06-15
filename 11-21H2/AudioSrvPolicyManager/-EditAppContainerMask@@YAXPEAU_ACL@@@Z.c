/*
 * XREFs of ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18003EFA0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall EditAppContainerMask(PACL pAcl)
{
  DWORD v2; // ebx
  bool i; // cf
  BOOL Ace; // eax
  PSID v5; // rcx
  PSID pSid1; // [rsp+60h] [rbp-20h] BYREF
  LPVOID pAce; // [rsp+68h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+70h] [rbp-10h] BYREF

  *(_DWORD *)pIdentifierAuthority.Value = 0;
  *(_WORD *)&pIdentifierAuthority.Value[4] = 3840;
  pSid1 = 0LL;
  if ( AllocateAndInitializeSid(&pIdentifierAuthority, 2u, 3u, 0x1000u, 0, 0, 0, 0, 0, 0, &pSid1) )
  {
    v2 = 0;
    for ( i = pAcl->AceCount != 0; i; i = v2 < pAcl->AceCount )
    {
      pAce = 0LL;
      Ace = GetAce(pAcl, v2, &pAce);
      v5 = pSid1;
      if ( !Ace )
      {
        if ( !pSid1 )
          return;
        goto LABEL_13;
      }
      if ( EqualSid(pSid1, (char *)pAce + 8) && !*(_BYTE *)pAce )
      {
        *((_BYTE *)pAce + 1) = 2;
        *((_DWORD *)pAce + 1) = 131099;
        v5 = pSid1;
        if ( !pSid1 )
          return;
        goto LABEL_13;
      }
      ++v2;
    }
  }
  v5 = pSid1;
  if ( pSid1 )
LABEL_13:
    FreeSid(v5);
}
