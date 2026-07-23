/*
 * XREFs of sub_140754718 @ 0x140754718
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     sub_140754758 @ 0x140754758 (sub_140754758.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140754718(PVOID *P, char a2)
{
  if ( a2 )
  {
    ExFreePoolWithTag(P[1], 0);
    if ( *P )
      sub_140754758(*P);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
