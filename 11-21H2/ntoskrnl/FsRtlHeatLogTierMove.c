/*
 * XREFs of FsRtlHeatLogTierMove @ 0x14092FAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140542E48 @ 0x140542E48 (sub_140542E48.c)
 */

__int64 __fastcall FsRtlHeatLogTierMove(int *a1, _QWORD *a2, __int64 a3, int a4, int a5, int a6, const GUID *a7)
{
  int v11; // [rsp+48h] [rbp-10h]

  if ( (byte_140C48A78 & 0x10) != 0 )
  {
    v11 = *a1;
    sub_140542E48((__int64)a1, (__int64)a2, a7, *a2, a2[1], a3, a4, a5, a6, v11);
  }
  return 0LL;
}
