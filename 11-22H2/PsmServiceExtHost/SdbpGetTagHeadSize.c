/*
 * XREFs of SdbpGetTagHeadSize @ 0x180094928
 * Callers:
 *     SdbpGetNextTagId @ 0x180090900 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x18009472C (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x180094A34 (SdbpReadTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x180090A98 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2u) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1, (unsigned int)"SdbpGetTagHeadSize", 94, (unsigned int)"Error reading tag");
  return 0LL;
}
