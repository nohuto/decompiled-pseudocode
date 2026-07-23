/*
 * XREFs of sub_140254F94 @ 0x140254F94
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     sub_1402A47B0 @ 0x1402A47B0 (sub_1402A47B0.c)
 *     RtlDeleteAce @ 0x1406DC070 (RtlDeleteAce.c)
 */

void __fastcall sub_140254F94(__int64 a1, __int64 a2)
{
  ACL *v2; // rbx
  ULONG AceIndex; // [rsp+30h] [rbp+8h] BYREF

  AceIndex = 0;
  v2 = *(ACL **)(a1 + 184);
  if ( v2 )
  {
    if ( sub_1402A47B0(*(_QWORD *)(a1 + 184), a2, &AceIndex) )
      RtlDeleteAce(v2, AceIndex);
  }
}
