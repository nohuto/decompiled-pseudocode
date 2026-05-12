/*
 * XREFs of StorFreeAnsiString @ 0x1C001C184
 * Callers:
 *     StorDeleteScsiIdentity @ 0x1C001C0EC (StorDeleteScsiIdentity.c)
 *     StorDeleteNVMeIdentity @ 0x1C0065CC0 (StorDeleteNVMeIdentity.c)
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
