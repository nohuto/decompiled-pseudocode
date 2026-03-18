/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x140224CF0
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14022523C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepDesktopAppxSubProcessToken @ 0x140225D3C (SepDesktopAppxSubProcessToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403709B4 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1403A1E40 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x1403A1FA4 (SepSetSingletonEntry.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405B7EE4 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B8144 (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1405B93F0 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepSetProcessUniqueAttribute @ 0x1406B7620 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x1407CF434 (SepCreateClaimAttributes.c)
 *     SepAddTokenOriginClaim @ 0x1407E3654 (SepAddTokenOriginClaim.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140841E14 (AuthzBasepInitializeSystemSecurityAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttribute @ 0x140224C44 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x140224DD4 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1402256C0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140225AA4 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140225B10 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8D40 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x14066EB34 (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r14d
  int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  if ( a3 )
  {
    v7 = AuthzBasepValidateSecurityAttributes(a3);
    if ( v7 >= 0 )
    {
      if ( v3 == 1 )
        AuthzBasepDeleteAllSecurityAttributes(a1);
      v8 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(a3 + 8) + 40 * v8;
          if ( v3 == 1 )
            goto LABEL_11;
          v10 = a2[v8];
          if ( v10 )
            break;
          v7 = 0;
LABEL_13:
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 4) )
            goto LABEL_14;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_18;
LABEL_11:
            v13 = AuthzBasepReplaceSecurityAttribute(a1, v9);
          }
          else
          {
            v13 = AuthzBasepDeleteSecurityAttribute(a1, v9);
          }
        }
        else
        {
          v13 = AuthzBasepAddSecurityAttribute(a1, v9);
        }
        v7 = v13;
        if ( v13 < 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList();
    v7 = 0;
  }
  else
  {
LABEL_18:
    v7 = -1073741811;
  }
LABEL_14:
  AuthzBasepFinaliseSecurityAttributesList(a1, v7 >= 0);
  return (unsigned int)v7;
}
