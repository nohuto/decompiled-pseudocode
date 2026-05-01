/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2_____lambda_f3af541e54fed362ec31214e5f0f3de2___ @ 0x1805B56DC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f3af541e54fed362ec31214e5f0f3de2___ @ 0x1805B594C (Windows--Internal--ComTaskPool--QueueTask__lambda_f3af541e54fed362ec31214e5f0f3de2___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2_____lambda_f3af541e54fed362ec31214e5f0f3de2___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  v5 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v5 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_180667C88;
  return a1;
}
