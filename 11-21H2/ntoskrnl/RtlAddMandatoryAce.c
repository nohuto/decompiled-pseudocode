/*
 * XREFs of RtlAddMandatoryAce @ 0x1406CCC10
 * Callers:
 *     sub_1406CC960 @ 0x1406CC960 (sub_1406CC960.c)
 *     sub_14074F2EC @ 0x14074F2EC (sub_14074F2EC.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     sub_140B2114C @ 0x140B2114C (sub_140B2114C.c)
 *     sub_140B2A324 @ 0x140B2A324 (sub_140B2A324.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140724CE0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  int v10; // ecx
  UCHAR AclRevision; // si
  char *v12; // r8
  unsigned __int16 v13; // dx
  UCHAR v14; // cl
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  unsigned __int16 v18; // [rsp+2Ch] [rbp-3Ch]

  FirstFree = 0LL;
  v17 = 0;
  v18 = 4096;
  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2) - v17;
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - v18;
  if ( v10 )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = (char *)FirstFree;
  v13 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v13;
  v12[1] = AceFlags;
  *v12 = 17;
  *((_DWORD *)v12 + 1) = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v12 + 8, Sid);
  ++Acl->AceCount;
  v14 = AclRevision;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    v14 = AceRevision;
  result = 0;
  Acl->AclRevision = v14;
  return result;
}
