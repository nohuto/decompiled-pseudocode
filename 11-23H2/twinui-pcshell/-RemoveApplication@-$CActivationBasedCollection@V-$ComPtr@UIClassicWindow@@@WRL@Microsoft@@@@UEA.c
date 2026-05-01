/*
 * XREFs of ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x1801753C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication(
        __int64 a1,
        __int64 a2)
{
  return CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::RemoveAt(
           a1 + 8,
           a2);
}
