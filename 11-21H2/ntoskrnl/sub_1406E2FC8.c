/*
 * XREFs of sub_1406E2FC8 @ 0x1406E2FC8
 * Callers:
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_1406E2FE8 @ 0x1406E2FE8 (sub_1406E2FE8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall sub_1406E2FC8(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  NTSTATUS result; // eax

  if ( *(_QWORD *)a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
      ZwClose(v2);
    v3 = *(void **)(a1 + 16);
    if ( v3 )
      ZwClose(v3);
    v4 = *(void **)(a1 + 32);
    if ( v4 )
      ZwClose(v4);
    v5 = *(void **)(a1 + 8);
    if ( v5 )
      ZwClose(v5);
    return ZwClose(*(HANDLE *)a1);
  }
  return result;
}
