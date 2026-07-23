/*
 * XREFs of sub_140A89D94 @ 0x140A89D94
 * Callers:
 *     sub_140A812D0 @ 0x140A812D0 (sub_140A812D0.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14063A5D8 @ 0x14063A5D8 (sub_14063A5D8.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A9A540 @ 0x140A9A540 (sub_140A9A540.c)
 *     sub_140A9AEC0 @ 0x140A9AEC0 (sub_140A9AEC0.c)
 */

__int64 __fastcall sub_140A89D94(__int64 a1)
{
  unsigned int v2; // esi
  const UNICODE_STRING *v3; // rdi
  PVOID *i; // rbx

  v2 = 0;
  sub_140A89D58();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = (const UNICODE_STRING *)(a1 + 24);
  if ( RtlEqualUnicodeString(&stru_140A75038, v3, 1u) )
  {
    if ( (qword_140D01450 & 8) != 0 || (qword_140D01450 & 1) != 0 )
      sub_14063A5D8(8);
    sub_140A9A540(v3);
    dword_140C1ACA4 = 0;
  }
  else
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      if ( RtlEqualUnicodeString(v3, (PCUNICODE_STRING)(i + 11), 1u) )
      {
        v2 = sub_140A9AEC0(i);
        break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  qword_140C1AD40 = 0LL;
  KeReleaseMutex(&stru_140C1AD60, 0);
  return v2;
}
