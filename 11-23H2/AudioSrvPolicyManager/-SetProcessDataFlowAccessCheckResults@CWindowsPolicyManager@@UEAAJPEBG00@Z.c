/*
 * XREFs of ?SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00@Z @ 0x18001E810
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z @ 0x18002EF68 (-ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetProcessDataFlowAccessCheckResults(
        CWindowsPolicyManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CApplicationManager::ResetProcessDataFlowAccessCheckResults(this, a3, a4);
  return 0LL;
}
