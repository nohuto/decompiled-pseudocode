/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9_____lambda_1aee4869d851818eb418eb7ce880dfe9___ @ 0x18057EFB4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___ @ 0x1802E4A4C (Windows--Internal--ComTaskPool--QueueTask__lambda_1aee4869d851818eb418eb7ce880dfe9___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9___::CTaskWrapper__lambda_1aee4869d851818eb418eb7ce880dfe9_____lambda_1aee4869d851818eb418eb7ce880dfe9___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  *a1 = off_1807E6EA0;
  return a1;
}
