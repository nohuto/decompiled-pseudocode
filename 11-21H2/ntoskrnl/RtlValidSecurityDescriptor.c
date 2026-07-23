/*
 * XREFs of RtlValidSecurityDescriptor @ 0x140726610
 * Callers:
 *     sub_14064C900 @ 0x14064C900 (sub_14064C900.c)
 *     sub_1406689A4 @ 0x1406689A4 (sub_1406689A4.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_14076B308 @ 0x14076B308 (sub_14076B308.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_140881DF2 @ 0x140881DF2 (sub_140881DF2.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     sub_140949D40 @ 0x140949D40 (sub_140949D40.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140B22228 @ 0x140B22228 (sub_140B22228.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 *     sub_140B2888C @ 0x140B2888C (sub_140B2888C.c)
 * Callees:
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  ACL *v7; // rcx
  __int16 v8; // ax
  char *v10; // rcx
  __int64 v11; // rax
  ACL *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_8;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( v4 && !RtlValidSid(v4) )
    return 0;
  if ( v2 >= 0 )
  {
    v10 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_18;
  }
LABEL_8:
  v5 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_9;
  v10 = (char *)SecurityDescriptor + v5;
LABEL_18:
  if ( v10 && !RtlValidSid(v10) )
    return 0;
LABEL_9:
  if ( (v2 & 4) != 0 )
  {
    if ( v2 >= 0 )
    {
      v7 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_13;
    }
    v6 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v6 )
    {
      v7 = (ACL *)((char *)SecurityDescriptor + v6);
LABEL_13:
      if ( v7 && !RtlValidAcl(v7) )
        return 0;
    }
  }
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 1;
  if ( v8 >= 0 )
  {
    v12 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v11 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v11 )
      return 1;
    v12 = (ACL *)((char *)SecurityDescriptor + v11);
  }
  return !v12 || RtlValidAcl(v12);
}
