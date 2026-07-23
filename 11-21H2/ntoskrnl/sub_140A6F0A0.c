/*
 * XREFs of sub_140A6F0A0 @ 0x140A6F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall sub_140A6F0A0(__int64 a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return ZwClose(v1);
  return result;
}
