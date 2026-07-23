/*
 * XREFs of WheaInitializeRecordHeader @ 0x140645400
 * Callers:
 *     sub_140506578 @ 0x140506578 (sub_140506578.c)
 *     sub_140506860 @ 0x140506860 (sub_140506860.c)
 *     sub_14050A324 @ 0x14050A324 (sub_14050A324.c)
 *     sub_140645708 @ 0x140645708 (sub_140645708.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140645268 @ 0x140645268 (sub_140645268.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  memset(a1, 0, 0x80uLL);
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[4] |= 2u;
  *((_OWORD *)a1 + 4) = xmmword_1400256D0;
  *a1 = 1380274243;
  *((_WORD *)a1 + 2) = 528;
  a1[3] = 3;
  sub_140645268((_BYTE *)a1 + 24, v2, v3);
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&qword_140CE1A90);
  return 0LL;
}
