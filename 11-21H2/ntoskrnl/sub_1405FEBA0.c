/*
 * XREFs of sub_1405FEBA0 @ 0x1405FEBA0
 * Callers:
 *     sub_1405FEB18 @ 0x1405FEB18 (sub_1405FEB18.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89E7C @ 0x140A89E7C (sub_140A89E7C.c)
 *     sub_140A9AEC0 @ 0x140A9AEC0 (sub_140A9AEC0.c)
 */

__int64 sub_1405FEBA0()
{
  __int64 i; // rdi
  PVOID *j; // rbx

  sub_140A89D58();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = qword_140C1B2C0; (__int64 *)i != &qword_140C1B2C0; i = *(_QWORD *)i )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
    {
      if ( ((_DWORD)j[13] & 0x2000000) != 0
        && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), (PCUNICODE_STRING)(j + 11), 1u) )
      {
        sub_140A9AEC0(j);
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return sub_140A89E7C();
}
