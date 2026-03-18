/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x14074ACAC
 * Callers:
 *     PfTFreeTraceDump @ 0x1402FA264 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1402F5694 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_140C65220,
    (struct _SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
