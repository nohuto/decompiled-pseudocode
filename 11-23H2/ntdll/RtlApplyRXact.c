/*
 * XREFs of RtlApplyRXact @ 0x1800F2180
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x1800801E0 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x180080228 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x1800A1AA0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A2A40 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A2CA0 (ZwFlushKey.c)
 */

NTSTATUS __fastcall RtlApplyRXact(__int64 a1)
{
  void *v1; // rbx
  NTSTATUS result; // eax
  int v4; // edi
  void *v5; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(void **)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0, 3u, *(PVOID *)(a1 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  if ( result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      v5 = v1;
LABEL_4:
      ZwDeleteValueKey(v5, &DestinationString);
      return v4;
    }
    v4 = RXactpCommit((__int64 *)a1);
    v5 = v1;
    if ( v4 < 0 )
      goto LABEL_4;
    ZwDeleteValueKey(v1, &DestinationString);
    RtlAbortRXact(a1);
    return 0;
  }
  return result;
}
