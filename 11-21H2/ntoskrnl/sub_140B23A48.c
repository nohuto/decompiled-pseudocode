/*
 * XREFs of sub_140B23A48 @ 0x140B23A48
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     sub_14084F9EC @ 0x14084F9EC (sub_14084F9EC.c)
 *     sub_14085071C @ 0x14085071C (sub_14085071C.c)
 *     sub_14085094C @ 0x14085094C (sub_14085094C.c)
 *     sub_140B23B40 @ 0x140B23B40 (sub_140B23B40.c)
 *     sub_140B23CDC @ 0x140B23CDC (sub_140B23CDC.c)
 *     sub_140B23F80 @ 0x140B23F80 (sub_140B23F80.c)
 */

__int64 sub_140B23A48()
{
  __int64 v0; // rdx

  sub_140B23B40(&qword_140C54300);
  sub_140B23F80(&unk_140C54598);
  sub_14085094C((__int64)&qword_140C54520);
  sub_14085071C((__int64)&qword_140C54520);
  ExInitializeRundownProtection(&stru_140C54640);
  ExWaitForRundownProtectionRelease(&stru_140C54640);
  ExRundownCompleted(&stru_140C54640);
  qword_140C54648 = 0LL;
  qword_140C54650 = 0LL;
  dword_140C54668 |= 1u;
  qword_140C54660 = (__int64)&qword_140C54658;
  qword_140C54658 = (__int64)&qword_140C54658;
  sub_140B23CDC();
  sub_14084F9EC(&qword_140C4E960, v0, 0);
  if ( qword_140C54308 )
    ZwNotifyChangeKey(
      qword_140C54308,
      0LL,
      unk_140C54320,
      (PVOID)1,
      &stru_140C54310,
      0x1000000Fu,
      0,
      &unk_140C54340,
      4u,
      1u);
  return 0LL;
}
