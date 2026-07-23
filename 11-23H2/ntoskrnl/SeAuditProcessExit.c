/*
 * XREFs of SeAuditProcessExit @ 0x1409CB114
 * Callers:
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditProcessExit(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  int AllocatedFullProcessImageName; // eax
  _QWORD *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  _QWORD Src[132]; // [rsp+38h] [rbp-D0h] BYREF

  v3 = a2;
  memset(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v5 = (_QWORD *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
    LODWORD(Src[2]) = 524423;
    Src[0] = 0x125100000005LL;
    v6 = (__int64 *)v5[19];
    Src[10] = &SeSubsystemName;
    Src[12] = v5[3];
    v7 = *v6;
    Src[20] = *(_QWORD *)(a1 + 1088);
    LODWORD(Src[3]) = 4;
    LODWORD(v6) = *(unsigned __int8 *)(v7 + 1);
    Src[6] = v7;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    HIDWORD(Src[3]) = 4 * (_DWORD)v6 + 8;
    Src[26] = 0LL;
    Src[15] = 0x40000000ALL;
    HIDWORD(Src[23]) = MEMORY[0] + 16;
    Src[16] = v3;
    Src[19] = 0x80000000BLL;
    LODWORD(Src[23]) = 2;
    LODWORD(Src[1]) = 6;
    SepAdtLogAuditRecord(Src);
    ObfDereferenceObject(v5);
  }
}
