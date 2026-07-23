/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1403107C0
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405BA624 @ 0x1405BA624 (sub_1405BA624.c)
 *     sub_1406D804C @ 0x1406D804C (sub_1406D804C.c)
 *     sub_1406EB238 @ 0x1406EB238 (sub_1406EB238.c)
 *     sub_1407BC8F0 @ 0x1407BC8F0 (sub_1407BC8F0.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140977F8C @ 0x140977F8C (sub_140977F8C.c)
 *     sub_14097CF84 @ 0x14097CF84 (sub_14097CF84.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 *     sub_14097EFF0 @ 0x14097EFF0 (sub_14097EFF0.c)
 *     sub_14098056C @ 0x14098056C (sub_14098056C.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 *     sub_140980D40 @ 0x140980D40 (sub_140980D40.c)
 *     sub_1409F8D78 @ 0x1409F8D78 (sub_1409F8D78.c)
 *     sub_1409F8DD8 @ 0x1409F8DD8 (sub_1409F8DD8.c)
 *     sub_140A8CEB8 @ 0x140A8CEB8 (sub_140A8CEB8.c)
 *     sub_140A8D338 @ 0x140A8D338 (sub_140A8D338.c)
 * Callees:
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 */

__int64 __fastcall PsReturnProcessNonPagedPoolQuota(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return sub_1403493B0(*(_QWORD *)(a1 + 1384), a1, 0LL, a2);
  return result;
}
