/*
 * XREFs of sub_140775854 @ 0x140775854
 * Callers:
 *     sub_1407757E0 @ 0x1407757E0 (sub_1407757E0.c)
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 *     sub_140776650 @ 0x140776650 (sub_140776650.c)
 * Callees:
 *     sub_140560E60 @ 0x140560E60 (sub_140560E60.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140775854(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (byte_140C0DD4A & 0x40) != 0 )
      sub_140560E60((__int64)P, (const EVENT_DESCRIPTOR *)qword_14003B480, *((const GUID **)P + 3), P);
    sub_140776E5C(P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
