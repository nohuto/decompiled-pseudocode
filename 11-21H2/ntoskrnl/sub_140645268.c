/*
 * XREFs of sub_140645268 @ 0x140645268
 * Callers:
 *     WheaInitializeRecordHeader @ 0x140645400 (WheaInitializeRecordHeader.c)
 * Callees:
 *     sub_1402D1A48 @ 0x1402D1A48 (sub_1402D1A48.c)
 */

__int64 __fastcall sub_140645268(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  sub_1402D1A48(&v7, &v6, a3);
  v4 = (__int16)v6;
  *a1 = BYTE10(v6);
  a1[1] = BYTE8(v6);
  a1[2] = BYTE6(v6);
  *(_QWORD *)a1 &= ~0x1000000uLL;
  a1[4] = BYTE4(v6);
  a1[5] = BYTE2(v6);
  result = (unsigned int)(100 * (v4 / 100));
  a1[7] = v4 / 100;
  a1[6] = v4 % 100;
  return result;
}
