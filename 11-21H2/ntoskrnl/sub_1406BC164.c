/*
 * XREFs of sub_1406BC164 @ 0x1406BC164
 * Callers:
 *     sub_14071EDD4 @ 0x14071EDD4 (sub_14071EDD4.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 */

BOOLEAN __fastcall sub_1406BC164(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  NTSTATUS AccessStatus; // [rsp+60h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+78h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  v4 = sub_140721BF0(a2, a3, 0LL);
  return SeAccessCheck(
           (PSECURITY_DESCRIPTOR)(v4 + 32),
           (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
           0,
           0x10u,
           0,
           0LL,
           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
           1,
           &GrantedAccess,
           &AccessStatus);
}
