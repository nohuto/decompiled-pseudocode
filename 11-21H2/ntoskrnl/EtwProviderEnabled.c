/*
 * XREFs of EtwProviderEnabled @ 0x1402EDE50
 * Callers:
 *     sub_14024BD24 @ 0x14024BD24 (sub_14024BD24.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     sub_1402EDDF8 @ 0x1402EDDF8 (sub_1402EDDF8.c)
 *     sub_14062F0B8 @ 0x14062F0B8 (sub_14062F0B8.c)
 *     sub_1406D97E0 @ 0x1406D97E0 (sub_1406D97E0.c)
 *     sub_1406E30E0 @ 0x1406E30E0 (sub_1406E30E0.c)
 *     sub_1406EBE78 @ 0x1406EBE78 (sub_1406EBE78.c)
 *     sub_1406EC338 @ 0x1406EC338 (sub_1406EC338.c)
 *     sub_14070592C @ 0x14070592C (sub_14070592C.c)
 *     sub_140747D68 @ 0x140747D68 (sub_140747D68.c)
 *     sub_14074F418 @ 0x14074F418 (sub_14074F418.c)
 *     sub_14079EA28 @ 0x14079EA28 (sub_14079EA28.c)
 *     sub_14079EC58 @ 0x14079EC58 (sub_14079EC58.c)
 *     sub_140857064 @ 0x140857064 (sub_140857064.c)
 *     sub_1408833DA @ 0x1408833DA (sub_1408833DA.c)
 *     sub_1409E637C @ 0x1409E637C (sub_1409E637C.c)
 *     sub_1409E6524 @ 0x1409E6524 (sub_1409E6524.c)
 *     sub_1409E668C @ 0x1409E668C (sub_1409E668C.c)
 * Callees:
 *     sub_1403031F0 @ 0x1403031F0 (sub_1403031F0.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v4; // rax
  UCHAR v5; // cl
  BOOLEAN result; // al

  result = 0;
  if ( RegHandle )
  {
    v4 = *(_QWORD *)(RegHandle + 32);
    if ( *(_DWORD *)(v4 + 96) )
    {
      v5 = *(_BYTE *)(v4 + 100);
      if ( (Level <= v5 || !v5)
        && ((*(_DWORD *)(v4 + 104) & 0x40) != 0 && !Keyword
         || (Keyword & *(_QWORD *)(v4 + 112)) != 0 && (Keyword & *(_QWORD *)(v4 + 120)) == *(_QWORD *)(v4 + 120)) )
      {
        return 1;
      }
    }
    if ( *(_BYTE *)(RegHandle + 101)
      && (unsigned __int8)sub_1403031F0(*(_QWORD *)(RegHandle + 40) + 96LL, Level, Keyword) )
    {
      return 1;
    }
  }
  return result;
}
