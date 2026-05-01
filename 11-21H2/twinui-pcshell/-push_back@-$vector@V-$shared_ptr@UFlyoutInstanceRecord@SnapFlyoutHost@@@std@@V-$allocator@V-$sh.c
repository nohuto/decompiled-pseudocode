/*
 * XREFs of ?push_back@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@2@@Z @ 0x1805B2034
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::push_back(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::_Emplace_reallocate<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>(
             a1,
             (char *)v3,
             a2);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = *a2;
  result = (_QWORD *)a2[1];
  *(_QWORD *)(v3 + 8) = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[1] += 16LL;
  return result;
}
