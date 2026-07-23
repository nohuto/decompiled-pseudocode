/*
 * XREFs of sub_1409C8774 @ 0x1409C8774
 * Callers:
 *     sub_1409CAC10 @ 0x1409CAC10 (sub_1409CAC10.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CADE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409C8774(
        const UNICODE_STRING *a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int128 *a5,
        char a6)
{
  __int64 CurrentThreadProcess; // rax
  int v10; // eax
  __int128 *v11; // rsi
  const int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  bool v19; // al
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rax
  unsigned __int16 v24; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+470h] [rbp+370h] BYREF

  P = 0LL;
  v24 = 0;
  v27 = 0LL;
  if ( (unsigned __int8)sub_140723F80(a4, a1, 1, 0, 0LL, a6, &v24) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    v10 = sub_1407B66E0(CurrentThreadProcess, &P);
    if ( v10 < 0 )
    {
      sub_1409CF1A0((unsigned int)v10);
    }
    else
    {
      v11 = &v27;
      if ( a5 )
        v11 = a5;
      memset(Src, 0, 0x418uLL);
      v12 = &qword_140001B08;
      v13 = *a3;
      LOWORD(Src[2]) = v24;
      LODWORD(Src[0]) = 3;
      v14 = v13;
      if ( a1 )
        v12 = (const int *)a1;
      HIDWORD(Src[0]) = 4660;
      WORD1(Src[2]) = 8;
      LODWORD(Src[3]) = 4;
      if ( !v13 )
        v14 = a3[2];
      HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(**(_QWORD **)(v14 + 152) + 1LL) + 8;
      v15 = v13;
      if ( !v13 )
        v15 = a3[2];
      v16 = *(_QWORD **)(v15 + 152);
      LODWORD(Src[7]) = 1;
      Src[10] = v12;
      Src[11] = 0x800000005LL;
      Src[6] = *v16;
      v17 = *(unsigned __int16 *)v12 + 16;
      HIDWORD(Src[7]) = v17;
      if ( !v13 )
        v13 = a3[2];
      v18 = *(_QWORD *)(v13 + 24);
      Src[18] = v12;
      HIDWORD(Src[15]) = v17;
      Src[19] = 0x80000000BLL;
      Src[12] = v18;
      LODWORD(Src[15]) = 1;
      v19 = sub_1402F3558(a2, 0);
      v21 = v20 ^ 0xFFFFFFFF80000000uLL;
      Src[23] = v22 | 0x800000000LL;
      if ( !v19 )
        v21 = a2;
      Src[20] = v21 & 0xFFFFFFFFFFFFFFFCuLL;
      v23 = PsGetCurrentThreadProcess();
      LODWORD(Src[27]) = 2;
      Src[31] = 0x100000000DLL;
      Src[24] = *(_QWORD *)(v23 + 1088);
      Src[30] = P;
      Src[34] = v11;
      LODWORD(Src[1]) = 8;
      HIDWORD(Src[27]) = *(unsigned __int16 *)P + 16;
      sub_1403CD84C(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
