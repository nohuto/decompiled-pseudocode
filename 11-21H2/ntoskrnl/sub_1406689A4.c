/*
 * XREFs of sub_1406689A4 @ 0x1406689A4
 * Callers:
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 * Callees:
 *     sub_1406C8634 @ 0x1406C8634 (sub_1406C8634.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 */

__int64 __fastcall sub_1406689A4(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 )
    return 0LL;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a1 + 64)) )
  {
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 && (*(_DWORD *)(a1 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a1 + 16) |= sub_1406C8634(v1);
    return 0LL;
  }
  return 3221225593LL;
}
