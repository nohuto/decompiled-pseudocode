/*
 * XREFs of PnpFreeDevProperty @ 0x1407896F8
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406C9A44 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x140789698 (PnpFreeDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x140819C30 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A1A8 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevProperty(__int64 a1, ULONG a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, a2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, a2);
}
