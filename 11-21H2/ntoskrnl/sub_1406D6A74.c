/*
 * XREFs of sub_1406D6A74 @ 0x1406D6A74
 * Callers:
 *     sub_1406D6860 @ 0x1406D6860 (sub_1406D6860.c)
 *     sub_140828810 @ 0x140828810 (sub_140828810.c)
 *     sub_1409BABB4 @ 0x1409BABB4 (sub_1409BABB4.c)
 * Callees:
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall sub_1406D6A74(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h]

  v6 = 1LL;
  InputBuffer[0] = a2;
  InputBuffer[1] = a4;
  InputBuffer[2] = a3;
  if ( a1 )
    HIDWORD(v6) = 1;
  return ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
}
