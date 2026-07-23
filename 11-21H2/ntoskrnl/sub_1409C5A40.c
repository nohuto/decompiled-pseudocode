/*
 * XREFs of sub_1409C5A40 @ 0x1409C5A40
 * Callers:
 *     sub_14083B300 @ 0x14083B300 (sub_14083B300.c)
 *     sub_14083B480 @ 0x14083B480 (sub_14083B480.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall sub_1409C5A40(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  void *v4; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    result = ZwClose(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    result = ZwClose(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    result = ZwClose(*(HANDLE *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
