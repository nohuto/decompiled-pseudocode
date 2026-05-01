/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x180031018
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x180030F98 (Windows--Internal--ComTaskPool--QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____lambda_1a5eae780b6c1663d254d797c20a7e0a___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  *(_QWORD *)a1 = off_18061CF50;
  return a1;
}
