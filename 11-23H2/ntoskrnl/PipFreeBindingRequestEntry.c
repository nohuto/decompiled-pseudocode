/*
 * XREFs of PipFreeBindingRequestEntry @ 0x1409546CC
 * Callers:
 *     PipFreeDependencyEdge @ 0x14055FBDC (PipFreeDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x1408380BC (PipAddRequestToEdge.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingRequestEntry(PVOID P)
{
  UNICODE_STRING *v2; // rcx

  if ( *((_DWORD *)P + 4) == 1 )
  {
    v2 = (UNICODE_STRING *)*((_QWORD *)P + 3);
    if ( v2 )
    {
      RtlFreeUnicodeString(v2);
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x53706E50u);
      *((_QWORD *)P + 3) = 0LL;
    }
  }
  ExFreePoolWithTag(P, 0x53706E50u);
}
