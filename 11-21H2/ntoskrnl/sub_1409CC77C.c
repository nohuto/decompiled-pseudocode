/*
 * XREFs of sub_1409CC77C @ 0x1409CC77C
 * Callers:
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_1407F4B20 @ 0x1407F4B20 (sub_1407F4B20.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     sub_1409CCDB0 @ 0x1409CCDB0 (sub_1409CCDB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409CC77C(PACCESS_TOKEN Token, unsigned int a2, PSID *a3, __int64 a4, char *a5)
{
  char *v5; // r13
  unsigned int v6; // r14d
  NTSTATUS v9; // edi
  char v10; // bl
  char *v11; // r8
  unsigned int v12; // r12d
  char v13; // al
  PSID v14; // rcx
  BOOLEAN v15; // al
  PSID v16; // rbx
  PULONG v17; // rbx
  PULONG v18; // rax
  PVOID v20; // [rsp+20h] [rbp-30h] BYREF
  char *v21; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  PSID v25; // [rsp+48h] [rbp-8h]
  PVOID TokenInformation; // [rsp+A8h] [rbp+58h] BYREF

  v5 = a5;
  v6 = 0;
  P = 0LL;
  v23 = 0LL;
  LODWORD(TokenInformation) = 0;
  LODWORD(v20) = 0;
  *a5 = 0;
  v9 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
  if ( v9 >= 0 )
  {
    if ( !(_DWORD)TokenInformation )
    {
      *v5 = 1;
      goto LABEL_26;
    }
    v9 = SeQueryInformationToken(Token, TokenCapabilities, &P);
    if ( v9 >= 0 )
    {
      v9 = SeQueryInformationToken(Token, TokenIsLessPrivilegedAppContainer, &v20);
      if ( v9 >= 0 )
      {
        v10 = 1;
        v11 = (char *)P;
        v12 = 0;
        v21 = (char *)P;
        if ( !a2 )
          goto LABEL_25;
        while ( 1 )
        {
          v10 = 0;
          if ( (_DWORD)v20 || (v13 = sub_1409CCDB0(*a3), v11 = v21, !v13) )
          {
            LODWORD(a5) = *(_DWORD *)P;
            if ( (_DWORD)a5 )
            {
              v14 = *a3;
              v25 = *a3;
              while ( 1 )
              {
                v24 = 16LL * v6;
                v15 = RtlEqualSid(*(PSID *)&v11[v24 + 8], v14);
                v11 = v21;
                if ( v15 )
                {
                  if ( *(_DWORD *)&v21[v24 + 16] == *((_DWORD *)a3 + 2) )
                    break;
                }
                v14 = v25;
                if ( ++v6 >= (unsigned int)a5 )
                  goto LABEL_14;
              }
              v6 = 0;
            }
            else
            {
LABEL_14:
              if ( *((_BYTE *)*a3 + 1) != 9 || *RtlSubAuthoritySid(*a3, 0) != 3 )
                goto LABEL_25;
              v6 = 0;
              if ( !v23 )
              {
                v9 = SeQueryInformationToken(Token, TokenAppContainerSid, &v23);
                if ( v9 < 0 )
                  break;
              }
              v16 = *(PSID *)v23;
              if ( *RtlSubAuthorityCountSid(*(PSID *)v23) < 8u
                || (v17 = RtlSubAuthoritySid(v16, 1u),
                    v18 = RtlSubAuthoritySid(*a3, 1u),
                    RtlCompareMemory(v18, v17, 0x1CuLL) != 28) )
              {
                v10 = 0;
LABEL_25:
                *v5 = v10;
                break;
              }
              v11 = v21;
            }
          }
          ++v12;
          a3 += 2;
          if ( v12 >= a2 )
          {
            v10 = 1;
            goto LABEL_25;
          }
        }
      }
    }
  }
LABEL_26:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return (unsigned int)v9;
}
