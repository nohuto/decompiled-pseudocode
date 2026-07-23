/*
 * XREFs of sub_1407241BC @ 0x1407241BC
 * Callers:
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1406CE5F8 @ 0x1406CE5F8 (sub_1406CE5F8.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     SePrivilegeObjectAuditAlarm @ 0x140724160 (SePrivilegeObjectAuditAlarm.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_14081A150 @ 0x14081A150 (sub_14081A150.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14072427C @ 0x14072427C (sub_14072427C.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1407241BC(
        const int *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int *a9,
        char a10)
{
  unsigned __int16 *v10; // r12
  unsigned __int16 *v11; // rsi
  PSID *v13; // rax
  unsigned __int8 *v14; // r13
  __int64 CurrentThreadProcess; // rax
  int v16; // eax
  const int *v17; // r15
  __int64 v18; // rbx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  bool v23; // al
  unsigned __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // r10
  int v27; // r11d
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // eax
  int v31; // ecx
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  const int *v34; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-B8h]
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v34 = a1;
  v10 = a3;
  v35 = a4;
  LOBYTE(a3) = a10 == 0;
  v11 = a2;
  LOWORD(v32) = 0;
  P = 0LL;
  LOBYTE(a2) = a10;
  if ( !(unsigned __int8)sub_14072427C((_DWORD)a9, (_DWORD)a2, (_DWORD)a3, 0, (__int64)&v32) )
    return 0;
  v13 = a5 ? *(PSID **)(a5 + 152) : *(PSID **)(a6 + 152);
  v14 = (unsigned __int8 *)*v13;
  if ( RtlEqualSid(Group, *v13) )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v16 = sub_1407B66E0(CurrentThreadProcess, &P);
  if ( v16 < 0 )
  {
    sub_1409CF1A0((unsigned int)v16);
    return 0;
  }
  v17 = &qword_140001B08;
  v18 = *(_QWORD *)(a6 + 24);
  if ( v34 )
    v17 = v34;
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x124200000004LL;
  LOWORD(Src[2]) = v32;
  WORD1(Src[2]) = 8;
  if ( !a10 )
    WORD1(Src[2]) = 16;
  v19 = v14[1];
  v20 = *(unsigned __int16 *)v17 + 16;
  Src[6] = v14;
  LODWORD(Src[3]) = 4;
  LODWORD(Src[7]) = 1;
  HIDWORD(Src[3]) = 4 * v19 + 8;
  HIDWORD(Src[7]) = v20;
  Src[10] = v17;
  Src[11] = 0x800000005LL;
  if ( a5 )
    Src[12] = *(_QWORD *)(a5 + 24);
  else
    Src[12] = v18;
  LODWORD(Src[15]) = 1;
  HIDWORD(Src[15]) = v20;
  Src[18] = v17;
  if ( v11 )
  {
    v21 = *v11;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v21 + 16;
    Src[22] = v11;
  }
  if ( v10 )
  {
    v22 = *v10;
    LODWORD(Src[23]) = 2;
    HIDWORD(Src[23]) = v22 + 16;
    Src[26] = v10;
  }
  Src[27] = 0x80000000BLL;
  v23 = sub_1402F3558(v35, 0);
  v29 = v28 ^ 0xFFFFFFFF80000000uLL;
  HIDWORD(Src[31]) = v26;
  Src[32] = a8;
  if ( !v23 )
    v29 = v24;
  Src[28] = v29 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v11 )
  {
    LODWORD(Src[31]) = 7;
    Src[33] = v26;
  }
  else
  {
    LODWORD(Src[31]) = 3;
  }
  if ( a9 )
  {
    v30 = *a9;
    if ( *a9 )
    {
      LODWORD(Src[35]) = v25;
      Src[38] = a9;
      HIDWORD(Src[35]) = 12 * v30 + 8;
    }
  }
  Src[40] = a7;
  LODWORD(Src[39]) = 11;
  v31 = *(unsigned __int16 *)P;
  HIDWORD(Src[39]) = v25;
  HIDWORD(Src[43]) = v27 + v31;
  LODWORD(Src[43]) = 2;
  Src[46] = P;
  LODWORD(Src[1]) = 11;
  sub_1403CD84C(Src);
  ExFreePoolWithTag(P, 0);
  return 1;
}
