/*
 * XREFs of sub_1409C8548 @ 0x1409C8548
 * Callers:
 *     sub_1406BC4A0 @ 0x1406BC4A0 (sub_1406BC4A0.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CAD20 (SeCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarmForNonObObject @ 0x1409CAD90 (SeCloseObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409C8548(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        char a5)
{
  __int64 CurrentThreadProcess; // rax
  __int64 v9; // rsi
  int v10; // eax
  const int *v11; // r8
  _QWORD **ClientToken; // rdx
  _QWORD **PrimaryToken; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // ecx
  _QWORD *v17; // rax
  bool v18; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF

  P = 0LL;
  v23 = 0;
  if ( (unsigned __int8)sub_140723F80(a4, a1, 1, 0, (__int64)a3, a5, &v23) && sub_140724320(123LL, 1u, 0, a3) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    v9 = *(_QWORD *)(CurrentThreadProcess + 1088);
    v10 = sub_1407B66E0(CurrentThreadProcess, &P);
    if ( v10 < 0 )
    {
      sub_1409CF1A0((unsigned int)v10);
    }
    else
    {
      memset(Src, 0, 0x418uLL);
      v11 = &qword_140001B08;
      ClientToken = (_QWORD **)a3->ClientToken;
      LOWORD(Src[2]) = v23;
      LODWORD(Src[0]) = 3;
      PrimaryToken = ClientToken;
      if ( a1 )
        v11 = (const int *)a1;
      HIDWORD(Src[0]) = 4658;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !ClientToken )
        PrimaryToken = (_QWORD **)a3->PrimaryToken;
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*PrimaryToken[19] + 1LL) + 8;
      v14 = ClientToken;
      if ( !ClientToken )
        v14 = a3->PrimaryToken;
      v15 = (_QWORD *)v14[19];
      LODWORD(Src[7]) = 1;
      Src[10] = v11;
      Src[11] = 0x800000005LL;
      Src[6] = *v15;
      v16 = *(unsigned __int16 *)v11 + 16;
      HIDWORD(Src[7]) = v16;
      if ( !ClientToken )
        ClientToken = (_QWORD **)a3->PrimaryToken;
      v17 = ClientToken[3];
      Src[18] = v11;
      HIDWORD(Src[15]) = v16;
      Src[19] = 0x80000000BLL;
      Src[12] = v17;
      LODWORD(Src[15]) = 1;
      v18 = sub_1402F3558(a2, 0);
      v20 = v19 ^ 0xFFFFFFFF80000000uLL;
      Src[23] = __PAIR64__(v22, v21);
      Src[24] = v9;
      if ( !v18 )
        v20 = a2;
      LODWORD(Src[27]) = 2;
      LODWORD(Src[1]) = 7;
      Src[20] = v20 & 0xFFFFFFFFFFFFFFFCuLL;
      Src[30] = P;
      HIDWORD(Src[27]) = *(unsigned __int16 *)P + 16;
      sub_1403CD84C(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
