/*
 * XREFs of sub_1407B4900 @ 0x1407B4900
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_1406C32B0 @ 0x1406C32B0 (sub_1406C32B0.c)
 *     sub_1406CC960 @ 0x1406CC960 (sub_1406CC960.c)
 *     sub_1406E7694 @ 0x1406E7694 (sub_1406E7694.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     sub_1407438D8 @ 0x1407438D8 (sub_1407438D8.c)
 *     sub_140743C8C @ 0x140743C8C (sub_140743C8C.c)
 *     sub_14074F220 @ 0x14074F220 (sub_14074F220.c)
 *     sub_14078DAB0 @ 0x14078DAB0 (sub_14078DAB0.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     sub_1407B468C @ 0x1407B468C (sub_1407B468C.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407F385C @ 0x1407F385C (sub_1407F385C.c)
 *     sub_1407F813C @ 0x1407F813C (sub_1407F813C.c)
 *     sub_140801A80 @ 0x140801A80 (sub_140801A80.c)
 *     RtlAddAccessAllowedAceEx @ 0x140811740 (RtlAddAccessAllowedAceEx.c)
 *     sub_140813344 @ 0x140813344 (sub_140813344.c)
 *     sub_1408251EC @ 0x1408251EC (sub_1408251EC.c)
 *     sub_14082C34C @ 0x14082C34C (sub_14082C34C.c)
 *     sub_14082C74C @ 0x14082C74C (sub_14082C74C.c)
 *     sub_14082C950 @ 0x14082C950 (sub_14082C950.c)
 *     sub_140831E08 @ 0x140831E08 (sub_140831E08.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     RtlAddAccessDeniedAceEx @ 0x14084DB60 (RtlAddAccessDeniedAceEx.c)
 *     sub_14084ED68 @ 0x14084ED68 (sub_14084ED68.c)
 *     sub_14085075C @ 0x14085075C (sub_14085075C.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_14085C290 @ 0x14085C290 (sub_14085C290.c)
 *     sub_14085F700 @ 0x14085F700 (sub_14085F700.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     sub_140949950 @ 0x140949950 (sub_140949950.c)
 *     sub_140949AF8 @ 0x140949AF8 (sub_140949AF8.c)
 *     sub_140949D40 @ 0x140949D40 (sub_140949D40.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409B7D90 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409B7DF0 (RtlAddAccessDeniedObjectAce.c)
 *     sub_1409B8050 @ 0x1409B8050 (sub_1409B8050.c)
 *     RtlAddAuditAccessAceEx @ 0x1409B8090 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409B80E0 (RtlAddAuditAccessObjectAce.c)
 *     sub_1409D6F7C @ 0x1409D6F7C (sub_1409D6F7C.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140A349F0 @ 0x140A349F0 (sub_140A349F0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 */

__int64 __fastcall sub_1407B4900(ACL *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  unsigned __int8 AclRevision; // si
  ACL *v10; // rax
  ACL *v11; // r9
  unsigned int v12; // edx
  ACL *v13; // rdx
  USHORT v14; // cx
  __int64 result; // rax
  unsigned int v16; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = a1->AclRevision;
  if ( a1->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  if ( AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v16 = a3 & 0xFFFFFF20;
    }
    else
    {
      if ( a6 )
        return 3221225485LL;
      v16 = a3 & 0xFFFFFFC0;
    }
    if ( !v16 )
      goto LABEL_9;
    return 3221225485LL;
  }
LABEL_9:
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  v10 = a1 + 1;
  v11 = 0LL;
  v12 = 0;
  if ( a1->AceCount )
  {
    while ( v10 < (ACL *)((char *)a1 + a1->AclSize) )
    {
      ++v12;
      v10 = (ACL *)((char *)v10 + v10->AclSize);
      if ( v12 >= a1->AceCount )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v13 = (ACL *)((char *)a1 + a1->AclSize);
  if ( v10 <= v13 )
    v11 = v10;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || (ACL *)((char *)v11 + v14) > v13 )
    return 3221225625LL;
  v11->AclSize = v14;
  v11->Sbz1 = v7;
  v11->AclRevision = a6;
  *(_DWORD *)&v11->AceCount = a4;
  memmove(&v11[1], Src, 4LL * Src[1] + 8);
  ++a1->AceCount;
  result = 0LL;
  a1->AclRevision = AclRevision;
  return result;
}
