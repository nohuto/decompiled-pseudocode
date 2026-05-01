/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YGJPAXIPBD@Z @ 0x100033D4
 * Callers:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CGJPAXPAJ@Z @ 0x100035BC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CGJPAXPAJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z @ 0x1000493A (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z.c)
 */

int __userpurge wil::details::in1diag3::Return_GetLastError@<eax>(
        unsigned int a1@<ecx>,
        wil::details::in1diag3 *this,
        void *a3,
        unsigned int a4,
        const char *a5)
{
  int v6; // [esp-10h] [ebp-10h]
  int v7; // [esp-Ch] [ebp-Ch]
  int v8; // [esp-8h] [ebp-8h]
  char *retaddr; // [esp+4h] [ebp+4h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(a1, v6, v7, v8, retaddr);
}
