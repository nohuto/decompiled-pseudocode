/*
 * XREFs of sub_140A4E3A0 @ 0x140A4E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     sub_14038D3D0 @ 0x14038D3D0 (sub_14038D3D0.c)
 *     sub_1403B6BDC @ 0x1403B6BDC (sub_1403B6BDC.c)
 *     sub_1406EBBF0 @ 0x1406EBBF0 (sub_1406EBBF0.c)
 *     sub_1406EBCAC @ 0x1406EBCAC (sub_1406EBCAC.c)
 *     sub_1407FFF4C @ 0x1407FFF4C (sub_1407FFF4C.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 *     sub_140800204 @ 0x140800204 (sub_140800204.c)
 *     sub_140800270 @ 0x140800270 (sub_140800270.c)
 *     sub_1408002B4 @ 0x1408002B4 (sub_1408002B4.c)
 *     sub_1408002F8 @ 0x1408002F8 (sub_1408002F8.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_140801014 @ 0x140801014 (sub_140801014.c)
 *     sub_14081CF98 @ 0x14081CF98 (sub_14081CF98.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

LONG sub_140A4E3A0()
{
  __int64 v0; // rcx

  qword_140C22980 = (__int64)KeGetCurrentThread();
  sub_1407FFF4C(1);
  sub_1407FFFE4(1u);
  ExNotifyCallback(qword_140C158D0, (PVOID)3, (PVOID)1);
  sub_14038D3D0();
  MmUnlockPagableImageSection(ImageSectionHandle);
  sub_140A4B974(41);
  sub_1403B6BDC(0);
  sub_140800204();
  sub_140800270();
  sub_1408002B4(0);
  sub_1406EBCAC();
  sub_1408002F8();
  sub_140800338();
  sub_140A48330();
  if ( BYTE8(xmmword_140C23400) )
    sub_140801014(v0);
  sub_1406EBBF0();
  sub_140A47CF8();
  qword_140C22980 = 0LL;
  return sub_14081CF98(1);
}
