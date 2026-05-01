/*
 * XREFs of ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805AE26C
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0UFlyoutInstanceRecord@SnapFlyoutHost@@@?$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAA@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805AD55C (--$-0UFlyoutInstanceRecord@SnapFlyoutHost@@@-$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHo.c)
 */

__int64 *__fastcall std::make_shared<SnapFlyoutHost::FlyoutInstanceRecord,SnapFlyoutHost::FlyoutInstanceRecord>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *result; // rax
  void *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x78uLL);
  v4 = std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>(
         (__int64)v7,
         a2);
  a1[1] = v4;
  v5 = v4 + 16;
  result = a1;
  *a1 = v5;
  return result;
}
