/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x14030B700
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405BA158 @ 0x1405BA158 (sub_1405BA158.c)
 *     sub_1406BFC4C @ 0x1406BFC4C (sub_1406BFC4C.c)
 *     sub_1406E97B4 @ 0x1406E97B4 (sub_1406E97B4.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_14097CAE8 @ 0x14097CAE8 (sub_14097CAE8.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 *     sub_14098056C @ 0x14098056C (sub_14098056C.c)
 *     sub_1409F8DD8 @ 0x1409F8DD8 (sub_1409F8DD8.c)
 *     sub_140A8D338 @ 0x140A8D338 (sub_140A8D338.c)
 * Callees:
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return sub_1402AC010(*(_QWORD *)(a1 + 1384), a1, 0, a2);
}
