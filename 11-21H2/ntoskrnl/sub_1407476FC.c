/*
 * XREFs of sub_1407476FC @ 0x1407476FC
 * Callers:
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_14074761C @ 0x14074761C (sub_14074761C.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 *     sub_14094C2D0 @ 0x14094C2D0 (sub_14094C2D0.c)
 *     sub_14094E998 @ 0x14094E998 (sub_14094E998.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

void __fastcall sub_1407476FC(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeUnicodeString(v2++);
    --v3;
  }
  while ( v3 );
}
