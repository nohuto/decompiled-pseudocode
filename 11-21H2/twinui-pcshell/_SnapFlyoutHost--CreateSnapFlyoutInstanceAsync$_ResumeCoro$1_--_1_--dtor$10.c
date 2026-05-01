/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$10 @ 0x1801BFD01
 * Callers:
 *     <none>
 * Callees:
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1805AEB10 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 336) + 224LL;
  SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord(*(SnapFlyoutHost::FlyoutInstanceRecord **)(a2 + 168));
}
