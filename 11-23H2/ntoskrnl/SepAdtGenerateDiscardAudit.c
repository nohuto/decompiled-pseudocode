/*
 * XREFs of SepAdtGenerateDiscardAudit @ 0x1409CBE50
 * Callers:
 *     SepAdtDetermineInsertQueue @ 0x1403AD980 (SepAdtDetermineInsertQueue.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtGenerateDiscardAudit(unsigned int *P)
{
  int v2; // eax
  _QWORD Src[132]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Src, 0, 0x418uLL);
  v2 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  Src[0] = 0x120400000001LL;
  LODWORD(Src[2]) = 524390;
  Src[6] = SeLocalSystemSid;
  HIDWORD(Src[3]) = 4 * v2 + 8;
  LODWORD(Src[3]) = 4;
  Src[10] = &SeSubsystemName;
  Src[12] = P[8];
  Src[7] = 0x2000000001LL;
  Src[11] = 0x40000001BLL;
  LODWORD(Src[1]) = 3;
  SepAdtLogAuditRecord(Src);
  if ( *((_BYTE *)P + 36) )
    ExFreePoolWithTag(P, 0);
}
