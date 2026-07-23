/*
 * XREFs of KiGlobalDeduplicateTriageDumpData @ 0x14056AD04
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x14056AD94 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     KiDeduplicateTriageDumpDataArrays @ 0x14056A5F8 (KiDeduplicateTriageDumpDataArrays.c)
 */

void __fastcall KiGlobalDeduplicateTriageDumpData(_DWORD *a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)KeBugCheckTriageDumpDataArrayListHead;
  if ( KeBugCheckTriageDumpDataArrayListHead && qword_140C421C8 )
  {
    while ( v1 != &KeBugCheckTriageDumpDataArrayListHead )
    {
      KiDeduplicateTriageDumpDataArrays(a1, (__int64)v1);
      v1 = (__int64 *)*v1;
    }
  }
}
