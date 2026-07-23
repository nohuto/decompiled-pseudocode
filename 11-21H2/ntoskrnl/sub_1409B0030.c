/*
 * XREFs of sub_1409B0030 @ 0x1409B0030
 * Callers:
 *     sub_140682240 @ 0x140682240 (sub_140682240.c)
 *     sub_1406DAEBC @ 0x1406DAEBC (sub_1406DAEBC.c)
 *     sub_1409B0770 @ 0x1409B0770 (sub_1409B0770.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_140722890 @ 0x140722890 (sub_140722890.c)
 *     sub_1407248C0 @ 0x1407248C0 (sub_1407248C0.c)
 */

__int64 __fastcall sub_1409B0030(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  int v4; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-10h] BYREF
  char v8; // [rsp+88h] [rbp+28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF

  GrantedAccess = 0;
  v2 = 0;
  SecurityDescriptor = 0LL;
  v4 = *(_DWORD *)(a2 + 1120);
  v8 = 0;
  AccessStatus = 0;
  if ( (v4 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
      return 0LL;
    AccessStatus = sub_1407248C0(a2, &SecurityDescriptor, &v8);
    v2 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      SeAccessCheck(
        SecurityDescriptor,
        (PSECURITY_SUBJECT_CONTEXT)(a1 + 8),
        0,
        0x200u,
        0,
        0LL,
        (PGENERIC_MAPPING)((char *)PsProcessType + 76),
        1,
        &GrantedAccess,
        &AccessStatus);
      sub_140722890(SecurityDescriptor, v8, a2);
      return (unsigned int)AccessStatus;
    }
  }
  return v2;
}
