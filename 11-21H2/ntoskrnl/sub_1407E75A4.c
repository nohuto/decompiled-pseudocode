/*
 * XREFs of sub_1407E75A4 @ 0x1407E75A4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1409AF8C4 @ 0x1409AF8C4 (sub_1409AF8C4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407E6840 @ 0x1407E6840 (sub_1407E6840.c)
 */

__int64 __fastcall sub_1407E75A4(__int64 *a1, int a2, __int64 *a3, int a4, int a5)
{
  int v9; // ecx
  _DWORD v11[20]; // [rsp+60h] [rbp-58h] BYREF

  memset(v11, 0, 0x48uLL);
  v11[8] = a4;
  v9 = a5 != 0 ? -1073741824 : 0x80000000;
  if ( (v9 & 0x40000000) == 0 || (dword_140D06880 & 0x2000000) != 0 )
    return sub_1407E6840(-1, a1, a2, a3, 0x2000, a5 != 0 ? 2 : 4, (__int64)v11, 0, v9, 0, 0LL);
  else
    return 3221225659LL;
}
