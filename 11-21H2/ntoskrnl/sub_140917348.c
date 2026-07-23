/*
 * XREFs of sub_140917348 @ 0x140917348
 * Callers:
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140669CBC @ 0x140669CBC (sub_140669CBC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140717660 @ 0x140717660 (sub_140717660.c)
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 *     sub_1409150D4 @ 0x1409150D4 (sub_1409150D4.c)
 */

__int64 __fastcall sub_140917348(__int64 a1, __int64 *a2, int *a3, ULONG_PTR *a4)
{
  int v8; // esi
  __int64 v9; // rcx
  int v10; // edi
  ULONG_PTR v11; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v8 = sub_140669CBC(&UnicodeString, a1);
  if ( v8 >= 0 )
  {
    v8 = sub_140717660(&UnicodeString, a2);
    if ( v8 >= 0 )
    {
      v9 = *a2;
      v10 = *(_DWORD *)(*(_QWORD *)(*a2 + 64) + 36LL);
      v11 = sub_1409150D4(v9, 0, v10);
      sub_14071B250(v11);
      *a3 = v10;
      *a4 = v11;
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
