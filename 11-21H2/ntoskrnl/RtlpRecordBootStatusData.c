/*
 * XREFs of RtlpRecordBootStatusData @ 0x1406D6A74
 * Callers:
 *     RtlpGetSetBootStatusData @ 0x1406D6860 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140828810 (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BABB4 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall RtlpRecordBootStatusData(char a1, __int64 a2, __int64 a3, __int64 a4)
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
