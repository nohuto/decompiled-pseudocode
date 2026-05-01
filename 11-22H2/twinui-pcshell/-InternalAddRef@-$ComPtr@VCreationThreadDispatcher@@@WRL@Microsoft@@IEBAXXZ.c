/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEBAXXZ @ 0x1801755EC
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_21a77d8432acb5502686125a77e03100___ @ 0x1801D9ECC (CreationThreadDispatcher--RunAsync__lambda_21a77d8432acb5502686125a77e03100___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_bcebae3c85cfd9e005edaacce9819866___ @ 0x1801E4538 (CreationThreadDispatcher--RunAsync__lambda_bcebae3c85cfd9e005edaacce9819866___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_4c0f6ed1d632f9eabd9f454ff611597b___ @ 0x1801E4D4C (CreationThreadDispatcher--RunAsync__lambda_4c0f6ed1d632f9eabd9f454ff611597b___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b945abeeb0d2b18f20f6e47375aac32a___ @ 0x1801E4E18 (CreationThreadDispatcher--RunAsync__lambda_b945abeeb0d2b18f20f6e47375aac32a___.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
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
