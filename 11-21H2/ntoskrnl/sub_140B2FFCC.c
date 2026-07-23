/*
 * XREFs of sub_140B2FFCC @ 0x140B2FFCC
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

char __fastcall sub_140B2FFCC(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rbx
  PVOID *v5; // rdi
  const UNICODE_STRING *v6; // rbp

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      v6 = (const UNICODE_STRING *)(i[6] + 72LL);
      while ( !RtlEqualUnicodeString(v6, (PCUNICODE_STRING)(v5 + 9), 1u) )
      {
        v5 = (PVOID *)*v5;
        if ( v5 == &PsLoadedModuleList )
          goto LABEL_9;
      }
      i[6] = v5;
    }
LABEL_9:
    ;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
