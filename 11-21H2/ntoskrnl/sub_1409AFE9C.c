/*
 * XREFs of sub_1409AFE9C @ 0x1409AFE9C
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406E56E0 @ 0x1406E56E0 (sub_1406E56E0.c)
 * Callees:
 *     sub_1402091B0 @ 0x1402091B0 (sub_1402091B0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x1403C7500 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall sub_1409AFE9C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID **v5; // rbx
  __int64 v6; // rax
  PVOID *v7; // rax
  PVOID *v8; // rbx
  PVOID *result; // rax
  __int64 v10; // rax
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-48h]
  _OWORD v13[3]; // [rsp+30h] [rbp-40h] BYREF

  p_P = &P;
  P = &P;
  memset(v13, 0, sizeof(v13));
  while ( 1 )
  {
    v5 = (PVOID **)qword_140CF5E60;
    if ( (__int64 *)qword_140CF5E60 == &qword_140CF5E60 )
      break;
    if ( *(__int64 **)(qword_140CF5E60 + 8) != &qword_140CF5E60
      || (v6 = *(_QWORD *)qword_140CF5E60, *(_QWORD *)(*(_QWORD *)qword_140CF5E60 + 8LL) != qword_140CF5E60)
      || (qword_140CF5E60 = *(_QWORD *)qword_140CF5E60, *(_QWORD *)(v6 + 8) = &qword_140CF5E60, v7 = p_P, *p_P != &P) )
    {
LABEL_14:
      __fastfail(3u);
    }
    v5[1] = p_P;
    *v5 = &P;
    *v7 = v5;
    p_P = (PVOID *)v5;
    sub_14030D5C0((ULONG_PTR)v5[2], 0LL, (__int64)v13, a4);
    MmAdjustWorkingSetSize((unsigned __int64)v5[3], (unsigned __int64)v5[4], 0, 1);
    sub_1402091B0((ULONG_PTR)v5[2], 1);
    sub_1402D0930((__int64)v13, 0LL);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFFFFFEFF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF5E70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140CF5E70);
  sub_1402AFC00((ULONG_PTR)&qword_140CF5E70);
  while ( 1 )
  {
    v8 = (PVOID *)P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_14;
    v10 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_14;
    P = *(PVOID *)P;
    *(_QWORD *)(v10 + 8) = &P;
    ObfDereferenceObjectWithTag(v8[2], 0x624A7350u);
    ExFreePoolWithTag(v8, 0x72437350u);
  }
}
