/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1802269F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x180679DE4 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 */

void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 176) = *(_QWORD *)(a2 + 368) + 240LL;
  SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord(*(SnapFlyoutHost::FlyoutInstanceRecord **)(a2 + 176));
}
