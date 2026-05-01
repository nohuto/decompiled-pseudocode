/*
 * XREFs of ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x1802F26B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::RemoveApplication(
        __int64 a1,
        unsigned __int64 a2)
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::RemoveAt(
           (_QWORD *)(a1 + 8),
           a2);
}
