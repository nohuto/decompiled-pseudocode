/*
 * XREFs of ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030758
 * Callers:
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D74 (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
 *     _lambda_887eec80cbd262f34f149ad6d6f79b4e_::operator() @ 0x180071250 (_lambda_887eec80cbd262f34f149ad6d6f79b4e_--operator().c)
 *     ?ReevaluateGameModeOperation@CBtLeAudioResourceManager@@IEAAXXZ @ 0x1800FBF38 (-ReevaluateGameModeOperation@CBtLeAudioResourceManager@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::critical_section::lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  EnterCriticalSection(a1);
  *a2 = a1;
  return a2;
}
