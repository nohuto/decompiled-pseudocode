/*
 * XREFs of sub_140945380 @ 0x140945380
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14065FA0C @ 0x14065FA0C (sub_14065FA0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140945380(__int64 *P)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  void *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)P + 32);
  v6 = 1024;
  v2 = sub_14065FA0C(&DestinationString.Length, (char *)P + 464, (_WORD *)P + 234, &v6, 8, 1);
  v3 = *P;
  *((_DWORD *)P + 6) = v2;
  if ( v3 )
    sub_14042A5E0(v2, P[1]);
  v4 = (void *)P[2];
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x45706E50u);
  ExFreePoolWithTag(P, 0x46706E50u);
}
