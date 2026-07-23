/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x140373E68
 * Callers:
 *     BcdDeleteObject @ 0x140802FD0 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140373EB4 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x140374038 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
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
