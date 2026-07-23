/*
 * XREFs of sub_1409CA9E4 @ 0x1409CA9E4
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

BOOLEAN __fastcall sub_1409CA9E4(__int64 a1, void *a2)
{
  BOOLEAN v2; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // r15

  v2 = 0;
  if ( !a2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v8 = *(_DWORD *)(a1 + 124);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    do
    {
      v2 = RtlEqualSid(a2, *(PSID *)(v9 + 16LL * v7));
      if ( v2 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v2;
}
