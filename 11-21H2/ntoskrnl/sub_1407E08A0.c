/*
 * XREFs of sub_1407E08A0 @ 0x1407E08A0
 * Callers:
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_1409870AC @ 0x1409870AC (sub_1409870AC.c)
 * Callees:
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407E08A0(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( _bittest64((const signed __int64 *)(a2 + 32), 0x22u) )
    sub_1407DFFD8((_QWORD *)(a2 + 8), a1);
}
