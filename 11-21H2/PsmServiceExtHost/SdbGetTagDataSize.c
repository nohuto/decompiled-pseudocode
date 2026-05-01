/*
 * XREFs of SdbGetTagDataSize @ 0x180099284
 * Callers:
 *     SdbpGetNextTagId @ 0x180095908 (SdbpGetNextTagId.c)
 *     SdbpGetFirstIndexedRecord @ 0x180098C70 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180098D84 (SdbpGetNextIndexedRecord.c)
 *     SdbpReadTagData @ 0x180099974 (SdbpReadTagData.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B64C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009B8A0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x180095AA0 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v4 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  switch ( v4 )
  {
    case 4096:
      result = 0LL;
      goto LABEL_15;
    case 8192:
      result = 1LL;
      goto LABEL_15;
    case 12288:
      result = 2LL;
      goto LABEL_15;
    case 16384:
      goto LABEL_11;
    case 20480:
      result = 8LL;
      goto LABEL_15;
    case 24576:
LABEL_11:
      result = 4LL;
      goto LABEL_15;
  }
  v6 = 0;
  if ( !(unsigned int)SdbpReadMappedData(a1, v2 + 2, &v6, 4u) )
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 278, (unsigned int)"Error reading size data");
  result = v6;
LABEL_15:
  if ( (int)result + v2 < (unsigned int)result || (unsigned int)(result + v2) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 289, (unsigned int)"Error reading size data");
    return 0xFFFFFFFFLL;
  }
  return result;
}
