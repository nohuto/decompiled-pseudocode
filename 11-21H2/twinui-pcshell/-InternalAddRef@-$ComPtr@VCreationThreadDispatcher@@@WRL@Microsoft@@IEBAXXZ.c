/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEBAXXZ @ 0x180158CBC
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_67f1862805ee8077baf0f70ad7f386d7___ @ 0x180197B28 (CreationThreadDispatcher--RunAsync__lambda_67f1862805ee8077baf0f70ad7f386d7___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___ @ 0x180197BF4 (CreationThreadDispatcher--RunAsync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA178 (CreationThreadDispatcher--RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 44), a2);
  return result;
}
