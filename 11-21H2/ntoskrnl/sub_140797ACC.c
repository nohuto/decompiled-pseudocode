/*
 * XREFs of sub_140797ACC @ 0x140797ACC
 * Callers:
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x1402E12F0 (SeAccessCheckFromState.c)
 *     sub_140797BD4 @ 0x140797BD4 (sub_140797BD4.c)
 *     sub_14079805C @ 0x14079805C (sub_14079805C.c)
 */

__int64 __fastcall sub_140797ACC(__int64 a1, __int64 a2, _TOKEN_ACCESS_INFORMATION *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+50h] [rbp-18h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  SecurityDescriptor[0] = 0LL;
  sub_140797BD4(a1, SecurityDescriptor);
  SeAccessCheckFromState(
    SecurityDescriptor[0],
    a3,
    0LL,
    0x80u,
    0,
    0LL,
    (PGENERIC_MAPPING)&stru_140010DA8,
    1,
    &GrantedAccess,
    &AccessStatus);
  sub_14079805C(SecurityDescriptor);
  return (unsigned int)AccessStatus;
}
