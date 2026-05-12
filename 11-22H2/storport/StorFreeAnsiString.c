/*
 * XREFs of StorFreeAnsiString @ 0x1C0017A04
 * Callers:
 *     StorDeleteScsiIdentity @ 0x1C0017958 (StorDeleteScsiIdentity.c)
 *     StorDeleteNVMeIdentity @ 0x1C00747A0 (StorDeleteNVMeIdentity.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeAnsiString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x53446152u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
