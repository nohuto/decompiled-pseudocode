/*
 * XREFs of sub_1405F5174 @ 0x1405F5174
 * Callers:
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 */

__int64 __fastcall sub_1405F5174(void *a1, _BYTE *a2)
{
  struct _SECURITY_SUBJECT_CONTEXT v4; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK v6; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  v5 = 0;
  v4.ClientToken = 0LL;
  *(_QWORD *)&v4.ImpersonationLevel = 0LL;
  v4.ProcessAuditId = 0LL;
  *a2 = 0;
  v4.PrimaryToken = a1;
  if ( SeAccessCheck(qword_140A3D138, &v4, 0, 1u, 0, 0LL, (PGENERIC_MAPPING)&stru_140011118, 1, &v6, (PNTSTATUS)&v5) )
    *a2 = 1;
  return v5;
}
