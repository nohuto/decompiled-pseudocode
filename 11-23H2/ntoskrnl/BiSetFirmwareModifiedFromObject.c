/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x140373CC8
 * Callers:
 *     BcdDeleteObject @ 0x140802D00 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140373D14 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x140373E98 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  __int64 v1; // rdx
  int v2; // edi

  v2 = BiOpenStoreKeyFromObject(a1);
  if ( v2 >= 0 )
  {
    LOBYTE(v1) = 1;
    BiSetFirmwareModified(0LL, v1);
  }
  return (unsigned int)v2;
}
