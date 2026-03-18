/*
 * XREFs of NVMeSendLunInternalData @ 0x1C0028BAC
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0008740 (NVMeHwUnitControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 *     memset @ 0x1C0004D40 (memset.c)
 */

_BOOL8 __fastcall NVMeSendLunInternalData(__int64 a1, __int64 a2)
{
  _QWORD v5[60]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v5, 0, sizeof(v5));
  LODWORD(v5[28]) = 11;
  LODWORD(v5[1]) = 10;
  v5[0] = "NamespaceId";
  v5[2] = a2 + 16;
  v5[3] = "States";
  LODWORD(v5[4]) = 14;
  v5[5] = a2 + 20;
  LODWORD(v5[22]) = 14;
  v5[6] = "IoRecord.SuccessCount";
  LODWORD(v5[7]) = 10;
  v5[8] = a2 + 24;
  v5[9] = "IoRecord.OtherErrorCount";
  v5[11] = a2 + 32;
  v5[12] = "IoRecord.IoSplitCount";
  v5[14] = a2 + 36;
  v5[15] = "IoRecord.PortDriverResetCount";
  v5[17] = a2 + 40;
  v5[18] = "IoRecord.TotalResetCount";
  v5[20] = a2 + 44;
  v5[21] = "LbaFormat";
  v5[23] = a2 + 48;
  v5[24] = "LogicalBlockSize";
  v5[26] = a2 + 52;
  v5[27] = "LogicalBlockCount";
  v5[29] = a2 + 56;
  v5[30] = "ThinProvisioning";
  v5[32] = a2 + 65;
  v5[33] = "End2EndProtection";
  v5[35] = a2 + 66;
  v5[36] = "NGUID";
  v5[38] = a2 + 68;
  v5[39] = "EUI64";
  LODWORD(v5[10]) = 10;
  LODWORD(v5[13]) = 10;
  LODWORD(v5[16]) = 10;
  LODWORD(v5[19]) = 10;
  LODWORD(v5[25]) = 10;
  LODWORD(v5[31]) = 8;
  LODWORD(v5[34]) = 8;
  LODWORD(v5[37]) = 16;
  WORD2(v5[37]) = 16;
  LODWORD(v5[40]) = 16;
  WORD2(v5[40]) = 8;
  LODWORD(v5[52]) = 10;
  LODWORD(v5[43]) = 9;
  v5[41] = a2 + 84;
  LODWORD(v5[46]) = 9;
  v5[42] = "OptimalIoBoundary";
  LODWORD(v5[49]) = 9;
  v5[44] = a2 + 92;
  v5[51] = "OptimalWriteSize";
  v5[45] = "SetId";
  v5[47] = a2 + 94;
  v5[48] = "EnduranceGroupId";
  v5[50] = a2 + 96;
  v5[53] = a2 + 100;
  v5[56] = a2 + 100;
  v5[57] = "ReservationCapabilities";
  v5[59] = a2 + 112;
  v5[54] = "OptimalWriteSize";
  LODWORD(v5[55]) = 10;
  LODWORD(v5[58]) = 12;
  return (unsigned int)StorPortExtendedFunction(115LL, a1, a2) != 0;
}
