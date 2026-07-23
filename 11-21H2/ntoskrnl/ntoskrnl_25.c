/*
 * XREFs of ntoskrnl_25 @ 0x1403C54B0
 * Callers:
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 * Callees:
 *     sub_14082E638 @ 0x14082E638 (sub_14082E638.c)
 */

__int64 ntoskrnl_25()
{
  qword_140D3B460 = (__int64)ExUpdateLicenseData;
  qword_140D3B468 = (__int64)ntoskrnl_27;
  qword_140D3B470 = (__int64)ntoskrnl_28;
  qword_140D3B478 = (__int64)SeExports;
  ClipSpInitialize(0LL, &unk_140D3B340);
  return sub_14082E638();
}
