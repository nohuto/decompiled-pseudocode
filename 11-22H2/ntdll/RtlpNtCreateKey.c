/*
 * XREFs of RtlpNtCreateKey @ 0x180114DF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateKey @ 0x18009F190 (ZwCreateKey.c)
 */

NTSTATUS __fastcall RtlpNtCreateKey(
        HANDLE *a1,
        ACCESS_MASK a2,
        _OBJECT_ATTRIBUTES *a3,
        __int64 a4,
        int a5,
        PULONG Disposition)
{
  if ( a3 )
    a3->Attributes &= 0xFFFFFFCF;
  return ZwCreateKey(a1, a2, a3, 0, 0LL, 0, Disposition);
}
