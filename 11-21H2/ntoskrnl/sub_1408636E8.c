/*
 * XREFs of sub_1408636E8 @ 0x1408636E8
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 */

__int64 sub_1408636E8()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v2[8]; // [rsp+40h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x14u;
  *((_QWORD *)&v2[3] + 1) = sub_1406C2D20;
  LOWORD(v2[0]) = 120;
  *((_QWORD *)&v2[4] + 1) = sub_1409EB970;
  DWORD2(v2[0]) = 256;
  *(GENERIC_MAPPING *)((char *)v2 + 12) = stru_140010DA8;
  *(_QWORD *)((char *)&v2[2] + 4) = 0x2000000001LL;
  RtlInitUnicodeString(&DestinationString, L"EtwSessionDemuxEntry");
  return ObCreateObjectTypeEx(&DestinationString, v2, 0LL, 0LL, &qword_140D06D78);
}
